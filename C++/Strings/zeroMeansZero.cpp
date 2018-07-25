#include <iostream>
#include <cstdio>
#include <cstring>

using namespace std;

void printThisShit(long unsigned int number1,  long unsigned int number2){
	long unsigned int num = number1 + number2;
	string string_number;
	string_number = to_string(num);
	cout << string_number;

	/*for(unsigned int i = 0; i < string_number.size(); i++){
		if (string_number.at(i) != '0'){
			cout << string_number.at(i);
		}
	}*/

	cout << endl;
}

int main(){
	long unsigned int m = 1, n = 1;

	while (m != 0 | n != 0){
		cin >> m >> n;
		if (m == 0 | n == 0) break;
		printThisShit(m, n);
	}

	return 0;
}