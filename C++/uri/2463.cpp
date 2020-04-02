#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> cache;
vector<int> lifes;
unsigned int n;

int solve(int i){
    if (i == n-1){
        cache.at(i) = lifes.at(i);
        return cache.at(i);
    }

    int a = lifes.at(i);
    int b;
    if (cache.at(i + 1) == 101){
        b = solve(i + 1);
        cache.at(i) = max(a, a + b);
        return cache.at(i);
    }
    else{
        return max(a, a + cache.at(i+1));
    }

}

int main(){
    int input;

    cin >> n;
    cache.assign(n, 101);

    for(unsigned int i = 0; i < n; i++){
        cin >> input;
        lifes.push_back(input);
    }

    int bigger = 0;

    for (unsigned int i = 0; i < n; i++){
        bigger = max(bigger, solve(i));
    }

    cout << bigger << endl;
    return 0;
}
