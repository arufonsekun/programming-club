#include <iostream>
#include <cstdio>
#include <cstring>

using namespace std;

void checkDivisibility(char number[10]){
	unsigned int sum = 0;
	char buffer[1];
	for (unsigned int i = 0; i < strlen(number); i++){
		buffer[0] = number[i];
		sum += atoi(buffer);
	}
	cout << sum << (sum % 3 == 0 ? " sim" : " nao") << endl;

}

int main(){
	unsigned int digits;
	char number[10];
	while (cin >> digits >> number){
		if (cin.eof()) break;
		else{
			checkDivisibility(number);
		}
	}

	return 0;
}