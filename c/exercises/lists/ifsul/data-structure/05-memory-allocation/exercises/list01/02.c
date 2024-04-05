#include <stdio.h>
#include <string.h>

/*
Implemente uma função chamada newcalloc(), que faz exatamente o que a calloc() faz. 

Faça ela usando as funções malloc() e a memset(), que pertence a biblioteca string.h e recebe três argumentos:

a) o ponteiro
b) o que queremos colocar em todas as posições do vetor
c) o número de bytes: 

memset(ptr, 1, numero * tamanho_em_bytes)
*/

/* 
  Função que aloca um bloco de memória para um array de n elementos, cada um de tamanho size bytes, e inicializa todos os seus bits com zero.
  @param n: número de elementos
  @param size: tamanho de cada elemento
  @return: ponteiro para o bloco de memória alocado
*/
void *newcalloc(size_t n, size_t size) {
  void *ptr = malloc(n * size);

  if (ptr != NULL) {
    memset(ptr, 0, n * size);
  }

  return ptr;
}

int main() {
  int i, *v = (int *)newcalloc(5, sizeof(int));

  for (i = 0; i < 5; i++) {
    printf("%d ", v[i]);
  }

  free(v);
  return 0;
}