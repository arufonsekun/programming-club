#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;
vector<int> weight;
vector<int> values;

int knapsack(int w, int i){
    if (i == 0 || w == 0)
        return 0;
    if (weight.at(i -1) > w){
        return knapsack(w, i -1);
    }
    else{
        return max(values.at(i -1) + knapsack(w - weight.at(i - 1), i -1), knapsack(w, i -1));
    }
}

int main(){
    int n, c;
    int w1, v1;
    int cases = 1;    
    scanf("%d %d", &n, &c);
    
    while (n != 0 && c != 0){
        for (int i = 0; i < n; i++){
            scanf("%d %d", &w1, &v1);
            weight.push_back(w1);
            values.push_back(v1);
        }
        printf("Caso %d: %d", cases, knapsack(c, n));
        
        scanf("%d %d", &n, &c);
        weight.clear();
        values.clear();
    }
    return 0;
}

