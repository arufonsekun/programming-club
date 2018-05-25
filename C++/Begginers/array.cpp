#include <iostream>
using namespace std;

int main(){
  int a,b,c;
  cin >> a >> b >> c;
  int AB = (a + b + abs(a - b)) / 2;
  int AC = (a + c + abs(a - c)) / 2;
  int BC = (c + b + abs(c - b)) / 2;
  if(a < b && a < c){
    cout << a << '\n';
  }
  else if(c < b && c < a){
    cout << c << '\n';
  }
  else if(b < a && b < c){
    cout << b << '\n';
  }
  if(AB != AC && AC == BC){
    cout << AB << '\n'<< AC << '\n';
  }
  else if(AB == AC && AC != BC){
    cout << BC << '\n'<< AB << '\n';
  }
  else if(AB == BC && AC != BC){
    cout << AC << '\n' << AB << '\n';
  }
  else if(AB != AC && AC == BC){
    cout << AB << '\n' << '\n' << BC << '\n';
  }
  cout << '\n';
  cout << a << '\n' << b << '\n' << c;
  return 0;
}
