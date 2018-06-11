#include <iostream>
#include <stdio.h>
#include <vector>

using namespace std;

void growing_sequence(){
	int x = 1;
	while (x != 0){
		cin >> x;
		for (int i = 1; i <= x; i++){
			cout << i;
			if (i != x)  cout << ' ';
			if (i == x) cout << '\n';
		}
	}
}

//100% wrong answer, uri mf
void exceeding_z(){
	int X, Z;
	cin >> X >> Z;
	while (Z < X){
		cin >> Z;
	}
	int times = 1;
	int Y = X;
	while (X <= Z){
		X += Y + 1;
		Y++;
		times++;
	}
	cout << times;
}

void factorial(){
	int x, fact = 1;
	cin >> x;
	while(x >= 1){
		fact *= x;
		x--;
	}
	cout << fact << '\n';
}

void age_average(){
	int age = 1;
	float n = 0, average = 0;
	while (age > 0){
		cin >> age;
		if (age < 0){
			average = (average / n);
			printf("%.2f\n", average);
			break;
		}
		average += age;
		n += 1.0;
	}
}

void division(){
	float division = 1.0;
	float x = 2.0;
	while (x <= 100){
		division += (1 / x);
		x++;
	}
	printf("%.2f\n", division);
}

void division_2(){
	float s = 1;
	int numerator = 3;
	float denominator = 2.0;
	while(numerator <= 39){
		s += numerator / denominator;
		numerator += 2;
		denominator *= 2;
	}
	printf("%.2f\n", s);
}

void divisors(){
	int x;
	int divisor = 1;
	cin >> x;
	while (divisor <= x){
		if (x % divisor == 0) cout << divisor << '\n';
		divisor++;
	}
}

int sum_odds(int x, int y){
	int sum = 0;
	int times = 0;
	while (times != y){
		if ((x % 2 == 1) || (x % 2 == -1)){
			sum += x;
			times++;
		}
		x ++;
	}
	return (sum);
}

void odds(){
	int cases, x, y;
	int count = 1;
	cin >> cases;
	while (count <= cases){
		cin >> x >> y;
		cout << sum_odds(x,y) << '\n';
		count++;
	}

}

int sum_5_evens(int x){
	int times = 1;
	int sum = 0;
	while (times <= 5){
		if ((x % 2 == 0) || (x % 2 == 0)){
			sum += x;
			times++;
		}
		x ++;
	}
	return sum;
}

void even_sum(){
	int x = 0;
	do{
		if (x == 0) {
			cin >> x;
		}
		cout << sum_5_evens(x) << '\n';
		cin >> x;
	}
	while (x != 0);
}

int years(int a,int b,double g1,double g2){
	int years = 0;
	while (a <= b){
		a += static_cast<int>(a * g1);
		b += static_cast<int>(b * g2);
		years += 1;
	}
	return years;
}

void population_increase(){
	int cases;
	int a, b, diference;
	double g1, g2;
	cin >> cases;
	while (cases >= 1){
		cin >> a >> b >> g1 >> g2;
		diference = years(a,b,g1/100,g2/100);
		if (diference > 100){
			printf("Mais de 1 seculo.\n");
		}
		else{
			printf("%d anos.\n", diference);
		}
		cases--;
	}
}

void perfect_number(){
	int x,sum, cases, count;
	cin >> cases;
	while(cases >= 1){
		cin >> x;
		count = 1;
		sum = 0;
		while (count <= x-1){
			if (x % count == 0)sum += count;
			count ++;
		}
		if(sum == x) printf("%d eh perfeito\n", x);
		else printf("%d nao eh perfeito\n", x);
		cases--;
	}
}

void array_replacement(){
	int vector [10];
	int x;
	for(int i = 0; i <= 9; i++){
		cin >> x;
		if (x <= 0) vector[i] = 1;
		else vector[i] = x;
	}

	for(int i = 0; i <= 9; i++){
		printf("X[%d] = %d\n", i, vector[i]);
	}
}

void arrayFill2(){
	vector<int> array;
	int x;
	cin >> x;
	int index = 0;
	int pushNum = 0;
	while (index <= 999){
		if (pushNum == x) pushNum = 0;
		array.push_back(pushNum);
		pushNum ++;
		index ++;
	}
	for(int i = 0; i < array.size(); i++){
		printf("N[%d] = %d\n", i, array[i]);
	}
}

void arrayFill3(){
	double x;
	vector<double> array;
	cin >> x;
	array.push_back(x);
	for (int i = 0; i < 100; i++){
		array.push_back(array[i] / 2);
		printf("N[%d] = %.4lf\n", i, array[i]);
	}
}

int main(){
	//growing_sequence();
	//exceeding_z();
	//factorial();
	//age_average();
	//division();
	//division_2();
	//divisors();
	//odds();
	//even_sum();
	//population_increase();
	//perfect_number();
	//array_replacement();
	//arrayFill2();
	arrayFill3();
	return 0;
}
