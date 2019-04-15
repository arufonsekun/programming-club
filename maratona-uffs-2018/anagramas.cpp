#include <iostream> 
#include <string>

using namespace std;

int frequency[26] = {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0};

int main(){
	string input;
	cin >> input;

	for (char c : input){
		frequency[c-97] += 1;
	}

	for (int i : frequency){
		cout << i << endl;
	}

	return 0;

}
