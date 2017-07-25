#!/bin/sh
cat /etc/passwd | grep -v '#' | cut -d: -f1 | sed '1d' | sed 'n;d' | rev | sort -r | sed -n $FT_LINE1,$FT_LINE2\p | tr -s '\n' ' ' | sed 's/ /, /g' | tr -d '\n' | sed 's/, $/./' | tr -d '\n'
