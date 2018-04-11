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

void carro(){
  int km;
  cin >> km;
  printf("%d minutos\n", km * 2 );
}
int main(){
  //area_circulo();
  //area_esfera();
  //figuras();
  //maior();
  //consumo();
  //distancia();
  carro();
  return 0;
}
