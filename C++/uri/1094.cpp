#include <iostream>
#include <stdio.h> 
using namespace std;
 
int main() {
  int cases = 0, rat = 0, frog = 0, habbit = 0, total = 0, entry = 0;
  char type = ' ';
  cin >> cases;
  for (int i = 0; i < cases; i++){
    cin >> entry >> type;
    if (type == 'C') habbit += entry;
    if (type == 'S') frog += entry;
    if (type == 'R') rat += entry;
    total += entry;
  }
  float perS, perC, perR;
  perS = ((frog * 100.0)/total);
  perR = ((rat * 100.0)/total);
  perC = ((habbit * 100.0)/total);
  printf("Total: %d cobaias\n", total);
  printf("Total de coelhos: %d\n", habbit);
  printf("Total de ratos: %d\n", rat);
  printf("Total de sapos: %d\n", frog);
  printf("Percentual de coelhos: %.2f %\n", perC);
  printf("Percentual de ratos: %.2f %\n", perR);
  printf("Percentual de sapos: %.2f %\n", perS);
 
  return 0;
}
