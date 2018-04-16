#include <iostream>
#include <vector>
using namespace std;

int main(){
  int a,b,c;
  cin >> a >> b >> c;
  int AB = (a + b + abs(a - b)) / 2;
  int AC = (a + c + abs(a - c)) / 2;
  int BC = (c + b + abs(c - b)) / 2;
  if(AB != AC && AC == BC){
    cout << AC << '\n'<< AB << '\n';
  }
  else if(AB == BC && AC != BC){
    cout << AB << '\n' << AC << '\n';
  }
  else if(AB != AC && AC == BC){
    cout << BC << '\n' << '\n' << AB << '\n';
  }
  if(a < b && a < c){
    cout << a << '\n';
  }
  else if(c < b && c < a){
    cout << c << '\n';
  }
  if(b < a && b < c){
    cout << b << '\n';
  }
  cout << AB << AC << BC << '\n';
  return 0;
}
