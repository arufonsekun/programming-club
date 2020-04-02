#include <iostream>
#include <stdio.h>
#include <vector>

using namespace std;
 
int main() {
	vector<int> array;
	int x;
	int value;
	cin >> x;
	for (int i = 0; i < x; i++){
		cin >> value;
		array.push_back(value);
	}
	int lowest = array[0];
	int pos = 0;
	for (int i = 1; i < array.size(); i++){
		if (array[i] < lowest){
			lowest = array[i];
			pos = i;
		}
	}
	printf("Menor valor: %d\n", lowest);
	printf("Posicao: %d\n", pos);
 
    return 0;
}
