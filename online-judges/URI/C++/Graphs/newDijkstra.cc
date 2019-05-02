#include <iostream>
#include <string.h>

#define INF 10000000

using namespace std;
int v, e;

int setGraph(int graph[v][v]){
    for (int i = 0; i < v; i++){
        memset(graph[i], INF, v);
    }
}

int main(){
    int v1, v2, w;

    scanf("%d %d\n", &v, &e);

    int graph[v][v];
    int distances[v];
    setGraph();
    memset(distances, INF, v);

    for (int i = 0; i < e; i++){
        scanf("%d %d %d\n", &v1, &v2, &w);
        graph[]
    }
    return 0;
}
