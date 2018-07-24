#include <iostream>
#include <cstdio>
#include <string>
#include <vector>
#include <map>
#include <cmath>

using namespace std;

map<char, int> hexValues = {
	{'0', 0},{'1', 1},{'2', 2}, {'3', 3}, {'4', 4}, {'5', 5} ,{'6', 6}, {'7', 7},
	{'8', 8},{'9', 9},{'A', 10},{'B', 11},{'C', 12},{'D', 13},{'E', 14},{'F', 15},
	{'a', 10},{'b', 11},{'c', 12},{'d', 13},{'e', 14},{'f', 15}
};

map<int, char> decValues = {
	{0, '0'},{1, '1'},{2, '2'}, {3, '3'}, {4, '4'}, {5, '5'} ,{6, '6'}, {7, '7'},
	{8, '8'},{9, '9'},{10, 'a'},{11, 'b'},{12, 'c'},{13, 'd'},{14, 'e'},{15, 'f'}
};

unsigned long int hex2Dec(string input){
	unsigned long int output = 0;
	if (input.size() == 1){
		output = hexValues.at(input[0]);
	}
	else{
		for (unsigned int i = 0; i < input.size(); i++) {
			if (i == 0) output = hexValues.at(input[i]) * 16;
			if (i == input.size() - 1) output += hexValues.at(input[i]);
			if (i != 0 && i != input.size() -1){
				output = (output + hexValues.at(input[i])) * 16;
			}  
		}
	}
	cout << output << " dec" << endl;
	return output;
}

void dec2Hex(unsigned long int input){
	vector<int> positions;
	unsigned int rest, quocient = input;

	while(quocient > 0){
		rest = quocient % 16;
		quocient = quocient / 16;
		positions.push_back(rest);
	}

	for (int i = positions.size() -1; i >= 0; i--){
		cout << decValues.at(positions[i]);
	}

	cout << " hex" << endl;

}

void dec2Bin(unsigned long int input){
	vector<unsigned short int> binary;
	unsigned int rest;
	unsigned long int quocient = input;

	while(quocient > 0){
		rest = quocient % 2;
		quocient = quocient / 2;
		binary.push_back(rest);
	}

	for (int i = binary.size() -1; i >= 0; i--){
		cout << binary.at(i);
	}
	cout << " bin" << endl;
}

unsigned long int bin2Dec(string input){
	unsigned long int output = 0;
	unsigned short int counter = 0;
	for (int i = input.size()-1; i >= 0; i--){
		if(input.at(i) == '1'){
			output += pow(2, counter);
		}
		counter++;
	}
	cout << output << " dec" << endl;
	return output;

}

int main(){
	unsigned cases;
	string input, base;
	cin >> cases;
	for (unsigned int i = 0; i < cases; ++i){
		cin >> input >> base;
		printf("Case %d:\n", i+1);
		if(base == "bin"){
			dec2Hex( bin2Dec(input) );
		}

		else if (base == "hex"){
			dec2Bin( hex2Dec(input) );
		}

		else if (base == "dec"){
			dec2Hex( stoul(input) );
			dec2Bin( stoul(input) );
		}

		if (i != cases-1) cout << endl;
	}
	return 0;
}