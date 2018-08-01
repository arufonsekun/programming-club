#include <iostream>
#include <cstdio>

using namespace std;

int main(){
	unsigned int left = 0, right = 0;
	do{
		if (left != 0 and right != 0){
			cout << left + right << endl;
		}
		cin >> left >> right;
	}while(left != 0);
	return 0;
}