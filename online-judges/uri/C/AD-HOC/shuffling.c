#include <stdio.h>
#include <string.h>

void factorial(unsigned short int len, long long int *output){
    *output = 1;
    for (unsigned int i = 1; i <= len; i++){
        *output = *output * i;
    }
    printf("%lli\n", *output);
}

int main(){
    long long int output = 1;
    long long int *outPointer = &output;

    char input[16];
    char i = '0';
    input[0] = '1';

    scanf("%s", input);
    while (input[0] != '0'){
        factorial(strlen(input), outPointer);
        scanf("%s", input);
    }
    return 0;
}
