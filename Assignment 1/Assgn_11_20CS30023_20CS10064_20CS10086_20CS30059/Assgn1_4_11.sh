#!/bin/bash
while read line; do
    if echo $line | grep -q $2; then
        echo "$line" | sed 's/.*/\U&/' | sed -e 's/\([A-Z][^a-zA-Z]*\)\([A-Z]\)/\1\l\2/g'
    else
        echo $line
    fi
done < $1