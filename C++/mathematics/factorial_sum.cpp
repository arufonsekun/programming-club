#include <iostream>
#include <cstdio>

using namespace std;

long int compute_factorial(int x){
	long int output = 1;
	if (x == 0) return output;
	else{
		for(int e = 1; e <= x; e++){
			output *= e;
		}
		return output;
	}
	
}

int main(){
	int m , n;
	cin >> m >> n;
	if(m == n){
		cout << compute_factorial(m) * 2;
	} 
	else{
		cout << compute_factorial(m) + compute_factorial(n);
	}
	return 0;
}