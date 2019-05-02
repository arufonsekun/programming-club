#include <iostream>
#include <cstdio>
#include <math.h>

using namespace std;

int main(){
	unsigned int w = 1, h = 1, percentage = 1, output = 0;
	do{
		if (output != 0){
			output = (w*h*100) / percentage;
			output = sqrt(output);
			cout << output << endl; 
		}
		cin >> w;
		if(w == 0) break;
		cin >> h;
		cin >> percentage;
		output = 1;
	}while(true);

	return 0;
}