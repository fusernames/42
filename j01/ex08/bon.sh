#!/bin/sh
ldapsearch -xLLL sn | grep "sn: " | grep -c "BON"
