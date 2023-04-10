#include <iostream>
#include <set>
#include <algorithm>

using namespace std;

int main() {
    int n, x;
    set<int> set;

    cin >> n;
    for (int i=0; i < n-1; i++) {
        cin >> x;
        set.insert(x);
    }

    for (int i=1; i <= n; i++) {
        if (set.erase(i) == 0) {
            cout << i << endl;
            break;
        }
    }
    return 0;
}

