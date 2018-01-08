#!/bin/sh

env="prod"
if [ ! -z "$1" ]; then
  env=$1
fi

cd docroot/

drush sql-drop -y

drush sql-sync "@informea.$env" @self -y

drush devify -y

drush updatedb -y

drush upwd informea_admin --password=password

drush vset environment dev

drush cc all
