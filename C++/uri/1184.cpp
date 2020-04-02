#include <iostream>
 
using namespace std;
 
int main() {
  char operation = ' ';
  float matrix[12][12];
  int jsum = 0;
  int diagonal = 0;
  float sum = 0.0;
  int j = 0;
  int i = 0;
  float denominator = 0.0;
  cin >> operation;
  for (int e = 0; e <= 143; e++){
    cin >> matrix[i][j];
    if (j == 12){
      diagonal++;
      jsum = 0;
      j = 0;
      i++;
    }
    if (i == diagonal && jsum < diagonal){
      denominator++;
      sum +=  matrix[i][jsum];
    }
    j++;
    jsum++;

  }
  if (operation == 'S') printf("%.1f\n", sum);
  else printf("%.1f\n", sum/denominator);
 
    return 0;
}
