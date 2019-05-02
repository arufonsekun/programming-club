#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

vector <int> moedas;
vector<vector<int> > cache;
int m;

int solve(int v, int i){
    if (v == 0) return 1;
    if (i == m) return 0;
    if (v < 0) return 0;

    if (cache.at(v).at(i) != -1)
        return cache.at(v).at(i);

    int a = solve(v - moedas.at(i), i+1);
    int b = solve(v, i+1);

    return cache.at(v).at(i) = max(a, b);
}

int main(){
        
    int v, v1;
    scanf("%d %d", &v, &m);
    cache.assign(v + 1, vector<int>(m, -1));

    for (int i = 0; i < m; i++){
        scanf("%d", &v1);
        moedas.push_back(v1);
    }

    printf("%c\n", (solve(v, 0) == 1 ? 'S' : 'N'));
    return 0;
}
