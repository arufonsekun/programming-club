#include <iostream>
 
using namespace std;
 
int main() {
    int x = 1;
	while (x != 0){
		cin >> x;
		for (int i = 1; i <= x; i++){
			cout << i;
			if (i != x)  cout << ' ';
			if (i == x) cout << '\n';
		}
	}
 
    return 0;
}
