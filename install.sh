#!/bin/sh

cd docroot/

drush sql-drop -y

drush sql-sync @informea.prod @self -y

drush devify -y

drush updatedb -y

drush cc all
