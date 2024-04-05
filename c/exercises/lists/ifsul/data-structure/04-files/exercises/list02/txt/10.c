#include <stdio.h>

/*
Faça um programa que permita que o usuário entre com diversos nomes e
telefone para cadastro, e crie um arquivo com essas informações, uma
por linha. 

O usuário finaliza a entrada com ‘0’ para o telefone
*/

int main() {
  FILE *file;
  char filename[255], name[60], phone[14];

  printf("Digite o nome do arquivo de texto: ");
  scanf("%s", filename);

  file = fopen(filename, "w");

  if (file == NULL) {
    printf("Erro ao abrir o arquivo de escrita");
    return 1;
  }

  while (1) {
    if (phone[0] == '0')
      break;

    printf("Digite o nome: ");
    scanf("%s", name);

    printf("Digite o telefone: ");
    scanf("%s", phone);

    fprintf(file, "%s %s\n", name, phone);
  }

  fclose(file);

  return 0;
}