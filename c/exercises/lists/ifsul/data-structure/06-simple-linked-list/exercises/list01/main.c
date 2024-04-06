#include <stdio.h>
#include <stdlib.h>

/*
Implemente uma lista encadeada na linguagem C,
utilizando as estruturas apresentadas em aula.

Implemente as 6 funções descritas em aula.

Dentro da função main, implemente um menu de
escolha de qual função o usuário quer executar na lista.
*/

/* Estrutura */
struct node {
  int info;
  struct node *prox;
};

struct list {
  struct node *first;
};

/* Métodos (CRUD) */

/**
 * Inicializa a lista encadeada, atribuindo NULL ao primeiro nó.
 *
 * @param list ponteiro para a lista a ser inicializada
 */
void init(struct list *list) {
  struct list *temp = (struct list *)malloc(sizeof(struct list));
  temp->first = NULL;
  return temp;
}

/**
 * Inserção de elementos na lista encadeada
 *
 * @param previous nó anterior ao novo nó a ser inserido
 * @param desc ponteiro para a lista
 * @param info informação a ser inserida
 * @return void
 * @see https://www.ime.usp.br/~pf/algoritmos/aulas/lista.html
 */
void insert(struct node *previous, struct list *desc, int info) {
  if (previous == NULL) {
    if (desc->first == NULL) {
      struct node *new_node = (struct node *)malloc(sizeof(struct node));
      new_node->info = info;
      new_node->prox = NULL;
      desc->first = new_node;
    } else {
      struct node *new_node = (struct node *)malloc(sizeof(struct node));
      new_node->info = info;
      new_node->prox = desc->first;
      desc->first = new_node;
    }
  } else {
    struct node *new_node = (struct node *)malloc(sizeof(struct node));
    new_node->info = info;
    new_node->prox = previous->prox;
    previous->prox = new_node;
  }
}

void remove(struct node *previous, struct list *desc) {
  struct node *temp;

  if (previous == NULL) {
    if (desc->first == NULL) {
      printf("\nLista vazia\n");
      return;
    } else {
      temp = desc->first;
      desc->first = desc->first->prox;
      free(temp);
    }
  } else {
    if (previous->prox == NULL) {
      printf("\nNó anterior não tem próximo\n");
      return;
    } else {
      temp = previous->prox;
      previous->prox = temp->prox;
      free(temp);
    }
  }
}

struct node *findByNode(struct list *desc, int info) {
  struct node *temp = desc->first;

  if (temp == NULL) {
    printf("\nLista vazia\n");
    return NULL;
  }
  else {
    while (temp != NULL) {
      if (temp->info == info)
        return temp;

      temp = temp->prox;
    }

    return NULL;
  }
}

int main() {
  int op;
  struct list *list;

  do {
    printf("0 - Inicializar\n");
    printf("1 - Inserir\n");
    printf("2 - Excluir\n");
    printf("3 - Buscar\n");
    printf("4 - Listar\n");
    printf("5 - Sair\n");
    printf("Opção: ");
    scanf("%d", &op);

    switch (op) {
      case 0:
        printf("Inicializar lista\n");
        init(list);
        break;
      case 1:
        printf("Inserir\n");
        break;
      case 2:
        printf("Excluir\n");
        break;
      case 3:
        printf("Buscar\n");
        break;
      case 4:
        printf("Listar\n");
        break;
      case 5:
        printf("Sair\n");
        exit(0);
        break;
      default:
        printf("Opção inválida\n");
        break;
    }
  } while (op != 5);

  return 0;
}