#include <stdio.h>

/*
  ENTRADA:
  valor total da conta
  quantidade de amigos do João que participaram  da  festa.  
  
  PROCESSAMENTO:
  Calcular  e  escrever  o  valor  que  João  irá  pagar pela conta e o 
  valor pago pelos seus amigos.
  
  SAIDA
  O programa deve calcular conforme as regras abaixo
  considere valor total da conta: 
  
  a) Abaixo de R$300,00  
     João  paga  80%  da conta  e  divide o  restante  
     igualmente  por seus  amigos;
  
  b) R$300,00  até  R$600,00:
     João  paga  a  metade  e  divide  o restante  igualmente
     por  seus  amigos;
    
  c) Acima  de  R$  600,00  a  conta  e dividida 
     igualmente entre ele e seus amigos
*/

int main() {
  double total, rest;
  int friendsNumber;

  scanf("%lf %i", &total, &friendsNumber);

  if(total < 300.00) {
    rest = total * 0.2 / friendsNumber;
    total = total - rest;
    return printf("\nJoao paga R$ %.2lf (80%%)\nSeus %i amigos(s) pagam: R$ %.2lf", total, friendsNumber, rest / friendsNumber);
  }

  if(total >= 300.00 && total <= 600.00) {
    rest = total * 0.5;
    total = total - rest;
    return printf("\nJoao paga R$ %.2lf (50%%)\nSeus %i amigos(s) pagam: R$ %.2lf", total, friendsNumber, rest / friendsNumber);
  }

  if(total > 600.00) {
    total = total / (friendsNumber + 1);
    return printf("\nTodos os %i pagam: R$ %.2lf", friendsNumber + 1, total);
  }

  return 0;
}