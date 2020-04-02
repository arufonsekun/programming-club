#include <iostream>
#include <stdio.h> 
using namespace std;
 
int main() {
 
  float i = 0, j;
  int aux = 0;
  while(i <= 2.2){
    aux = (int)i;
    if (i - aux == 0 || aux == 2){
      printf("I=%d J=%d\n", aux,1+aux);
      printf("I=%d J=%d\n", aux,2+aux);
      printf("I=%d J=%d\n", aux,3+aux);
    }
    else{
      printf("I=%.1f J=%.1f\n", i,1+i);
      printf("I=%.1f J=%.1f\n", i,2+i);
      printf("I=%.1f J=%.1f\n", i,3+i);
    }
    i+= 0.2;
  }
 
    return 0;
}
