#include <iostream>
#include <string.h>

using namespace std;

int cycles[1000000];

int adHoc(int j, int x){
    if (cycles[j-1] != -1) return cycles[j-1];
    else{
        while (j > 1){
            if (j % 2 == 1) j = 3*j + 1;
            else j = j/2;
            x++;
        }
        return cycles[j-1] = x + 1;
    }
}
int main(){
    int i, j, limit, output = 0, cycle = 0;
    
    memset(cycles, -1, 1000000);
    cycles[0] = 1;

    printf("%d\n", cycles[0]);
    while (cin >> i >> j){
        limit = j;
        if (cin.eof()) break;
        else{
            while (j >= i){
                cycle = adHoc(j, 0);
                if (output < cycle) output = cycle;
                j--;
            }
        }
        printf("%d %d %d\n", i, limit, output);
        output = 0;
    }

    return 0;
}
