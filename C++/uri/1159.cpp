#include <iostream>
 
using namespace std;
 
int sum_5_evens(int x){
	int times = 1;
	int sum = 0;
	while (times <= 5){
		if ((x % 2 == 0) || (x % 2 == 0)){
			sum += x;
			times++;
		}
		x ++;
	}
	return sum;
} 

int main() {
	int x = 0;
	do{
		if (x == 0) {
			cin >> x;
		}
		cout << sum_5_evens(x) << '\n';
		cin >> x;
	}
	while (x != 0);	

    return 0;
}
