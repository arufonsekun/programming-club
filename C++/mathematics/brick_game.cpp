#include <iostream>
#include <cstdio>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> team;

void coutCaptain(unsigned short int team_size, unsigned short cases){

	sort(team.begin(), team.end());
	printf("Case %i: %d\n", cases, team[(team_size/ 2)]);

}

int main(){

	unsigned short int cases, team_size, age;
	cin >> cases;
	for (unsigned short int i = 0; i < cases; ++i){
		cin >> team_size;

		for (unsigned short int e = 0; e < team_size; ++e){
			cin >> age;
			team.push_back(age);
		}

		coutCaptain(team_size, i+1);
		team.clear();

	}
	return 0;

}