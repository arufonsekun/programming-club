#!/bin/bash

echo "Type the input test case: "
read input
cat /dev/null > input
echo $input >> input

echo "Type the test case answer: "
read answer
cat /dev/null > answer
echo $answer >> answer

./a.out < input > output

if diff answer output >/dev/null ; then
    echo "The test pass \o/"
else
    echo "The test don't pass ;("
fi     
