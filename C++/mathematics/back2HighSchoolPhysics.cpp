#include <iostream>
#include <cstring>

using namespace std;

int main(){
	int t, v;
	while (true){
		cin >> t >> v;
		if (!cin.eof()) cout << t * v * 2 << endl;
		else break;
	};
	return 0;
}