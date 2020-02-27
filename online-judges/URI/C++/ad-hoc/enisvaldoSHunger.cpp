#include <iostream>
#include <cstdio>

using namespace std;

int food[1000];

void computeAmoutOfFood(){

}

void clearMatrix(){

}

int main(){
	unsigned int q, n, type, weight;
	

	cin >> q;

	for (unsigned int i = 0; i < q; i++){
		cin >> n;
		for (unsigned int e = 0; e < n; e++){
			cin >> type >> weight;
			food[type].push_back(weight);
		}
		computeAmoutOfFood();
		clearMatrix();
	}
	return 0;
}