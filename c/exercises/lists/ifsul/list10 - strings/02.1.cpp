#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
  	char nome[15];
    int i ,j, cont;
      
    printf("Digite uma palavra: ");
    gets(nome);
      
	cont = strlen(nome); //contando o tam do string
	
	// j = número de linhas
	// tamanho total da string digitada
    for(j = 0; j < cont; j++) { 
      // imprime os caracteres 
      for(i = 0; i <= j; i++) {
      	printf("%c", nome[i]);
	  }
	  printf("\n"); 
	}  
     
   return 0;
}
