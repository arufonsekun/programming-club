#include <stdio.h>
#include <string.h>

unsigned int distances[1001], islands = 0;
unsigned int islandsMatrix[1001][106];
unsigned int weights[1001][106];

int size(unsigned int row[106]){
    for (unsigned int i = 0; i < 106; i++){
        if (row[i] == 0){
            return i;
            break;
        }
    }
}

int dijkstra(unsigned index, unsigned counter){
    for (unsigned int i = 0; i < size(islandsMatrix[index]); i++){
        if (distances[islandsMatrix[index][i] -1] > weights[index][i] + distances[index]){
            distances[islandsMatrix[index][i] -1] = weights[index][i] + distances[index];
        }
    }

    if (counter <= islands){
        if (index == islands -1){
            dijkstra(0, counter + 1);
        }
        else{
            dijkstra(index +1, counter +1);
        }
    }
}

int main(){
    unsigned int connections, i1, i2, weight;
    unsigned int mainIsland;

    scanf("%u %u\n", &islands, &connections);

    for (unsigned int i = 0; i < connections; i++){
        scanf("%u %u %u\n", &i1, &i2, &weight);
        islandsMatrix[i1 -1][size(islandsMatrix[i1 -1])] = i2;
        islandsMatrix[i2 -1][size(islandsMatrix[i2 -1])] = i1;
        weights[i1 -1][size(weights[i1 -1])] = weight;
        weights[i2 -1][size(weights[i2 -1])] = weight;
    }

    scanf("%u\n", &mainIsland);
    memset(distances, 1001, 1001);
    distances[mainIsland -1] = 0;
    dijkstra(mainIsland -1, 0);

    unsigned int biggest = 0, smaller = 0;
    for (unsigned int i = 0; i < islands; i++){
       if (distances[i] > biggest){
         biggest = distances[i];
       }
    }
    smaller = biggest;
    for (unsigned int i = 0; i < islands; i++){
        if (distances[i] < smaller & distances[i] != 0){
            smaller = distances[i];
        }
    }
    printf("%u\n", biggest - smaller);

    return 0;
}
