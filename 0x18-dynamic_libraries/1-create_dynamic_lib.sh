#!/bin/bash

#finding c files
c_files=$(find . -maxdepth 1 -type f -name "*.c")

if [ -z "$c_files" ]; then
	exit 1
fi

# compiling each file 
object_files=""
for file in c_files; do
	object_file=$(basename "$file" .c).o
	gcc -c -fPIC "$file" -o "$object_file"
	if [ $? -ne 0 ]; then 
		exit 1
	fi
	object_files+= " $Object_file"
done

#create the library
gcc -shared -o liball.so $object_files
