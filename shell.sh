#! /bin/bash 

dir="../OJ/HDU"
for file in `ls $dir`
do
	if [ -d "$dir/$file" ];then
		cp "$dir/$file/main.c" "$file.c"
	fi
done
