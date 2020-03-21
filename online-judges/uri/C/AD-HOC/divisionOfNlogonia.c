#include <stdio.h>

int *pmainX, *pmainY;
int *phomeX, *phomeY;

void gps(){
    if (*pmainY == *phomeY | *pmainX == *phomeX)
        printf("%s\n", "divisa");
    else if (*pmainX < *phomeX & *pmainY > *phomeY)
        printf("%s\n", "SE");
    else if (*pmainX > *phomeX & *pmainY > *phomeY)
        printf("%s\n", "SO");
    else if (*pmainX < *phomeX & *pmainY < *phomeY)
        printf("%s\n", "NE");
    else
        printf("%s\n", "NO");
}

int main(){
    unsigned int cases;
    int mainX, mainY;
    int homeX, homeY;

    pmainX = &mainX; pmainY = &mainY;
    phomeX = &homeX; phomeY = &homeY;

    scanf("%u\n", &cases);
    while (cases != 0)
    {
        scanf("%d %d\n", &mainX, &mainY);
        for (unsigned int i = 0; i < cases; i++)
        {
            scanf("%d %d\n", &homeX, &homeY);
            gps();
        }

        scanf("%u\n", &cases);
    }

    return 0;
}
