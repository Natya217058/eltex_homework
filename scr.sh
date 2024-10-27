#!/bin/bash
for i in {1..20}
do
	mkdir $i
	touch $i/$i.txt
done
find .-name '!*4*' -type f 
echo "drugoi" > 14/14.txt

