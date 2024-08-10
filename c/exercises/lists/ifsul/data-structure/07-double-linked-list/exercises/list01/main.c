#include <stdio.h>
#include <stdlib.h>

/*
Implemente uma lista encadeada na linguagem C,
utilizando as estruturas apresentadas em aula.

Implemente as 6 funcoes descritas em aula.

Dentro da funcao main, implemente um menu de
escolha de qual funcao o usuario quer executar na lista.
*/

/* Estrutura */
struct node {
  int value;
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
	list->first = NULL;
}

/**
 * Inserção de elementos na lista encadeada
 *
 * @param previous nó anterior ao novo nó a ser inserido
 * @param desc ponteiro para a lista
 * @param value informação a ser inserida
 * @return void
 * @see https://www.ime.usp.br/~pf/algoritmos/aulas/lista.html
 */
void insert(struct node *previous, struct list *desc, int value) {
  if (previous == NULL) {
    if (desc->first == NULL) {
      struct node *new_node = (struct node *)malloc(sizeof(struct node));
      new_node->value = value;
      new_node->prox = NULL;
      desc->first = new_node;
    } else {
      struct node *new_node = (struct node *)malloc(sizeof(struct node));
      new_node->value = value;
      new_node->prox = desc->first;
      desc->first = new_node;
    }
  } else {
    struct node *new_node = (struct node *)malloc(sizeof(struct node));
    new_node->value = value;
    new_node->prox = previous->prox;
    previous->prox = new_node;
  }
}

void print_list(struct list * desc) {
	struct node *current = desc->first;
	
	while(current != NULL) {
		printf("%d -> ", current->value);
		current = current->prox;
	}
	
	printf("NULL\n");
}

void removeNode(struct node *previous, struct list *desc) {
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

struct node *findByNode(struct list *desc, int value) {
  struct node *temp = desc->first;

  if (temp == NULL) {
    printf("\nLista vazia\n");
    return NULL;
  }
  else {
    while (temp != NULL) {
      if (temp->value == value)
        return temp;

      temp = temp->prox;
    }

    return NULL;
  }
}


int main() {
    struct list my_list;
    init(&my_list);
    int choice, value;
    struct node *prev_node = NULL;

    while (1) {
        printf("\nMenu:\n");
        printf("1. Inserir elemento\n");
        printf("2. Remover elemento\n");
        printf("3. Mostrar lista\n");
        printf("4. Sair\n");
        printf("Escolha uma op��o: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Digite o valor a ser inserido: ");
                scanf("%d", &value);
                insert(prev_node, &my_list, value);
                break;
            case 2:
                removeNode(prev_node, &my_list);
                break;
            case 3:
                print_list(&my_list);
                break;
            case 4:
                exit(0);
            default:
                printf("Op��o inv�lida!\n");
        }
    }
}
