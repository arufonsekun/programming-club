#include <iostream>

using namespace std;

int main() {
    int n, y=0;
    cin >> n;
    for (int i=0; i < 1000; i++) {
        printf("N[%d] = %d\n", i, y);
        y++;
        if (y == n) {
            y = 0; 
        }
    }
    return 0;
}