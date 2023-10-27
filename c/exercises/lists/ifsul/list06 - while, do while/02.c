#include <stdio.h>
# define init 121
# define final 201

/*
  Faça  um  programa  que  mostra  os  números  entre  121  e  201  de  3  em  3  (usando DO WHILE).
*/
int main() {
  int i = init;

  do {
    printf("%d\n", i);
    i += 3;
  } while (i <= final);

  return 0;
}