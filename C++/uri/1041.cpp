#include <iostream>
 
using namespace std;
 
int main() {
 
  float X, Y;
  cin >> X >> Y;
  if (X == 0 && Y != 0){cout << "Eixo Y\n";}
  if(X != 0 && Y == 0){cout << "Eixo X\n";}
  if(X > 0 && Y > 0){cout << "Q1\n";}
  if(X < 0 && Y > 0){cout << "Q2\n";}
  if(X < 0 && Y < 0){cout << "Q3\n";}
  if(X > 0 && Y < 0){cout << "Q4\n";}
  if(X == 0 && Y == 0){cout << "Origem\n";}
 
    return 0;
}
