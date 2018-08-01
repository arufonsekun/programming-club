#include <iostream>
#include <cstdio>

using namespace std;

int main(){
	int x, input;
	cin >> x;
	int z = -abs(x);
	while (z <= x){
		cin >> input;
		if (input > x) z = input;
	}
	input = 0;
	unsigned int counter = 0;
	while (input <= z){
		input += x;
		x++;
		counter++;
	}
	cout << counter << endl;
	return 0;
}