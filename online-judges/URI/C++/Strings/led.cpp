#include <iostream>
#include <cstdio>
#include <map>
#include <cstring>

using namespace std;

map<char, int> leds = { {'0', 6}, {'1', 2}, {'2', 5}, {'3', 5}, {'4', 4}, 
						{'5', 5},{'6', 6}, {'7', 3}, {'8', 7}, {'9', 6} };

void computeLeds(string number){
	unsigned int n_leds = 0;
	for(unsigned int i = 0; i < number.size(); ++i){
		n_leds += leds.at(number.at(i));
	}
	cout << n_leds << " leds" << endl;
}

int main(){
	unsigned short int cases;
	string numbers;
	cin >> cases;
	for (int i = 0; i < cases; ++i){
		cin >> numbers;
		computeLeds(numbers);
	}
	return 0;
}