#include <iostream>
using namespace std;

int main(){
	unsigned int r, v;
	double PI = 3.1415;
	scanf("%u %u", &r, &v);
	int b = v / ((4*PI*r*r*r) / 3);
	printf("%d\n", b);
	return 0;	
}
