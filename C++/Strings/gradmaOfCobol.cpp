#include <iostream>
#include <cstdio>
#include <cstring>
#include <sstream>
#include <array>

using namespace std;

bool twolower(string shit){
	string lower;
	for (unsigned short int i = 0; i < shit.size(); ++i){
		lower.push_back(tolower(shit[i]));
	}
	return lower == "cobol";
}

void checkBug(string input){
	ostringstream word;
	array<char, 5> letter = {'c','o','b','o','l'};
	unsigned short int counter = 0, index = 0;

	for(unsigned short int i = 0; i < input.size(); ++i){
		if (input.at(i) == '-'){
			if (tolower(input.at(index)) == letter[counter]){
				word << input.at(index);
			}
			else if (tolower(input.at(i-1)) == letter[counter]){
				word << input.at(i-1);
			}
			else word << input.at(index); 
			counter++;
			index = i + 1;
		} 	

	}
	
	if (twolower(word.str())){
		cout << "GRACE HOPPER" << endl;
	}

	else{
		cout << "BUG" << endl;
	}
}

int main(){
	string input;

	while (cin >> input){
		if (cin.eof()) break;
		else{
			input.push_back('-');
			checkBug(input);
		}
	}

	return 0;
}