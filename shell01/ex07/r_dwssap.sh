#!/bin/sh
cat /etc/passwd | grep "^[^#]" | cut -d':' -f1 | awk "NR % 2 == 0" | rev | sort -dr | awk "FNR>=$FT_LINE1 && FNR<=$FT_LINE2" | sed s/$/,/ | tr '\n' ' ' | sed 's/, $/./'