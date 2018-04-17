#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
using namespace std;

void area_circulo(void){
  double raio;
  double pi = 3.14159;
  cin >> raio;
  double area = pi * raio * raio;
  printf("A=%.4lf\n",area);
}

void area_esfera(){
  double R;
  cin >> R;
  double volume = (4 * 3.14159 * R * R * R)/3.0;
  printf("VOLUME = %.3lf\n", volume);
}

void figuras(){
  double A, B, C;
  double a, b, c, d, e;
  cin >> A >> B >> C;
  a = (A * C)/2;
  b = 3.14159 * C * C;
  c = ((A + B) * C) / 2;
  d = B * B;
  e = A * B;
  printf("TRIANGULO: %.3lf\n", a);
  printf("CIRCULO: %.3lf\n", b);
  printf("TRAPEZIO: %.3lf\n", c);
  printf("QUADRADO: %.3lf\n", d);
  printf("RETANGULO: %.3lf\n", e);
}

void maior(){
  int a,b,c;
  cin >> a >> b >> c;
  int MaiorAB = (a + b + abs(a - b)) / 2;
  if (c > MaiorAB){
    MaiorAB = c;
  }
  printf("%d eh o maior\n", MaiorAB);
}

void consumo(){
  int X; double Y;
  cin >> X >> Y;
  double total = X / Y;
  printf("%.3lf km/l\n", total);
}

void distancia(){
  float x1, y1, x2, y2;
  cin >> x1 >> y1;
  cin >> x2 >> y2;
  float Distancia = (pow(x2 - x1, 2) + pow(y2 - y1, 2));
  Distancia = sqrt(Distancia);
  printf("%.4f\n",Distancia);
}

<<<<<<< HEAD
void fuelSpent(){
  int speed;
  int hours;
  cin >> speed;
  cin >> hours;
  double consume = (speed * hours) / 12.0;
  printf("%.3lf\n", consume);
}

void timeConversor(){
  int seconds = 0;
  int hours = 0;
  int minutes = 0;
  cin >> seconds;

  if (seconds >= 3600){
    hours = seconds / 3600;
    seconds -= hours * 3600;
  }
  if (seconds >= 60){
    minutes = seconds / 60;
    seconds -= minutes * 60;
  }

  printf("%d:%d:%d \n", hours, minutes, seconds);
}

void ageDays() {
  int days = 0;
  int years = 0;
  int month = 0;
  cin >> days;
  if (days >= 365){
    years = days / 365;
    days -= years * 365;
  }
  if (days >= 30){
    month = days / 30;
    days -= month * 30;
  }
  printf("%d ano(s)\n",years);
  printf("%d mes(es)\n",month);
  printf("%d dia(s)\n",days);
}

void selectionTest(){
  int A, B, C, D;
  cin >> A >> B >> C >> D;
  if (B > C && D > A){
    if ((A + B) < (C + D) && (A > 0 && C > 0 && D > 0)){
      printf("Valores aceitos\n");
    }
    else{
      printf("Valores nao aceitos\n");
    }
  }
  else{
    printf("Valores nao aceitos\n");
  }
}

void baskara(){
  float A,B,C;
  cin >> A >> B >> C;
  float R1;
  float R2;
  float delta;
  delta = B * B + (-4.0 * A * C);
  if (delta >= 0 && 2.0 * A != 0){
    R1 = (-1.0 * B + sqrt(delta)) / (2.0 * A);
    R2 = (-1.0 * B - sqrt(delta)) / (2.0 * A);
    printf("R1 = %.5f\n", R1);
    printf("R2 = %.5f\n", R2);
  }
  else{
    printf("Impossivel calcular\n");
  }

}

void interval(){
  double input;
  cin >> input;
  if (input >= 0 && input <= 25){
    cout << "Intervalo [0,25]\n";
  }
  if (input > 25 && input <= 50){
    cout << "Intervalo (25,50]\n";
  }
  if(input > 50 && input <= 75){
    cout << "Intervalo (50,75]\n";
  }
  if (input > 75 && input <= 100){
    cout << "Intervalo (75,100]\n";
  }
  if(input > 100 || input < 0){
    cout << "Fora de intervalo\n";
  }
}

void sum(){
  int A, B;
   cin >> A >> B;
   int X = A + B;
   cout << "X = " << X << '\n';
}

void snack(){
  int X, Y;
  float total;
  cin >> X >> Y;
  if (X == 1){cout << "Entro";total = Y * 4.0;}
  if (X == 2){total = Y * 4.5;}
  if (X == 3){total = Y * 5.0;}
  if (X == 4){total = Y * 2.0;}
  if (X == 5){total = Y * 1.5;}
  printf("Total: R$ %.2f\n", total);
}

=======
void carro(){
  int km;
  cin >> km;
  printf("%d minutos\n", km * 2 );
}
>>>>>>> 8141287a73f1df06df2560e29f87d82da39acc3a
int main(){
  //area_circulo();
  //area_esfera();
  //figuras();
  //maior();
  //consumo();
  //distancia();
<<<<<<< HEAD
  //fuelSpent();
  //banknotes();
  //timeConversor();
  //ageDays();
  //selectionTest();
  //baskara();
  //interval();
  //sum();
  snack();
=======
  carro();
>>>>>>> 8141287a73f1df06df2560e29f87d82da39acc3a
  return 0;
}
