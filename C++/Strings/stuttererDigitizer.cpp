#include <iostream>
#include <cstdio>
#include <cstring>

using namespace std;

string output;
char buffer[18];
char input[15998]; // (1000 words * up to 15 chars) + 1000 - 2 spaces


void appendChar(char shit){
	buffer[strlen(buffer)] = shit;
	buffer[strlen(buffer) + 1] = '\0';
}

void syllabicDeduplication(unsigned int e){
	unsigned int index1 = 0, index2 = 1;

	if (strlen(buffer) == 1) output.push_back(buffer[0]);

	else{
		for (unsigned int i = 0; i < strlen(buffer) / 2; i++){
			if((buffer[index1] != buffer[index1 + 2]) or (buffer[index2] != buffer[index2 + 2] )){
				output.push_back(buffer[index1]);
				output.push_back(buffer[index2]);
			}
			//cout << "entro" << endl;
			index1 += 2;
			index2 += 2;
		}

		if(strlen(buffer) % 2 == 1) output.push_back(buffer[strlen(buffer)-1]);
	}
	
	if (e == strlen(input) -1) output.push_back('.');
	else output.push_back(' ');
	
}

int main(){
	scanf(" %[^\n]s", input);
	for (unsigned int i = 0; i < strlen(input); i++){
		if (input[i] == ' ' or i == strlen(input) -1){
			syllabicDeduplication(i);
			memset(buffer, 0, sizeof(buffer));			
		}
		else{
			appendChar(input[i]);
		}
	}

	cout << output << endl;

	return 0;
}