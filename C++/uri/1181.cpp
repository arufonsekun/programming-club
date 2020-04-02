#include <iostream>
 
using namespace std;
 
int main() {
 
	float matrix [12][12];
	int row;
	char operation = ' ';
	int i = 0;
	int j = 0;
	float sum = 0;
	cin >> row;
	cin >> operation;
	for (int e = 0; e <= 143; e++){
		cin >> matrix[i][j];
		if (i == row){
			sum += matrix[i][j];
		}
		j++;
		if (j == 12){
			j = 0;
			i++;
		}
	}
	if (operation == 'S') printf("%.1f\n", sum);
	else printf("%.1f\n", sum/12.0);
 
    return 0;
}
