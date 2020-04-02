#include <iostream>
 
using namespace std;
 
int years(int a,int b,double g1,double g2){
	int years = 0;
	while (a <= b){
		a += static_cast<int>(a * g1);
		b += static_cast<int>(b * g2);
		years += 1;
	}
	return years;
}
 
int main() {
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
 
    return 0;
}
