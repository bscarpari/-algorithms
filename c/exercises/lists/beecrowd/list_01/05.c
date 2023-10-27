  #include <stdio.h>

  /*
    Leia quatro valores inteiros A, B, C e D. A seguir, calcule e mostre a diferença
    do produto de A e B pelo produto de C e D segundo a fórmula: DIFERENCA = (A * B - C * D).
  */
  
  int main() {
      int A, B, C, D, DIFERENCA;
      
      scanf("%i %i %i %i", &A, &B, &C, &D);
  
      DIFERENCA = (A * B - C * D);
      
      printf("DIFERENCA = %i\n", DIFERENCA);
  
      return 0;
  }