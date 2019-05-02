#include <iostream>
#include <cstdio>
using namespace std;

unsigned int gaps[32][2] ={{2,0}, {3, 1}, {5, 2}, {11, 4}, {29, 6}, {97, 8}, {127, 14},
                  {541, 18},{907, 20},{1151, 22},{1361, 34},{9587, 36},{15727, 44},
		  {19661, 52},{31469, 72},{156007, 86},{360749, 96},{370373, 112},
		  {492227, 114},{1349651, 118},{1357333, 132},{2010881, 148},{4652507, 154},
 		  {17051887, 180},{20831533, 210},{47326913, 220},{122164969, 222},
		  {189695893, 234},{191913031, 248},{387096383, 250},{436273291, 282}, {1000000000, 282}};

unsigned int solve(unsigned int v) {
    int b = 0;
    int e = 31;

    while (b != e) {
    	int m = (b+e)/2;
    	unsigned int value = gaps[m][0];
    	if (v == value){
    	    e = b = m;
    	}
    	else if (v < value) e = m;
    	else b = m+1;
    }
    if (v == gaps[b][0]) return gaps[b][1];
    else return gaps[b-1][1];
}

int main(){
    unsigned int input;
    while (scanf("%u", &input) != EOF){
        printf("%u\n", solve(input));
    }
    return 0;
}
