#include <stdio.h>

int main(){
    unsigned int wp1 = 0, wp2 = 0, cases = 0;
    unsigned short int yell1 = 0, yell2 = 0;

    scanf("%u\n", &cases);

    while (cases != 0){
        for (unsigned int i = 0; i < cases; i++)
        {
            scanf("%hu %hu\n", &yell1, &yell2);
            if (yell1 > yell2)
                wp1++;
            else if (yell2 > yell1)
                wp2++;
        }
        printf("%hu %hu\n", wp1, wp2);
        wp1 = 0;
        wp2 = 0;
        scanf("%u\n", &cases);
    }

    return 0;
}
