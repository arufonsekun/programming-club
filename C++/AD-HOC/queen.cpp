#include <iostream>
#include <cstdio>

using namespace std;

unsigned short int X1, Y1, X2, Y2;

bool diagonal(){
	unsigned short int counter = 0;
	unsigned short int Xs = X1, Ys = Y1;
	while (counter < 4){

	}
}

unsigned short int findTurns(){
	if (X1 == X2 and Y1 == Y2) return 0;
	else if (X1 == X2 or Y1 == Y2) return 1;
	else if (diagonal()){
		return 1;
	}
	else{
		return 2
	}
}

int main(){
	
	while (X1 != 0){
		cin >> X1 >> Y1 >> X2 >> Y2;
		if (X1 != 0){
			findTurns();
		}
	}

	return 0;
}