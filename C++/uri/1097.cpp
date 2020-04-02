#include <iostream>
#include <stdio.h> 
using namespace std;
 
int main() {
  int i = 1, j = 5, loop = 0;
  while (j <= 13){
      printf("I=%d J=%d\n", i,j+2);
      printf("I=%d J=%d\n", i,j+1);
      printf("I=%d J=%d\n", i,j);
    i+=2;
    j+=2;
  }
 
    return 0;
}
