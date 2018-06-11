#include <iostream>
#include <stdlib.h>
#include <vector>
using namespace std;

double biggest(double a, double b, double c){
  double biggest = 0.0;
  vector<double> numbers = {a,b,c};
  int count = 0;
  while (count <= 2){
    if(numbers[count] > biggest){
      biggest = numbers[count];
    }
    count ++;
  }
  return biggest;
}

int main(){
  double A,B,C,a,b,c;
  cin >> a >> b >> c;
  A = biggest(a,b,c);
  if (A == a) B = b, C = c;
  if (A == c) C = a, B = b;
  if (A == b) C = a, B = c;

  bool its = (A > B + C) || (A == B + C);
  bool rect = A*A == (B*B + C*C);
  bool obt = A*A > (B*B + C*C);
  bool acu = A*A < (B*B + C*C);
  bool equ = (A == B) && (A == C) && (B == C);
  bool iso = (A == B && A != C) || (A == C && A != B) || (B == C && B != A);
  if (its){
    cout << "NAO FORMA TRIANGULO\n";
  } else{
      if (rect) cout << "TRIANGULO RETANGULO\n";
      if (obt) cout << "TRIANGULO OBTUSANGULO\n";
      if (acu) cout << "TRIANGULO ACUTANGULO\n";
      if (equ) cout << "TRIANGULO EQUILATERO\n";
      if (iso) cout << "TRIANGULO ISOSCELES\n";
}
  return 0;
}
