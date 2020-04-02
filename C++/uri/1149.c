#include <stdio.h>
#include <stdlib.h>

int main(){
  int A, N = -1, ouput = 0;
  unsigned int counter = 0;

  scanf("%d", &A);

  while (N <= 0){

    scanf("%d", &N);
  }

   while (counter < N){
    ouput += A;
    A++;
    counter++;
  }

  printf("%d\n", ouput);
}
