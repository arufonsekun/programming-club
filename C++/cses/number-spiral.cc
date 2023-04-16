#include <iostream>
#include <algorithm>
#include <cmath>

using namespace std;

long long solve(long long r, long long c) {
    long long mx = max(r, c);

    if ((mx % 2) == 0) {
        if (c == 1) {
            return mx * mx;
        }
        if (r < mx) {
            return solve(mx, mx) - (mx - r);
        }
        return (mx*mx - (c-1));
    }
    if (r == 1) {
        return mx * mx;
    }
    if (c < mx) {
        return solve(mx, mx) - (mx - c);
    }
    return (mx*mx - (r-1)); 
}

int main() {
    int n;
    long long r, c;

    cin >> n;
    for (int i=0; i < n; i++) {
        cin >> r >> c;
        cout << solve(r, c) << endl;
    }

}
