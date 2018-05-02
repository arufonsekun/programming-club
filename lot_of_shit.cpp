#include <iostream>
#include <stdlib.h>
#include <vector>
#include <math.h>
using namespace std;

void interval(){
  int in = 0;
  int cases, num;
  cin >> cases;
  for (int i = 0; i < cases; i++){
    cin >> num;
    if (num >= 10 && num <= 20)in++;
  }
  printf("%d in\n", in);
  printf("%d out\n", cases - in);
}

void squares(){
  int num;
  cin >> num;
  for (int i = 1; i <= num; i++){
    if (i % 2 == 0) printf("%d^2 = %d\n", i, i*i);
  }
}

void even_or_odd(){
  vector<int> integers;
  int num = 0, cases;
  cin >> cases;
  for (int i = 1; i <= cases; i++){
    cin >> num;
    integers.push_back(num);
  }
  for(int e = 0; e < integers.size(); e++){
    if(integers[e] % 2 == 0 && integers[e] != 0) printf("EVEN ");
    if(abs(integers[e] % 2) == 1) printf("ODD ");
    if(integers[e] > 0) printf("POSITIVE\n");
    if(integers[e] < 0) printf("NEGATIVE\n");
    if (integers[e] == 0) printf("NULL\n");
  }
}

int main(){
  //interval();
  //squares();
  even_or_odd();
  return 0;
}
