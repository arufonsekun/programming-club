#include <iostream>
#include <stdio.h>
#include <vector>
using namespace std;
 
vector<int> show(vector<int> array){
	for (int i = 0; i < array.size(); i++){
		if (array[1] % 2 == 0)printf("par[%d] = %d\n", i,array[i]);
		else printf("impar[%d] = %d\n", i,array[i]);
	}
	array.clear();
	return array;
}
 
int main() {
	vector<int> even;
	vector<int> odd;
	int x;
	for (int i = 0; i < 15; i++){
		cin >> x;
		if (x % 2 == 0){
			even.push_back(x);
			if (even.size() == 5){
				even = show(even);
			}
		}
		else{
			odd.push_back(x);
			if (odd.size() == 5){
				odd = show(odd);
			}
		}
	}
	if (odd.size() != 0) show(odd);
	if (even.size() != 0) show(even);
 
    return 0;
}
