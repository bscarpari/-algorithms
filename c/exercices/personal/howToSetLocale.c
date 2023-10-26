#include <locale.h>

int main() {
  setlocale(LC_ALL, "Portuguese");
  printf("\nAcentuações agora funcionam");

  return 0;
}
