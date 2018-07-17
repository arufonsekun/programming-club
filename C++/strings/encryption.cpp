#include <iostream>
#include <vector>
#include <string>
using namespace std;

vector<string> strings;
void shift(char chars[1000]){
	int index = 0;
	while(chars[index] != '\0'){
		chars[index] =+ 3;
		printf("%s", chars[index]);
		index++;
	}
	cout << endl;
}

int main(){
	int cases;
	char input[1000];

	cin >> cases;
	for (int i = 0; i < cases ; i++){
		scanf("%s", input);
		shift(input);
    	
 	}
}