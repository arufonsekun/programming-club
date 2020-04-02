#include <iostream>
#include <stdio.h>
#include <vector> 
using namespace std;
 
int main() {
  float n1 = 0;
  int carry = 1;
  vector<float> scores;
  while (carry != 2){
    cin >> n1;
    if (n1 < 0 | n1 > 10) {
      cout << "nota invalida" << '\n';
    }
    else{
      scores.push_back(n1);
    }
    if (scores.size() == 2){
      printf("media = %.2f\n", ((scores[0] + scores[1]) / 2.0));
      carry = 3;
      while(carry != 1 & carry != 2){
        cout << "novo calculo (1-sim 2-nao)" << '\n';
        cin >> carry;
      }
      scores.clear();
    }
  }
 
  return 0;
}
