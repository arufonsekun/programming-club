#include <iostream>
using namespace std;
int main() {
  int begin, end, hrs;
  cin >> begin >> end;
  if (begin == end){
    printf("O JOGO DUROU 24 HORAS(S)\n");
  }
  if(begin < end){
    printf("O JOGO DUROU %d HORAS(S)\n", end - begin);
  }else{
    while (begin != end){
      if(begin == 23){
        begin = 0;
        hrs++;
      }
      hrs++;
      begin++;
    }
    printf("O JOGO DUROU %d HORAS(S)\n");
  }
  return 0;
}
