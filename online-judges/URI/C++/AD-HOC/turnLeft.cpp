#include <iostream>
#include <cstdio>
#include <array>
#include <cstring>

using namespace std;

array<char, 4> directions = {'L','N','O','S'};

void computeDirection(string commands){
	unsigned short int index = 1;

	for(unsigned short int i = 0; i < commands.size(); i++){
		if (commands[i] == 'E'){
			if (index == 3) index = 0;
			else index += 1;
		}

		else{
			if (index == 0) index = 3;
			else index -= 1;
		}
	}

	cout << directions.at(index) << endl;

}

int main(){
	string commands;
	unsigned short int cases = 1;
	
	while (cases != 0){
		cin >> cases;
		cin >> commands;
		if (cases != 0) computeDirection(commands);
	}

	return 0;
}