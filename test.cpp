#include <iostream>
#include <stdio.h>
#include <math.h>
using namespace std;

void banknotes(int money1){
  int money = money1; int notes50 = 0; int notes20 = 0;
  int notes10 = 0; int notes5 = 0; int notes2 = 0;
  int notes1 = 0; int notes = 0;

  if (money >= 100){
      notes = money / 100;
      money = money - (notes * 100);
  }
  if (money >= 50){
    notes50  = money / 50;
    money = money -(notes50 * 50);
  }

  if (money >= 20){
    notes20 = money / 20;
    money -= notes20 * 20;
  }

  if (money >= 10){
    notes10 = money / 10;
    money -= notes10 * 10;
  }

  if (money >= 5){
    notes5 = money / 5;
    money -= notes5 * 5;
  }

  if (money >= 2){
    notes2 = money / 2;
    money -= notes2 * 2;
  }
  if(money >= 1){
    notes1 = money / 1;
    money -= notes1 * 1;
  }

  printf("NOTAS:\n");
  printf("%i nota(s) de R$ 100.00\n", notes);
  printf("%i nota(s) de R$ 50.00\n", notes50);
  printf("%i nota(s) de R$ 20.00\n", notes20);
  printf("%i nota(s) de R$ 10.00\n", notes10);
  printf("%i nota(s) de R$ 5.00\n", notes5);
  printf("%i nota(s) de R$ 2.00\n", notes2);
  printf("MOEDAS:\n");
  printf("%i moeda(s) de R$ 1.00\n", notes1);

}

void bankCoins(){
  double money;
  double num;
  int coin5 = 0; int coin2 = 0;
  int coin1 = 0; int coin05 = 0;
  int coin = 0;
  cin >> money;
  banknotes(trunc(money));
  num = money - floor(money);
  printf("Num: %f\n",num);
  if (num >= 0.5){
    coin5 = num / 0.5;
    num -= coin5 * 0.5;
  }
  printf("Num: %f\n",num);
  if (num >= 0.25){
    coin2 =  num / 0.25;
    num -= coin2 * 0.25;
  }
  printf("Num: %f\n",num);
  if (num >= 0.1){
    coin1 =  num / 0.1;
    num -= coin1 * 0.1;
  }
  printf("Num: %f\n",num);
  if(num >= 0.05){
    coin05 =  num / 0.05;
    num -= coin05 * 0.05;
  }
  printf("Num: %f\n",num);
  if (num >= 0.01){
    coin = num / 0.01;
    num -= coin * 0.01;
  }

  printf("%d moeda(s) de R$ 0.50\n",coin5);
  printf("%d moeda(s) de R$ 0.25\n",coin2);
  printf("%d moeda(s) de R$ 0.10\n",coin1);
  printf("%d moeda(s) de R$ 0.05\n",coin05);
  printf("%d moeda(s) de R$ 0.01\n",coin);
}

int main(){
  bankCoins();
  return 0;
}
