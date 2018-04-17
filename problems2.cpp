#include <iostream>
#include <stdio.h>
#include <stdlib.h>
using namespace std;

void average3(){
  float A, B, C, D, E;
  cin >> A >> B >> C >> D;
  float average = ((A * 2)+(B * 3)+(C * 4)+(D * 1))/10;
  printf("Media: %.1f\n", average);
  if (average >= 7){cout << "Aluno aprovado." << '\n';}
  if (average >= 5 && average <= 6.9){
    cin >> E;
    cout << "Aluno em exame.\n";
    float exam = (average + E)/2;
    printf("Nota do exame: %.1f\n", E);
    if (exam >= 5.0){cout << "Aluno aprovado.\n";}
    if (exam <= 4.9){cout << "Aluno reprovado.\n";}
    printf("Media final: %.1f\n",exam);
  }
  if(average < 5){
    cout << "Aluno reprovado.\n";
  }
}

void cordinatesOfPoint(){
  float X, Y;
  cin >> X >> Y;
  if (X == 0 && Y != 0){cout << "Eixo Y\n";}
  if(X != 0 && Y == 0){cout << "Eixo X\n";}
  if(X > 0 && Y > 0){cout << "Q1\n";}
  if(X < 0 && Y > 0){cout << "Q2\n";}
  if(X < 0 && Y < 0){cout << "Q3\n";}
  if(X > 0 && Y < 0){cout << "Q4\n";}
  if(X == 0 && Y == 0){cout << "Origem\n";}
}

void sortNumbers(){
  int a,b,c;
  cin >> a >> b >> c;
  int num[] = {a,b,c};
  num.index(2);

}
int main(){
  //average3();
  //cordinatesOfPoint();
  sortNumbers();
  return 0;
}
