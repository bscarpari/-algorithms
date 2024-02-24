#include <stdio.h>

/*
  Faça um algoritmo que leia as seguintes informações
  de um grupo indeterminado de  produtos 
  (código,  quantidade,  tipo  e  valor),
  sendo que o programa termina quando  o 
  código  do  produto  for  zero.  
  
  Fazer a validação de todos os dados de
  entrada conforme tabela abaixo.
  
  Código do produto: > 0
  Quantidade: > 0 e < 100
  Tipo: 
    1 - Perecível
    2 - Não perecível
    3 - Congelado
  Valor: > 0
  
  No  final,  mostrar:
  a) a quantidade de produtos cadastrados
  b) o valor total de produtos perecíveis e
  não perecíveis.
*/

int main() {
  int code, quantity, type;
  float value, perishable = 0, notPerishable = 0;
  int count = 0;

  printf("\n");
  printf("| ------------------ |\n");
  printf("| Tipo               |\n");
  printf("| 1 - Perecivel      |\n");
  printf("| 2 - Nao perecivel  |\n");
  printf("| 3 - Congelado      |\n");
  printf("| ------------------ |\n");

  do {
    printf("\n");
    printf("| ------ | ----------- | -------- | ----------- |\n");
    printf("| Codigo | Quantidade  | Tipo     | Valor (R$)  |\n");
    scanf("%d %d %d %f", &code, &quantity, &type, &value);
    printf("| ------ | ----------- | -------- | ----------- |\n");
    printf("\n");

    if (code == 0) break;

    if (code > 0 && quantity > 0 && quantity < 100 && value > 0) {
      count++;

      if (type == 1)
        perishable += value;

      if (type == 2)
        notPerishable += value;
    }
  } while (code != 0);

  printf("| Produtos cadastrados | Total (R$ em pereciveis) | Total (R$ em nao-pereciveis) |\n");
  printf("| -------------------- | ------------------------ | ---------------------------- |\n");
  printf("| %20d | %19s%.2f | %23s%.2f |\n", count, "R$ ", perishable, "R$ ", notPerishable);

  return 0;
}