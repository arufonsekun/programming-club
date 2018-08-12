#include <stdio.h>

//int instructions[2000];

void decode(char command[32]){

}

int main(){
    char command[32];
    memset(instructions, -1, 2000);

    while (fgets(command, 32, stdin) != NULL){
        printf("%c\n", command[0]);
    }

    return 0;
}
