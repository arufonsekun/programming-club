#include <iostream>
#include <string.h>
using namespace std;

char strings[10000][1000];

int main(){
	int cases;
	char input[1000];

	cin >> cases;
	for (int i = 0; i <= cases ; i++){
		gets(input);
		strings[i] = input;
		cout << strings[i] << endl;
 	}
 	
}