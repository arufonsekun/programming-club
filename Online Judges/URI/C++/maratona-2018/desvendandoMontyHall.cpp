#include <iostream>
#include <cstdio>

using namespace std;

int main(){
    unsigned int n, win = 0, car;
    
    cin >> n;

    for (unsigned int i = 0; i < n; i++){
        scanf("%u", &car);
        if (car != 1)
            win++;
    }
    printf("%u\n", win);
    return 0;
}
