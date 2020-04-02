#include <iostream>
 
using namespace std;
 
int main() {
  char operation = ' ';
  float matrix[12][12];
  unsigned int diagonal = 11;

  unsigned int i = 0;
  unsigned int j = 0;

  unsigned denominator = 0.0;
  float average = 0;

  cin >> operation;
  for (int input = 0; input <= 143; input++){
    cin >> matrix[i][j];
    if (j > diagonal){
      average += matrix[i][j];
      denominator++;
    }
    j++;
    if (j == 12){
      j = 0;
      i++;
      diagonal--;
    }
  }

  if (operation == 'S') printf("%.1f\n", average);
  else printf("%.1f\n", average/denominator);
 
    return 0;
}
