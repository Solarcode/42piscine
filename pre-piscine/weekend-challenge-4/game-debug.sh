#/bin/bash

range=$1

bash random.sh $range

bash compile_run.sh random.c $range

figlet YOU ARE A WINNER!!!
