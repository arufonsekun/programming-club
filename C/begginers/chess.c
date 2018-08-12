#include <stdio.h>

int main(){
    unsigned int rows, columns, leftBottom, rightBottom;
    scanf("%u %u\n", &rows, &columns);

    leftBottom = ( (rows % 2 == 0) ? 0 : 1);
    if (leftBottom == 1 & columns % 2 == 1)
        printf("%d\n", 1);
    else if (leftBottom == 0 & columns % 2 == 0)
        printf("%d\n", 1);
    else
        printf("%d\n", 0);


    return 0;
}
