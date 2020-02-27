#include <iostream>
#include <cstdio>
#include <cstring>
#include <map>

using namespace std;

map<char, char> change_chars; 

void printText(char text[1001]){

	for (unsigned int char_ = 0; char_ < strlen(text); char_++){
		if (change_chars.find(text[char_]) != change_chars.end()){
			cout << change_chars.at(text[char_]);
		}

		else{
			cout << text[char_];
		}
	}
	cout << endl;
}

int main(){

	unsigned int N, M;
	char E, S;
	char text[1001];

	cin >> N >> M;

	for(unsigned int i = 0; i < N; ++i){
		cin >> E >> S;
		change_chars[E] = S;
		change_chars[S] = E;
	}

	for (unsigned int c = 0; c < M; c++){
		scanf(" %[^\n]s", text);
		printText(text);
	}

	return 0;
} 