#!/bin/bash

echo "Synce lokale Dateien mit google-drive"

pidfile=/home/magister/temp/sync.pid
logfile=/home/magister/temp/sync.log

if [ -f $pidfile ]
then
    date | tee -a $logfile
    echo "Backup laeuft bereits. Breche ab" | tee -a  $logfile
    exit 1
fi

touch $pidfile

nice -n 19 rsync -rtvhuPE --delete-before /home/magister/projekte-lokal/verlies-gbdk2000/ /mnt/chromeos/GoogleDrive/MyDrive/projekte/verlies-gbdk2000/

du -sh /home/magister/projekte-lokal/verlies-gbdk2000/ /mnt/chromeos/GoogleDrive/MyDrive/projekte/verlies-gbdk2000/

rm -rf $pidfile

exit 0
