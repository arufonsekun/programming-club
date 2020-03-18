#include <iostream>
#include <cstdio>

using namespace std;

int main(){
    int t, s, a, b, c;
    long int bars = 0;

    scanf("%d", &t);
    for (int i = 0; i < t; i++){
        scanf("%d %d %d %d", &s, &a, &b, &c);
        bars = s / c;
        if (bars >= a){
            bars += (bars / a) * b;
        }
        printf("%ld\n", bars);
        bars = 0;
    }
    return 0;
}
