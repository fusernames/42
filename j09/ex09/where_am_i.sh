#!/bin/sh

IPS=$(ifconfig | grep "inet " | cut -d " " -f2)

if [[ $IPS > 0 ]]
then
	ifconfig | grep 'inet ' | cut -d ' ' -f2
else
	echo "je suis perdu!"
fi
