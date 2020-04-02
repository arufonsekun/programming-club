#include <iostream>
#include <stdio.h>
#include <vector>
using namespace std;
 
int main() {
   	vector<int> array;
	int x;
	cin >> x;
	int index = 0;
	int pushNum = 0;
	while (index <= 999){
		if (pushNum == x) pushNum = 0;
		array.push_back(pushNum);
		pushNum ++;
		index ++;
	}
	for(int i = 0; i < array.size(); i++){
		printf("N[%d] = %d\n", i, array[i]);
	}
 
    return 0;
}
