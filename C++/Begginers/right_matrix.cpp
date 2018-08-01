#include <iostream>
#include <cstdio>

using namespace std;

int main(){
	char operation;
	double matrix[12][12];
	double sum = 0.0;
	double denominator = 0.0;
	int i = 0, j = 0;
	int counter = 0;
	int num = 1;
	cin >> operation;

	for (int e = 0; e < 144; e++){
		cin >> matrix[i][j];
		if(j > 11 - counter){
    		sum += matrix[i][j];
    		denominator ++;
    	}

	    if (j == 11){
	      	if (i == 5){
	    		num = 0;
	      	}

	      	if (i == 6){
	    		num = -1;
	    	}

	    	j = 0;
	      	i++;
	      	counter += num;
	    }

		else{
			j++;
		}
	}

	if (operation == 'S') {
		printf("%.1lf\n", sum);
	}
	else {
		printf("%.1lf\n", sum/denominator);
	}
	return 0;
}