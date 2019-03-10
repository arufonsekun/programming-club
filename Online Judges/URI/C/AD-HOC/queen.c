#include <stdio.h>

unsigned int iStart = 1, jStart = 1;
unsigned int iEnd = 1, jEnd = 1;

int bigger(){
    int dist1 = (iStart - 0 > 8 - iStart ? iStart - 0 : 8 - iStart);
    int dist2 = (jStart - 0 > 8 - jStart ? jStart - 0 : 8 - jStart);

    return (dist1 > dist2 ? dist1 : dist2);
}

int checkDiagonal(){
  int i1 = iStart, j1 = jStart, i2 = iStart, j2 = jStart;
  int i3 = iStart, j3 = jStart, i4 = iStart, j4 = jStart;
  int counter = 0;
  int retorno = 0;
  int biggest = bigger();
  //printf("%d\n", biggest);

  while (counter <= biggest) {
    if (i1 >= 1 & j1 >= 1){
      if (i1 == iEnd & j1 == jEnd) {
        retorno = 1;
        break;
      }
      i1--;
      j1--;
    }

    if (i2 >= 1 & j2 <= 8){
      if (i2 == iEnd & j2 == jEnd) {
        retorno = 1;
        break;
      }
      i2--;
      j2++;
    }

    if (i3 <= 8 & j3 >= 1){
      if (i3 == iEnd & j3 == jEnd) {
        retorno = 1;
        break;
      }
      i3++;
      j3--;
    }

    if (i4 <= 8 & j4 <= 8){
      if (i4 == iEnd & j4 == jEnd) {
        retorno = 1;
        break;
      }
      i4++;
      j4++;
    }
    //printf("i2 = %d j2 = %d\n", i2, j2);
    counter++;
  }
  return retorno;
}

int main(){
  unsigned int turns = 0;

  while (1){
    scanf("%u %u %u %u\n", &iStart, &jStart, &iEnd, &jEnd);
    if (iStart != 0 & jStart != 0 & iEnd != 0 & jEnd != 0){
      if (iStart == iEnd & jStart == jEnd){
        turns = 0;
      }

      else if (iStart == iEnd | jStart == jEnd){
        turns = 1;
      }

      else if(checkDiagonal() == 1){
        turns = 1;
      }

      else{
        turns = 2;
      }
      printf("%u\n", turns);
    }

    else{
      break;
    }
  }

}
