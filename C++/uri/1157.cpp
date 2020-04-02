#include <iostream>
 
using namespace std;
 
int main() {
    int x;
	int divisor = 1;
	cin >> x;
	while (divisor <= x){
		if (x % divisor == 0) cout << divisor << '\n';
		divisor++;
	}
 
    return 0;
}
