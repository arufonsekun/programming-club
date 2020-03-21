#include <iostream>
#include <cstdio>

using namespace std;

int main(){
	unsigned int citizens, allRight = 0, pistOff = 0;
	unsigned short int opinion;

	while(cin >> citizens){

		if (cin.eof()) break;
		else{
			for (unsigned int i = 0; i < citizens; i++){
				cin >> opinion;
				if (opinion == 0) allRight++;
				else pistOff++;
				
			}
			//ternary operator
			cout << ((pistOff >= allRight) ? 'N' : 'Y') << endl;
			allRight = 0;
			pistOff = 0;
			
		}
	}
	return 0;
}