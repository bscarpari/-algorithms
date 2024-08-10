#include <stdio.h>
#include <stdlib.h>

/*
	int value (valor do respectivo nodo). defaultValue: NULL
	node *prox (endereco na memoria do proximo nodo). defaultValue: NULL
*/
struct node {
    int value;
    struct node *prox;
};

/* 
  Estrutura de uma lista é "n" nós compostos
  por valor e endereço.
*/
struct list {
    struct node *first;
};

/* 
	1. Inicialização da lista
	- a) Acessar o endereço na memória (RAM) da lista. Porque? Pode ser pesquisada e manipulada uma vez que foi criada na memória RAM.
	- b) Pegar o primeiro nodo
	- c) Atribuir `NULL` para o mesmo
*/
void init(struct list *list) { 
	list->first = NULL;
}

/* 
	2. INSERT de valores na lista

	Parâmetros:
	- struct node *previous: Ponteiro para o nó anterior ao ponto de inserção.
	- struct list *desc: Ponteiro para a estrutura da lista (ou "descritor" da lista).
	- int value: Valor a ser inserido no novo nó.

	- a) Crio um novo nó
	- b) Informo o valor do nó
	- c) Verifico se:
		 Se já existe um nó anterior ao ponto de inserção, então new_node->prox é definido como previous->prox
		 Se não, então o próximo nó new_node->prox é definido como o primeiro nó da lista (desc->first).
    
*/
void insert(struct node *previous, struct list *desc, int value) {
    struct node *new_node = (struct node *)malloc(sizeof(struct node));
    
	new_node->value = value;
	new_node->prox = previous ? previous->prox : desc->first; 

	if (previous) previous->prox = new_node;
	else desc->first = new_node;
}

void removeLast(struct node *previous, struct list *desc) {
    struct node *temp = previous ? previous->prox : desc->first;
    
    if (temp) {
        if (previous) previous->prox = temp->prox;
        else desc->first = temp->prox;
        free(temp);
    } else {
    	printf("Nao ha nodo para ser removido!\n");	
	}
}

void removeInIndex(struct list *desc, int index) {
	// 1. Verifico se a lista esta vazia
	if(desc->first == NULL) {
		printf("\nA lista esta vazia");
		return;
	}
	
	struct node *temp = desc->first;
	struct node *previous = NULL; // todo no anterior, por padrao, e NULO
		
	// 2. Se indice igual a zero, ja sei que devo remover o primeiro
	if(index == 0) {
		desc->first = temp->prox;
		free(temp);
		return;
	}
	
	/* 3. Caso nao caia nas condicoes simples e logicas
	 	entao navegue por todo os nos, de maneira a achar o indice que seja igual ao indice informado
	 	se bater os dados, entao:
	 	
	 	a) Removo este no
	 	b) Rearranjo a lista de maneira a organiza-la
	 	
	    Ex.: 0, 1 e 2. 0 aponta para null, 1 aponta para 0, 2 aponta para 1. Se eu remover o 1, 
	    preciso reajeitar a lista.
	    
	    Observacao:
	    
	    temp != NULL (enquanto o no atual nao for nulo)
	    && i < index (e o indice nao chegou ao fim, entao incremente
	    
	    Toda a logica se baseia em iniciar do comeco, porque ja se sabe como
	    a lista simplesmente encadeada comeca:
	    - temp = 10 (primeiro no com valor qualquer)
		- previous = NULL (no anterior sempre comeca NULO)
	*/

	for(int i = 0; temp != NULL && i < index; i++) {
		previous = temp; // sempre comeco pelo inicio 
		temp = temp->prox;
	}
	
	if(temp == NULL) {
		printf("\nIndice passou do limite original");
		return;
	}
	
	// 4. Limpo na memoria aquele que foi removido
	previous->prox = temp->prox;
	free(temp);	
}

void print_list(struct list *desc) {
	// currentNodo = desc-first; 
    for (struct node *curr = desc->first; curr; curr = curr->prox)
        printf("%d -> ", curr->value);

    printf("NULL\n");
}

int main() {
    struct list my_list;
    init(&my_list); // toda LinkedList comeca com nodo 0 = NULL.
    int choice, value;

    while (1) {
        printf("\nMenu:\n1. Inserir\n2. Remover ultimo\n3. Remover por indice\n4. Listar\n5. Sair\nEscolha uma opcao: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Insira um valor: ");
                scanf("%d", &value);
                insert(NULL, &my_list, value);
                break;

            case 2:
                removeLast(NULL, &my_list);
                break;
                
            case 3:
            	int index;
            	
				printf("\nInforme o indice: ");
            	scanf("%i", &index);
				removeInIndex(&my_list, index);
            	
				break;
            	
            case 4:
                print_list(&my_list);
                break;

            case 5:
                return 0;

            default:
                printf("Opcao invalida!\n");
                break;
        }
    }
}

