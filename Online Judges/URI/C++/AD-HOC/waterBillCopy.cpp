#include <iostream>
#include <cstdio>

using namespace std;

int main(){
	int N, bill = 0;
	for (int i = 0; i <= 1000; i++){
	N = i;

	if (N >= 0) {
		bill += 7;
		N -= 10;
	}

	if (N > 0){
		if (N >= 21){
			bill += 20;
			N -= 20;
		}
		else{
			bill += N;
			N -= N;
		} 
	}

	if (N > 0){
		if (N >= 71){
			bill += 140;
			N -= 70;
		}
		else{
			bill += N * 2;
			N -= N;
		}
	}

	if (N > 0){
		bill += N * 5;
		N -= N;
	}
	cout << i << " = " << bill << endl;
	bill = 0;
}
	return 0;
}