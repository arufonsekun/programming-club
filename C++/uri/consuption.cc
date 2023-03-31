#include <iostream>
#include <iomanip>

using namespace std;

int main() {
	float dist, comb;

	cin >> dist >> comb;

	cout << fixed;
        cout <<	setprecision(3);
	cout << dist / comb << " km/l" << endl;
	return 0;
}
