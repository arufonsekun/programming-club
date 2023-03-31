#include <bits/stdc++.h>

using namespace std;

int main() {
	int n, x, total_sum = 0;
	cin >> n;

	for (int i=1; i <= n; i++) {
		total_sum += i;
	}

	for (int i=0; i < n - 1; i++){
		cin >> x;
		total_sum -= x;
	}
	cout << total_sum << endl;
	return 0;
}
