#include <iostream>
#include <cmath>
using namespace std;
 
int main(){
    int m, n, b, a, sol = 0;
        
    scanf("%d %d", &m, &n);
 
    for (int i = 0; i <= max(m, n); i++) {
        b = n - pow(i, 2);
        if (b >= 0) {
 
            a = m - pow(b, 2);
            if (a == i) {
                sol++;
            }
        }
    }
    printf("%d\n", sol);
 
    return 0;
}
