#include <iostream>
#include <cstring>

using namespace std;

int main(){
	char str[5];
	string br = "junior";
	strcat(str, &br[0]);
	cout << str << endl;
	return 0;
}