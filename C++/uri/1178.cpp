#include <iostream>
#include <stdio.h>
#include <vector>
using namespace std;
 
int main() {
    
	double x;
	vector<double> array;
	cin >> x;
	array.push_back(x);
	for (int i = 0; i < 100; i++){
		array.push_back(array[i] / 2);
		printf("N[%d] = %.4lf\n", i, array[i]);
	}
 
    return 0;
}
