#include <iostream>
#include <cstdio>
#include <cmath>
#include <utility>

using namespace std;

int min(pair<int, int> pairr){
    return (pairr.first < pairr.second ? pairr.first : pairr.second);
}

int max(pair<int, int> pairr){
    return (pairr.first >= pairr.second ? pairr.first : pairr.second);
}

int maxVal(int i, int j){
    return (i > j ? i : j);
}

int minVal(int i, int j){
    return (i < j ? i : j);
}

int main(){
    int c, l;
    pair <int, int> d;
    pair <int, int> v;
    pair<int, int> output;

    for (int i = 0; i <= 1; i++){
        cin >> l >> c;
        if(!i){
            d.first = minVal(l, c);
            d.second = maxVal(l, c);
        }
        else{
            v.first = minVal(l, c);
            v.second = maxVal(l, c);
        }

    }

    int sum = d.first + v.first;
    if (d.second >= sum and v.second >= sum){
        cout << pow(sum, 2) << endl;
    }
    else{
        char minMax = (d.first > v.first ? 'd' : 'v');
        if (minMax == 'd'){
            if(v.second > d.first){
                cout << pow(d.first + 1, 2) << endl;
            }
            else{
                cout << pow(d.first, 2) << endl;
            }
        }
        else{
            if(d.second > v.first){
                cout << pow(v.first + 1, 2) << endl;
            }
            else{
                cout << pow(v.first, 2) << endl;
            }
        }
    }

    return 0;
}
