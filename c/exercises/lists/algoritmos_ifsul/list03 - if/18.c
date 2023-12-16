#include <stdio.h>

/* 

  Josefina  deseja  saber  se  o  saldo  de  sua  conta  no  banco  e  suficiente
  para  pagar  a  dívida  do  armazém. 
  
  Faça um programa para ler:
  
  ENTRADA
  a) o saldo de sua conta no banco
  b) o valor de sua dívida
  
  E imprima a mensagem mais adequada conforme o caso:
  
  - a dívida não pode ser paga
  - saldo suficiente  para  pagar  até  o  dia  10
  - saldo suficiente  para  pagar  até  o  dia 20
  - saldo suficiente para pagar em qualquer dia. 
  
  Além disso, para imprimir as mensagens deve-se levar em conta o seguinte: 
  
  -se a dívida for paga até o dia 10 (inclusive) não sofrera acréscimo.
  -se a dívida for paga após o dia 10 (mas até o dia 20) recebera um acréscimo de 3%.
  -se a dívida for paga após o dia 20 recebera um acréscimo de 5%. 
  
  Exemplo de cálculo: Se Josefina possui R$310,00 de saldo e sua dívida for 
  de R$300,00 deverá ser impressa a  mensagem: “Saldo suficiente para pagar
  até o dia 20”, pois o saldo só e suficiente para pagar um acréscimo de até
  3% (R$ 309,00), já que se for atribuído um acréscimo de 5% a dívida passara
  a R$315,00.
  
  Exemplos de dados de entrada e suas respectivas saídas: 
  Entrada: 250 (saldo) 300 (valor) Saída: A dívida não pode ser paga

*/

int main() {
  float saldo, divida;

  printf("Digite o saldo e a divida (ex: 1.0 2.0): ");
  scanf("%f %f", &saldo, &divida);

  if (saldo < divida) {
    printf("A divida nao pode ser paga\n");
  } else if (saldo >= divida && saldo < divida * 1.03) {
    printf("Saldo suficiente para pagar ate o dia 10\n");
  } else if (saldo >= divida * 1.03 && saldo < divida * 1.05) {
    printf("Saldo suficiente para pagar ate o dia 20\n");
  } else {
    printf("Saldo suficiente para pagar em qualquer dia\n");
  }

  return 0;
}