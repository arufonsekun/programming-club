#include <iostream>
#include <stdio.h>
#include <cmath>
using namespace std;

void experiment(){
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
}

void sequenceIJ1(){
  int i = 1, j = 60;
  while(j >= 0){
    printf("I=%d J=%d\n", i,j);
    i += 3;
    j -= 5;
  }
}

void sequenceIJ2(){
  int i = 1, j = 7, loop = 1;
  while(i <= 9){
    printf("I=%d J=%d\n", i,j);
    if (loop == 1) {
      j = 6;
    }
    if (loop == 2){
      j = 5;
    }
    if (loop == 3) {
      j = 7; loop = 0;
      i+=2;
    }
    loop++;
  }
}

void sequenceIJ3(){
  int i = 1, j = 5, loop = 0;
  while (j <= 13){
      printf("I=%d J=%d\n", i,j+2);
      printf("I=%d J=%d\n", i,j+1);
      printf("I=%d J=%d\n", i,j);
    i+=2;
    j+=2;
  }
}

void sequenceIJ4(){
  float i = 0, j;
  int aux = 0;
  while(i <= 2.2){
    aux = (int)i;
    if (i - aux == 0 & i - aux == 0.0){
      printf("I=%d J=%d\n", aux,1+aux);
      printf("I=%d J=%d\n", aux,2+aux);
      printf("I=%d J=%d\n", aux,3+aux);
    }
    else{
      printf("I=%.1f J=%.1f\n", i,1+i);
      printf("I=%.1f J=%.1f\n", i,2+i);
      printf("I=%.1f J=%.1f\n", i,3+i);
    }
    i+= 0.2;
  }
}

void fuel_type(){
  int input = 8;
  int alc = 0, gas = 0, die = 0;
  while(input != 4){
    cin >> input;
    if (input == 1) alc++;
    if (input == 2) gas++;
    if (input == 3) die++; 
  }
  printf("MUITO OBRIGADO\n");
  printf("Alcool: %d\n", alc);
  printf("Gasolina: %d\n", gas);
  printf("Diesel: %d\n", die);
}

void PUM(){
  int rows;
  cin >> rows;
  for (int i = 1; i < (rows*3)+rows; i++){
    if (i % 4 == 0){
      printf("PUM\n");
      i++;
    }    
    cout << i << ' ';
  }
  printf("PUM\n");
}

void square_cubic(){
  int x;
  cin >> x;
  for (int i = 1; i <= x; i++){
    cout << i << ' ' << pow(i,2) << ' ' << pow(i,3) << '\n'; 
  }
}

void logic_sequence(){
  int x;
  int square = 0, cubic = 0, step = 0;
  cin >> x;
  for(int i = 1; i <= x;){
      if(step == 0){
        square = pow(i, 2);
        cubic = pow(i, 3);
        cout << i << ' ' << square << ' ' << cubic << '\n';
        step = 1;
      }
      if (step == 1){
        cout << i << ' ' << square+1 << ' ' << cubic+1 << '\n';
        step = 0;
        i++;
      }
  }
}

void logic_sequence2(){
  int x,y;
  cin >> x >> y;
  for (int i = 1; i <= y; i++){
    cout << i;
    if (i % x == 0){
      printf("\n");
    }
    else {
      cout << ' ';
    }
  }
}

int main() {
  //experiment();
  //sequenceIJ1();
  //sequenceIJ2();
  //sequenceIJ3();
  //sequenceIJ4();
  //fuel_type();
  //PUM();
  //square_cubic();
  //logic_sequence();
  logic_sequence2();
  return 0;
}
