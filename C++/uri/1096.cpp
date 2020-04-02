#include <iostream>
#include <stdio.h> 
using namespace std;
 
int main() {
  int i = 1, j = 7, loop = 1;
  while(i <= 9){
    printf("I=%d J=%d\n", i,j);
    if (loop == 1) {
      j = 6;
    }
    if (loop == 2){
      j = 5;
    }
    if (loop == 3) {
      j = 7; loop = 0;
      i+=2;
    }
    loop++;
  }
 
  return 0;
}
