#include <iostream>
#include <stdio.h>
#include <math.h>
using namespace std;

int banknotes(int N1){
  int N = N1; int notes50 = 0; int notes20 = 0;
  int notes10 = 0; int notes5 = 0; int notes2 = 0;
  int notes = 0;

  if (N >= 100){
      notes = N / 100;
      N = N - (notes * 100);
  }
  if (N >= 50){
    notes50  = N / 50;
    N = N -(notes50 * 50);
  }

  if (N >= 20){
    notes20 = N / 20;
    N -= notes20 * 20;
  }

  if (N >= 10){
    notes10 = N / 10;
    N -= notes10 * 10;
  }

  if (N >= 5){
    notes5 = N / 5;
    N -= notes5 * 5;
  }

  if (N >= 2){
    notes2 = N / 2;
    N -= notes2 * 2;
  }

  printf("NOTAS:\n");
  printf("%i nota(s) de R$ 100.00\n", notes);
  printf("%i nota(s) de R$ 50.00\n", notes50);
  printf("%i nota(s) de R$ 20.00\n", notes20);
  printf("%i nota(s) de R$ 10.00\n", notes10);
  printf("%i nota(s) de R$ 5.00\n", notes5);
  printf("%i nota(s) de R$ 2.00\n", notes2);

  return N;
}

void bankCoins(){
  double N; double nInt; int rest;
  int coin5 = 0; int coin2 = 0;
  int coin1 = 0; int coin05 = 0;
  int coin10 = 0; float coin = 0;
  cin >> N;
  N = modf(N, &nInt);
  rest = banknotes(trunc(nInt));
  N += rest;
  if (N >= 1){
      coin10 = N / 1;
      N -= coin10 * 1;
  }
  if (N >= 0.5){
    coin5 = N / 0.5;
    N -= coin5 * 0.5;
  }
  if (N >= 0.25){
    coin2 =  N / 0.25;
    N -= coin2 * 0.25;
  }
  if (N >= 0.1){
    coin1 =  N / 0.1;
    N -= coin1 * 0.1;
  }
  if(N >= 0.05){
    coin05 =  N / 0.05;
    N -= coin05 * 0.05;
  }
  coin = N / 0.01;

  printf("MOEDAS:\n");
  cout << coin10 <<" moeda(s) de R$ 1.00\n";
  cout << coin5 << " moeda(s) de R$ 0.50\n";
  cout << coin2 <<" moeda(s) de R$ 0.25\n";
  cout << coin1 << " moeda(s) de R$ 0.10\n";
  cout << coin05 << " moeda(s) de R$ 0.05\n";
  cout << coin << " moeda(s) de R$ 0.01\n";
}

int main(){
  bankCoins();
  return 0;
}
