#include <iostream>
 
using namespace std;
 
int main() {
 
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
 
    return 0;
}
