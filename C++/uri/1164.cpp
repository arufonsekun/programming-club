#include <iostream>
 
using namespace std;
 
int main() {
	int x, sum, cases, count;
	cin >> cases;
	while(cases >= 1){
		cin >> x;
		count = 1;
		sum = 0;
		while (count <= x-1){
			if (x % count == 0)sum += count;
			count ++;
		}
		if(sum == x) printf("%d eh perfeito\n", x);
		else printf("%d nao eh perfeito\n", x);
		cases--;
	}
 
    return 0;
}
