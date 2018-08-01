#include <iostream>
#include <cstdio>

using namespace std;

long long int compute_factorial(int x){
	long long int output = 1;
	if (x == 0) return output;
	else{
		for(int e = 1; e <= x; e++){
			output *= e;
		}
		return output;
	}
	
}

int main(){
	int m, n;
	while(cin >> m >> n){
		if(cin.eof()) break;
		if(m == n){
		cout << compute_factorial(m) * 2 << endl;
		} 
		else{
			cout << compute_factorial(m) + compute_factorial(n) << endl;
		}
	}
	
	return 0;
}