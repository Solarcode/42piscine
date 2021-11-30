#bin/bash

rand_num=$((1 + RANDOM % $1))

echo Guess the number in BASH!

while true
do
	read guess
	if [ "$guess" == "$rand_num" ]
	then
		echo Correct, the number is $rand_num!
		exit
	elif [ "$guess" -gt "$rand_num" ]
	then
		echo Lower, try again!
	elif [ "$guess" -lt "$rand_num" ]
	then
		echo Higher, try again!
	fi
done
