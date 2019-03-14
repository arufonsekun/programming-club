#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

vector<int> cache;
vector<int> receitaD;
int d;

int solve(int i){
    if (i == d-1)
        return cache.at(i) = receitaD.at(i);
    int a = receitaD.at(i);
    if (cache.at(i+1) == 1001){
        int b = solve(i+1);
        return cache.at(i) = max(a, a+b);
    }
    else{
        return max(a, cache.at(i+1));
    }

}

int main(){
    int r, rD, output = 0;

    cin >> d >> r;
    cache.assign(d, 1001);
    for (int i = 0; i < d; i++){
        cin >> rD;
        receitaD.push_back(rD - r);
    }

    for(int i = 0; i < d; i++){
        output = max(output, solve(i));
        //cout << output << endl;
    }

    cout << output << endl;
    return 0;
}
