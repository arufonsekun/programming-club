#include <iostream>
using namespace std;
 
int main() {
  float matrix[12][12];
  float average = 0;
  unsigned int denominator = 0;
  unsigned int diagonal = 11;
  unsigned int j = 0;
  unsigned int i = 0;
  char operation = ' ';
  cin >> operation;
  for (int inputs = 0; inputs <= 143; inputs++){
    cin >> matrix[i][j];
    if (j < diagonal){
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
  if (operation == 'S')printf("%.1f\n", average);
  else printf("%.1f\n", average/denominator);
 
  return 0;
}
