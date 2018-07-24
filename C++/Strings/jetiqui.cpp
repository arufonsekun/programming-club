#include <iostream>
#include <cstdio>
#include <vector>

using namespace std;
string hide, attempt1, attempt2;

bool checkPossibility(){
	vector<int> indexes;

	for (int index = 0; index < hide.size(); index++){
		if(hide[index] == '_'){
			indexes.push_back(index);
		}
	}

	bool match1 = (attempt1[indexes[0]] == attempt2[indexes[1]]);
	bool match2 = (attempt1[indexes[1]] == attempt2[indexes[0]]);
	bool match3 = (attempt1[indexes[0]] == attempt2[indexes[0]]);
	bool match4 = (attempt1[indexes[1]] == attempt2[indexes[1]]);

	return (match1 | match2) || (match3 & match4);

}

int main(){
	int c;

	cin >> c;
	for(int i = 0; i < c; i++){
		cin >> attempt1;
		cin >> attempt2;
		cin >> hide;
		if (checkPossibility()){
			cout << "Y" << endl;
		}
		else{
			cout << "N" << endl;
		}
	}

	return 0;
}