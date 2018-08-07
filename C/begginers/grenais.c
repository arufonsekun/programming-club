#include <stdio.h>
#include <stdlib.h>

int main(){
  unsigned short int menu = 1;
  unsigned int inter = 0, gremio = 0;
  unsigned int wi = 0, wg = 0, draws = 0, n = 0;

  while (1){
    scanf("%u %u", &wi, &wg);

    if (wi > wg) inter++;
    else if (wi < wg) gremio++;
    else draws++;
    n++;

    printf("%s", "Novo grenal (1-sim 2-nao)\n");
    scanf("%hu\n", &menu);

    if (menu == 2) break;
  }

  printf("%u grenais\n", n);
  printf("Inter:%u\n", inter);
  printf("Gremio:%u\n", gremio);
  printf("Empates:%u\n", draws);

  if (inter > gremio) printf("Inter venceu mais\n");
  else if (gremio > inter) printf("Gremio venceu mais\n");
  else printf("Nao houve vencedor\n");

  return 0;
}
