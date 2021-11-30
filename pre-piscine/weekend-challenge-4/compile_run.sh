#bin/bash

file_name=$1
output_name=${file_name:0:-2}

gcc $file_name -o $output_name

./$output_name $2
