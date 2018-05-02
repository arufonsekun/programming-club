#include <iostream>
#include <math.h>
using namespace std;

int main(){
  int begin, end, minutes1, minutes2;
  cin >> begin >> minutes1 >> end >> minutes2;
  int passHours = 0; int passMinutes = 0;
  if (end == begin && minutes1 > minutes2){
    passHours = 23;
    passMinutes = 60 - (minutes1 - minutes2);
  }
  else if (end == begin && minutes1 == minutes2){
    passHours = 24;
  }
  else{
    while (begin != end || minutes1 != minutes2){
    minutes1+=1;
    passMinutes+=1;
    if (minutes1 == 60){
      begin+= 1;
      minutes1 = 0;
    }
    if (begin == 24){
      begin = 0;
    }
    if (passMinutes == 60){
      passHours+=1;
      passMinutes = 0;
    }
    }
  }

  cout << "O JOGO DUROU " << passHours << " HORA(S) E " << passMinutes << " MINUTO(S)" << '\n';
  return 0;
}
