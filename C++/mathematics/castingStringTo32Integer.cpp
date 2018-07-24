#include <iostream>
#include <cstdio>
#include <string>
#include <cstring>

using namespace std;

int main(){
	string number = "4294967296";
	char str[10];
	strcpy(str, number.c_str());
	long int x = strtoul(str);
	cout << x << endl;
}