#include <iostream>
 
using namespace std;
 
int sum_odds(int x, int y){
	int sum = 0;
	int times = 0;
	while (times != y){
		if ((x % 2 == 1) || (x % 2 == -1)){
			sum += x;
			times++;
		}
		x ++;
	}
	return (sum);
} 
 
int main() {
    int cases, x, y;
	int count = 1;
	cin >> cases;
	while (count <= cases){
		cin >> x >> y;
		cout << sum_odds(x,y) << '\n';
		count++;
	}
 
    return 0;
}
