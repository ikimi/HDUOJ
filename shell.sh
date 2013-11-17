#! /bin/bash 

dir="../OJ/HDU"
for file in `ls $dir`
do
	if [ -d "$dir/$file" ];then
		file1=${file:0:1};
		if [ ! -d $file1"000+" ];then
			mkdir $file1"000+"
		fi
		if [ ! -f $file1"000+/"$file.c ];then
			cp "$dir/$file/main.c" $file1"000+/$file.c"
			echo $file1"000+"/$file.c
		fi
	fi
done
