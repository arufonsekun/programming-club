#include <iostream>
#include <cstdio>

using namespace std;

int main(){
	int N, bill = 0;

	cin >> N;

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

	cout << bill << endl;
	return 0;
}