#include <iostream>
#include <cstdio>
#include <string>
#include <map>
#include <vector>

using namespace std;
//2^31 = 2,147,483,648

map<char, int> hexValues = {
	{'0', 0},{'1', 1},{'2', 2}, {'3', 3}, {'4', 4}, {'5', 5} ,{'6', 6}, {'7', 7},
	{'8', 8},{'9', 9},{'A', 10},{'B', 11},{'C', 12},{'D', 13},{'E', 14},{'F', 15},
	{'a', 10},{'b', 11},{'c', 12},{'d', 13},{'e', 14},{'f', 15}
};

map<int, char> decValues = {
	{0, '0'},{1, '1'},{2, '2'}, {3, '3'}, {4, '4'}, {5, '5'} ,{6, '6'}, {7, '7'},
	{8, '8'},{9, '9'},{10, 'A'},{11, 'B'},{12, 'C'},{13, 'D'},{14, 'E'},{15, 'F'}
};

void hexToDec(string input){
	unsigned long int output = 0;
	if (input.size() == 1){
		cout << hexValues.at(input[0]) << endl;
	}
	else{
		for (unsigned int i = 0; i < input.size(); i++) {
			if (i == 0) output = hexValues.at(input[i]) * 16;
			if (i == input.size() - 1) output += hexValues.at(input[i]);
			if (i != 0 && i != input.size() -1){
				output = (output + hexValues.at(input[i])) * 16;
			}  
		}
		cout << output << endl;
	}
	
}

void decToHex(int input){
	vector<int> positions;
	unsigned int rest, quocient = input;

	while(quocient > 0){
		rest = quocient % 16;
		quocient = quocient / 16;
		positions.push_back(rest);
	}

	cout << "0x";

	for (int i = positions.size() -1; i >= 0; --i){
		cout << decValues.at(positions[i]);
	}

	cout << endl;

}

int main(){
	string input = " ";
	do{
		if (input != " "){
			if(input.size() == 1){
				cout << "0x" << input << endl;
			}

			else if (input == "-1"){
				break;
			}

			else if(input.at(1) == 'x'){
				hexToDec(input.substr(2, input.size() ) );
			}

			else{
				decToHex(stoi(input));
			}
		}
		cin >> input;
	}while(true);
	

	return 0;
}
