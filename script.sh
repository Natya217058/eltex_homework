#!/bin/bash
for i in {1..20}
do 
	mkdir $i.txt
echo $i.txt > $i/$i.txt
done

