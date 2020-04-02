#!/bin/bash

echo "Type the file name"
read file

echo "Type the executable path: "
read path

g++ $path/$file

mv a.out $path

echo "Type the input test case: "
read input

cat /dev/null > $path/input
echo $input >> $path/input

echo "Type the test case answer: "
read answer

cat /dev/null > $path/answer
echo $answer >> $path/answer

cat $path/answer

./$path/a.out < $path/input > $path/output

if diff $path/answer $path/output >/dev/null ; then
    echo "The test pass \o/"
else
    echo "The test don't pass ;("
    echo "Expected output: "
    cat $path/answer
    echo "Real output:"
    cat $path/output
fi     
