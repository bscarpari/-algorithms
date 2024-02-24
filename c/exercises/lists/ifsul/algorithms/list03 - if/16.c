#include <stdio.h>

/* 

  Faça  um algoritmo que leia o número de gols marcados 
  pelo Grêmio e número de gols marcados pelo Inter em um 
  Gre-nal. Mostre na tela o nome do vencedor  e  quantos 
  gols  o  time  vencedor  fez  a  mais.  Caso  não  haja
  vencedor,   mostre   na   tela   o   total   de   gols 
  de   cada   time   com   a mensagem: EMPATE

*/

int main() {
  int gols_gremio, gols_inter;

  printf("GREMIO x INTER\n");
  printf("Digite os gols lado a lado (ex: 1 2): ");
  scanf("%d %d", &gols_gremio, &gols_inter);

  if (gols_gremio > gols_inter) {
    printf("Gremio venceu com %d gol(s) de diferenca\n", gols_gremio - gols_inter);
  } else if (gols_inter > gols_gremio) {
    printf("Inter venceu com %d gol(s) de diferenca\n", gols_inter - gols_gremio);
  } else {
    printf("Empate\n");
  }

  return 0;
}