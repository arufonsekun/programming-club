#include <iostream> 
#include <stdio.h>
#include <array>
#include <string>
using namespace std;

array<int, 26> alpha = {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0};
int nonRepeated(string input){
	int p = 0;
	for (int i = 0; i < input.size(); ++i){
		if (alpha[input.at(i) - 'a'] == 0){
			alpha[input.at(i) - 'a'] = 1;
		}
		else{
			alpha[input.at(i) - 'a'] = 2;
		}
	}
	for (int i = 0; i < alpha.size(); ++i){
		if (alpha[i] == 1) {
			p++;
		}
	}

	return p;
}


long long int computeCombinations(int n , int p){
	return 0;
}

int main(){
	/*string input;
	cin >> input;
	int p = nonRepeated(input);
	cout << p;*/
	//cout << computeCombinations(input.size(), p);
	//esse inteiro tem 748 bits, mao da pra fazer desse jeito
	//long long unsigned int minhanossasenhora = 999999700000042549996205000238810483723157914908501608775310886674166548770582410129973494920730069468179143189647816838491850548963505243962127514443835555935117494731398977149456252804110503517729835333239439360000000000000;

}