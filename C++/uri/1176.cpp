#include <iostream>
#include <stdlib.h>
using namespace std;

int main(){
  int n = 0;
  uint64_t  a = 0;
  uint64_t  b = 1;
  uint64_t  c = 0;
  uint64_t array[60];
  int index;
  cin >> n;
  for(int i = 0; i < 61; i++){
      array[i] = a;
      a += b;
      b = c;
      c = a;
  }
  for(int i = 0; i < n; i++){
      cin >> index;
      printf("Fib(%d) = %llu\n",index , array[index]);
  }

  return 0;
}
