#!/usr/bin/env sh

APP_DIR=/var/www
DB_NAME=vagrant
DB_USER=root
DB_PASS=foobar

apt-get update
apt-get install -y php5 php5-gd php5-curl php5-sqlite php-pear unzip php5-mysql php5-pgsql apache2 libapache2-mod-php5 curl

pear channel-discover pear.drush.org
pear install drush/drush

sed -i 's/AllowOverride None/AllowOverride all/g' /etc/apache2/sites-enabled/000-default
sudo a2enmod rewrite
sudo a2enmod expires
sudo a2enmod auth_basic
sudo a2enmod headers
sudo service apache2 restart

echo "mysql-server mysql-server/root_password password $DB_PASS" | debconf-set-selections
echo "mysql-server mysql-server/root_password_again password $DB_PASS" | debconf-set-selections
apt-get -y install mysql-server
if [ -r "${APP_DIR}/database.sql.gz" ]; then
    mysqladmin -u $DB_USER -p$DB_PASS create $DB_NAME
    gunzip -c ${APP_DIR}/database.sql.gz | mysql -u $DB_USER -p$DB_PASS $DB_NAME
fi

cat > /home/vagrant/.my.cnf <<END
[client]
password=$DB_PASS
END
