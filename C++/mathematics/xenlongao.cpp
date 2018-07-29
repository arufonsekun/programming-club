#include <iostream>
#include <cstdio>

using namespace std;

bool isEvenDivisor(unsigned long long int num){
	unsigned long long int divisors = 0;

	for(unsigned long long int i = 1; i <= num; i++){
		if (num % i == 0) {
			divisors++;
		}
	}

	if (divisors == 0) return false;
	else if (divisors % 2 == 0) return true;
	else return false;
}

unsigned long long int evenDivisor(unsigned long long int spheres){
	unsigned long long int divisors = 0;

	for(unsigned long long int i = 1; i <= spheres; i++){
		if (isEvenDivisor(i) == true) {
			divisors++;
		}
	}

	return divisors;
}

int main(){
	unsigned long long int spheres;
	unsigned int cases;
	cin >> cases;

	for(unsigned int i = 0; i < cases; i++){
		cin >> spheres;
		cout << evenDivisor(spheres) << endl;
	} 
	return 0;
}