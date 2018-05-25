#include <iostream>
#include <stdio.h>
#include <math.h>
using namespace std;

bool prime(int x){
  int divi = 1;
  int count = 0;
  for(int i = 1; i <= sqrt(x); ++i){
    if(x % i == 0)count ++;
  }
  return count == 1;
}

int main(){
  int N;
  int x;
  cin >> N;
  while (N > 0){
    cin >> x;
    if (prime(x)) cout << "Prime\n";
    else cout << "Not prime\n";
    N-=1;
  }
  return 0;
}
