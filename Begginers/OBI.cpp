#include <iostream>
using namespace std;

void granpa_deposit(){
  int day, sale, deposit, smaller;
  cin >> day >> sale;
  smaller = sale;
  for(int i = 0; i < day; i ++){
    cin >> deposit;
    sale += deposit;
    if (sale < smaller) smaller = sale;
  }
  cout << smaller << endl;
}

void volume(){
  int initial, changes, x;
  cin >> initial >> changes;
  for (int i = 0; i < changes; i++){
    cin >> x;
    initial += x;
  }
  if(initial > 100)initial = 100;
  if (initial < 0)initial = 0;
  cout << initial << endl;
}

int main(){
  volume();
  return 0;
}
