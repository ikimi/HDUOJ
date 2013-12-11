#! /bin/bash 

dir="../OJ/HDU"
if [ -d "$dir/$2" ];then
	if [ ! -d $1 ];then
		mkdir $1
	fi
    cp "$dir/$2/main.c" $1"/$2.c"
    echo "$1/$2.c"
fi
