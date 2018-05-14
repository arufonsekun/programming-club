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
  if (initial < 0){
    initial  = 0;
  }
  else{
    for (int i = 0; i < changes; i++){
      cin >> x;
      initial += x;
      if(initial >= 100)initial = 100;
      if (initial <= 0)initial = 0;
    }
  }
  cout << initial << endl;
}

void racing(){
  int N, D, V;
  int N1, D1, V1;
  cin >> N >> D >> V;
  cin >> N1 >> D1 >> V1;
  while (D > 0 & D1 > 0) {
    if (D1 == 0 & D == 0) {
      cout << N1 << endl;
      break;
    }
    if (D == 1) cout << N << endl;
    if (D1 == 1) cout << N1 << endl;
    D -= V;
    D1 -= V1;
  }

}

int main(){
  //volume();
  racing();
  return 0;
}
