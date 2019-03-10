#include <iostream>
#include <cstdio>
#include <cmath>
#include <utility>

using namespace std;

int min(pair<int, int> pairr){
    return (pairr.first < pairr.second ? pairr.first : pairr.second);
}

int max(pair<int, int> pairr){
    return (pairr.first > pairr.second ? pairr.first : pairr.second);
}

int main(){
    pair <int, int> d;
    pair <int, int> v;
    pair<int, int> output;

    cin >> d.first >> d.second;
    cin >> v.first >> v.second;

    //menores dimensoes
    int sD = min(d);
    int sV = min(v);

    //quem tem maior area
    int aD = d.first*d.second;
    int aV = v.first*v.second;
    char sA = (aD <= aV ? 'd' : 'v');

    //se os quadrados com menores dimensoes sao iguais
    if (sD == sV){
        if (v.first < d.second and v.second <= d.first){
            if (aV > aD){
                output.first = v.first + sD;
                output.second = v.second + max(d);
                cout << pow(min(output), 2) << endl;
            }
            else if (aV < aD){
                output.first = d.first + sV;
                output.second = d.second + max(v);
                cout << pow(min(output), 2) << endl;
            }
            else{
                cout << pow(sD, 2) << endl;
            }
        }
        else{
            cout << (sA == 'd' ? pow(max(d), 2) : pow(max(v), 2)) << endl;
            cout << "Hu3" << endl;
        }
    }

    else{
        if(sD < sV){
            if (aV > pow(sD, 2)){
                output.first = sD + (v.first - sD);
                output.second = sD + (v.second - sD);
                cout << pow(min(output), 2) << endl;
            }
            else cout << pow(sD, 2) << endl;
        }
        else{
            if (aD > pow(sV, 2)){
                output.first = sV + (d.first - sV);
                output.second = sV + (d.second - sV);
                cout << pow(min(output), 2) << endl;
            }
            else cout << pow(sV, 2) << endl;
        }
    }

    return 0;
}
