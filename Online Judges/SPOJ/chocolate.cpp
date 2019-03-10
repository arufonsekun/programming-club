#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

vector <int> x;
vector <int> y;

int m, n;
int v = 0, h = 0;

int solve(int i, int j){
    if (j == m-1 || i == n -1)
        return 0;

    int a  = x.at(i) * (j + 1) + solve(i + 1, j);
    int b = y.at(j) * (i + 1) + solve(i, j + 1);
    return min(a, b);
}

int main(){
    int cases, cost;
    scanf("%d", &cases);
    scanf("%d %d",&n, &m);
    
    for (int i = 1; i <= (n-1)+(m-1); i++){
        scanf("%d", &cost);
        
        if (i <= n-1)
            x.push_back(cost);
        if (i > n-1)
            y.push_back(cost);
    }

    printf("%d",solve(0, 0));

    return 0;
}
