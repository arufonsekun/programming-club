#include <iostream>
 
using namespace std;
 
int main() {
	int vector [10];
	int x;
	for(int i = 0; i <= 9; i++){
		cin >> x;
		if (x <= 0) vector[i] = 1;
		else vector[i] = x;
	}

	for(int i = 0; i <= 9; i++){
		printf("X[%d] = %d\n", i, vector[i]);
	}
 
    return 0;
}
