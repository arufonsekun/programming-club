#include <iostream>
using namespace std;
int main(){
  int n;
  int a = 0; int b = 1; int c = 0;
  cin >> n;
  if (n == 1){
    cout << a << '\n';
  }
  else{
      for (int i = 0; i < n; i++){
          if (i == n-1){
              cout << a << '\n';
          }
          else{
              cout << a << ' ';
          }
          a += b;
          b = c;
          c = a;
      }
  }
  return 0;
}
