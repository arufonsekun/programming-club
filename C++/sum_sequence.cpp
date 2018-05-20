#include <iostream>
#include <stdio.h>
#include <vector>
#include <math.h>
using namespace std;

vector<int> sort(int a ,int b){
  int smaller, bigger;
  vector<int> num;
  bigger = (a + b + abs(a - b)) / 2;
  if (bigger == a){smaller = b;}
  if (bigger == b){smaller = a;}
  num.push_back(smaller);
  num.push_back(bigger);
  return num;
}

void PRINT_ELEMENTS(vector<int> vect){
  for (int i=0; i < vect.size(); i++){
    cout << vect[i] << ' ';
  }
}

void sequence_and_sum(){
  int M,N, sum = 0;
  vector<int> numbers;
  cin >> M >> N;
  if (M > 0 && N > 0){
    numbers.push_back(sort(M,N)[0]);
    numbers.push_back(sort(M,N)[1]);
    while (M > 0 & N > 0){
      cin >> M >> N;
      if (M > 0 & N > 0){
        numbers.push_back(sort(M,N)[0]);
        numbers.push_back(sort(M,N)[1]);
      }
    }
    for (int i=0; i <= numbers.size()-2; i+=2){
      while(numbers[i] <= numbers[i+1]){
        cout << numbers[i] << ' ';
        sum += numbers[i];
        numbers[i] += 1;
      }
      printf("Sum=%d\n", sum);
      sum = 0;
    }
  }
}

void asce_desce(){
  int x = 0, y = 1;
  while(y != x){
    cin >> x >> y;
    if(x != y){
      if (x > y) printf("Decrescente\n");
      else printf("Crescente\n");
    }
  }
}

void access(){
  int pass = 0;
  while(pass != 2002){
    cin >> pass;
    if (pass != 2002) printf("Senha Invalida\n");
    else printf("Acesso Permitido\n");
  }
}

void quadrant(){
  int x = 1, y = 1;
  while(x != 0 & y != 0){
    cin >> x >> y;
    if (x > 0 & y > 0) printf("primeiro\n");
    if (x < 0 & y > 0) printf("segundo\n");
    if (x < 0 & y < 0) printf("terceiro\n");
    if (x > 0 & y < 0) printf("quarto\n");
  }
}

void division(){
  float x,y, cases;
  cin >> cases;
  while(cases > 0){
    cin >> x >> y;
    if (y != 0) printf("%.1f\n",x/y);
    else printf("divisao impossivel\n");
    cases--;
  }
}

void score_validation(){
  float x, average;
  int valid = 0;
  while(valid <= 1){
    cin >> x;
    if (x >= 0 & x <= 10){
      average += x;
      valid++;
    }
    else{
      printf("nota invalida\n");
    }
  }
  printf("media = %.2f\n", average/2.0);

}

int main(){
  //sequence_and_sum();
  //asce_desce();
  //access();
  //quadrant();
  //division();
  score_validation();
  return 0;
}
