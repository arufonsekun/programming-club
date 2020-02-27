#include <iostream>
#include <cstdio>
#include <cmath>
#include <utility>

using namespace std;

inline pair<int, int> min(pair<int, int> p1, pair<int, int> p2){
    return (p1.first < p2.first ? p1 : p2);
}

inline pair<int, int> maxSecond(pair<int, int> p1, pair<int, int> p2){
    return (p1.second > p2.second ? p1 : p2);
}

inline int maxVal(int i, int j){
    return (i > j ? i : j);
}

inline int minVal(int i, int j){
    return (i < j ? i : j);
}

int main(){
    int c, l;
    pair <int, int> d;
    pair <int, int> v;

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

    long long int output = 0;
    //se eu n conseguir "encaixar" os retangulos
    if (maxSecond(d, v).first > min(d, v).second){
        output = pow(maxVal(d.first, v.first), 2);
        cout << output << endl;
    }
    else{
        int sum = d.first + v.first;
        if (d.second >= sum and v.second >= sum){
            output = pow(sum, 2);
            cout << output << endl;
        }
        else{
            output = pow(minVal(d.second, v.second), 2);
            cout << output << endl;
        }
    }

    return 0;
}
