#include <iostream>
#include <cmath>

using namespace std;

int main() {

    unsigned int m, n, a;
    unsigned long b, c;

    cin >> m >> n >> a;
    
    b = ceil(m + a - 1) / a;
    c = ceil(n + a -1 ) / a;
    c *= b;

    cout << c << endl;

    return 0;
}
