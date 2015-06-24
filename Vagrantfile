# -*- mode: ruby -*-
# vi: set ft=ruby :

Vagrant.configure("2") do |config|
  config.vm.box = "precise32"
  config.vm.provision :shell, :path => "bootstrap.sh"

  config.vm.network :forwarded_port, guest: 80,   host: 8080
  config.vm.network :forwarded_port, guest: 3306, host: 8306

  # Required for NFS synced folder.
  config.vm.network :private_network, ip: "192.168.33.10"
  config.vm.synced_folder ".", "/var/www", :nfs => true
  config.vm.provider :virtualbox do |vb|
    vb.memory = 4096
    vb.cpus = 4
    vb.customize ["modifyvm", :id, "--cpuexecutioncap", "75"]
  end
end
