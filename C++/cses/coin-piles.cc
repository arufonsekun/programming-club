#include <iostream>
#include <cmath>

using namespace std;

int main() {
    int t;
    long long a, b;

    cin >> t;
    for (int i=0; i < t; i++) {
        cin >> a >> b;

        // Não é múltiplo de 3
        if ((a + b) % 3 != 0) {
            cout << "NO\n";
            continue;
        }

        // É múltiplo de 3 e são iguais
        if (a == b) {
            cout << "YES\n";
            continue;
        }
        if (min(a, b) * 2 >= max(a, b)) {
            cout << "YES\n";
            continue;
        }
        cout << "NO\n";
    }

    return 0;
}