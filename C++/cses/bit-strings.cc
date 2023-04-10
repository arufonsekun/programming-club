#include <iostream>
#include <cmath>

using namespace std;

int main() {
    int n;
    int big_int = pow(10, 9) + 7;
    int output = 1;
    cin >> n;

    for (int i=0; i < n; i++) {
        output = ((output % big_int) * 2) % big_int;
    }
    cout << output << endl;
}
