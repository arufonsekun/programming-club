#include <iostream>
#include <cstdio>

using namespace std;

int main(){
	unsigned long long int army1, army2;

	while(cin >> army1 >> army2){
		if(army1 > army2){
			cout << army1 - army2 << endl;
		}
		else{
			cout << army2 - army1 << endl;
		}
		if(cin.eof()) break;
		
	}

	return 0;
}