#include <iostream>
#include <stdio.h>

using namespace std;

int main(){
	char o;
	double matrix[12][12];
	double sum = 0.0;
	double denominator = 0.0;
	unsigned short int i = 0, j = 0;
	int counter = 5;

	cin >> o;
	for (int e = 0; e < 144; e++){
		cin >> matrix[i][j];

		if(j >= counter & j <= (11 - counter) & i >= 7){
			sum += matrix[i][j];
			denominator += 1.0;

		}

		if(j == 11 & i >= 7){
			counter--;
		}

		if (j == 11){
			j = 0;
			i++;
		}

		else{
			j++;
		}
	}

	if (o == 'S'){
		printf("%.1lf\n", sum);
	}
	else{
		printf("%.1lf\n", sum/denominator);
	}
	return 0;
}