#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> weights;
vector<int> values;

int knapSack(int w, int i){
    if (i == 0 || w == 0)
        return 0;

    if (weights.at(i - 1) > w)
        return knapSack(w, i - 1);

    else{
        return max(values.at(i - 1) + knapSack(w - weights.at(i - 1), i -1), knapSack(w, i - 1));
    }
}

int main(){
    int w, wi, vi;
    int i, cases = 1;

    scanf("%d %d", &i, &w);

    while(w != 0 || i != 0){

        for (int j = 0; j < i; j++){
            scanf("%d %d", &wi, &vi);
            weights.push_back(wi);
            values.push_back(vi);
        }

        printf("Caso %d: %d\n", cases, knapSack(w, i));
        weights.clear();
        values.clear();
        cases++;
        scanf("%d %d", &i, &w);
        getchar();
    }

    return 0;
}
