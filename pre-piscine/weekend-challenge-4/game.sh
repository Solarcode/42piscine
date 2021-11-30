#/bin/bash

range=$1

if [[ $range =~ ^[+-]?[0-9]*$ ]]
then
	bash random.sh $range
	./random $range
	figlet YOU ARE A WINNER!!!
else
	echo Please enter an integer as an argument for the range.
	exit 1
fi
