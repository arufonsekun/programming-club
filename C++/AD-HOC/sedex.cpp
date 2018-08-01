#include <iostream>
#include <cstring>

using namespace std;

int main(){
	unsigned int diameter;
	unsigned int x, y, z;

	cin >> diameter;
	cin >> x >> y >> z;

	if (x >= diameter and y >= diameter and z >= diameter){
		cout << 'S' << endl;
	}
	else{
		cout << 'N' << endl;
	}
	return 0;
}