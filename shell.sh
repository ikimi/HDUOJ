#! /bin/bash 

dir="../OJ/HDU"
for file in `ls $dir`
do
	if [ -d "$dir/$file" ];then
		file1=${file:0:1};
		cp "$dir/$file/main.c" $file1"000+/$file.c"
	fi
done
