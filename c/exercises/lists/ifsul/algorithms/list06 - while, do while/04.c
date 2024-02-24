#include <stdio.h>
#include <string.h>

/*
  [*] Faça  um  programa  que  leia  um  nome  de  usuário 
  e  a  sua  senha  e  não aceite a senha igual ao nome
  do usuário, mostrando uma mensagem de erro e voltando 
  pedir as informações.
*/
int main() {
  char username[50], password[50];

  printf("Nome de usuário: ");
  scanf("%s", username);

  printf("Senha: ");
  scanf("%s", password);

  while (strcmp(username, password) == 0) {
    printf("A senha não pode ser igual ao nome de usuário.\n");

    printf("Nome de usuário: ");
    scanf("%s", username);

    printf("Senha: ");
    scanf("%s", password);
  }

  return 0;
}