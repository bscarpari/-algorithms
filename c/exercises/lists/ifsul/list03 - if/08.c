#include <stdio.h>

int main() {
  double nota01, nota02, nota03, media;

  scanf("%lf %lf %lf", &nota01, &nota02, &nota03);

  media = (nota01 + nota02 + nota03) / 3;
  
  if(media >= 7) 
    return printf("\nAPROVADO!");

  printf("\nREPROVADO!");
  return 0;
}