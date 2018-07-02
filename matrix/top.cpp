#include <iostream>
#include <stdio.h>
using namespace std;

int main(){
  char operation;
  float matrix[12][12];
  float sum = 0.0;
  float denominator = 0.0;

  unsigned short int i = 0, j = 0;
  unsigned short int counter = 1;
  cin >> operation;
  for (unsigned short int e = 0; e < 144; e++){
    cin >> matrix[i][j];
    if (j >= counter & j <= (11 - counter) & i < 5){
      sum += matrix[i][j];
      denominator += 1.0;
    }
    if (j == 11){
      j = 0;
      i++;
      counter++;
    }
    else{
      j++;
    }
  }
  if (operation == 'S') {
    printf("%.1f\n", sum);
  }
  else {
    printf("%.1f\n", sum/denominator);
  }
  return 0;
}
