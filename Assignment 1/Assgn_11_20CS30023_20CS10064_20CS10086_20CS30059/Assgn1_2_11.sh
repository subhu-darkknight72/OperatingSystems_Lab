#!/bin/bash
while read username;
do
    [[ $username =~ ^.{5,20}$ ]] && [[ $username =~ ^[a-zA-Z][a-zA-Z0-9]*[0-9][a-zA-Z0-9]*$ ]] && ! grep -iqFf fruits.txt <<< "$username" && echo "YES" >> validation_results.txt || echo "NO" >> validation_results.txt
done < $1
