#include <iostream>
#include <cstdio>

using namespace std;

unsigned short int computeDays(float food){
	unsigned short int days = 0;
	while(true){
		if (food <= 1){
			return days;
			break;
		}
		else{
			food /= 2;
			days++;
		}
	}
}

int main(){
	unsigned short int cases;
	float food;

	cin >> cases;

	for(unsigned short int i = 0; i < cases; i++){
		cin >> food;
		cout << computeDays(food) << " dias" << endl;
	}
	return 0;
}