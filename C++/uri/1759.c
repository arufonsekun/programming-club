#include <stdio.h>
#include <stdlib.h>

int main(){
  unsigned int counter = 0, n = 0;

  scanf("%u", &n);

  while (counter < n-1){
    printf("Ho ");
    counter++;
  }

  printf("Ho!\n");

  return 0;
}
