# -*- mode: ruby -*-
# vi: set ft=ruby :

VAGRANTFILE_API_VERSION = "2"

Vagrant.configure(VAGRANTFILE_API_VERSION) do |config|
  config.vm.box = "debian/wheezy64"

  # Vagrant 1.7+ automatically inserts a different
  # insecure keypair for each new VM created. The easiest way
  # to use the same keypair for all the machines is to disable
  # this feature and rely on the legacy insecure key.
  #
  # Note:
  # As of Vagrant 1.7.3, it is no longer necessary to disable
  # the keypair creation when using the auto-generated inventory.
  config.ssh.insert_key = false

  config.vm.define "web", primary: true do |web|
    web.vm.provider :virtualbox do |vb|
      vb.customize [
        "modifyvm", :id,
        "--name", "drupal_web",
        "--memory", "1024"
      ]
    end
    web.vm.network :forwarded_port, guest: 80, host: 8080
    web.vm.network :private_network, ip: "192.168.10.2"    # for NFS
    web.vm.synced_folder "docroot", "/var/www", :nfs => true
    web.vm.synced_folder "log", "/var/log/drupal7",
      owner: "vagrant",
      group: "www-data",
      mount_options: ["dmode=775,fmode=664"]
  end

  config.vm.define "db" do |db|
    db.vm.provider :virtualbox do |vb|
      vb.customize [
        "modifyvm", :id,
        "--name", "drupal_db",
        "--memory", "1024"
      ]
    end
    db.vm.network :private_network, ip: "192.168.10.3"
    db.vm.network :forwarded_port, guest: 3306, host: 3306
    db.vm.network :forwarded_port, guest: 5432, host: 5432
    db.vm.network :forwarded_port, guest: 11211, host: 11211
    db.vm.synced_folder "log", "/var/log/drupal7",
      owner: "vagrant",
      group: "www-data",
      mount_options: ["dmode=775,fmode=664"]

    db.vm.provision :ansible do |ansible|
      # provision in parallel
      ansible.limit = "all"
      ansible.playbook = "playbook.yml"
      ansible.groups = {
        "webservers" => ["web"],
        "dbservers" => ["db"],
        "all:children" => ["web", "db"]
      }
      ansible.host_key_checking = false
    end
  end

end
