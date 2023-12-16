#include <stdio.h>

int main() {
  int A, B, C;

  scanf("%i %i", &A, &B);

  if(A == B) {
    C = A + B;
    printf("\nSOMA = %i", C);
  }
  else {
    C = A * B;
    printf("\nPRODUTO = %i", C);
  }

  return 0;
}