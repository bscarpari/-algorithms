#include <stdio.h>
 
int main(){
	
   //Declaração de uma variável inteira
   int dado = 313; 
 
   //Declaração de um ponteiro do tipo inteiro
   int *ptr;

   //Atribuição do endereço da variável para o ponteiro
   ptr = &dado;
 
   printf("Utilizando ponteiros\n\n");
   
   //Imprimindo o valor da variável dado
   printf ("Conteudo da variavel dado: %d\n", dado);

   //Imprimindo o endereço da variável dado
   printf ("Endereço da variavel dado: %p \n", &dado);
   
   //Imprimindo o endereço que está armazenado no ponteiro
   printf ("Conteudo da variavel ponteiro ptr: %p\n", ptr);
   
   //Imprimindo o endereço do ponteiro
   printf ("Endereço do ponteiro ptr: %p\n", &ptr);
   
   //Imprimindo o conteúdo do endereço do ponteiro
   printf ("Conteudo da variavel apontada pelo ponteiro ptr: %d\n", *ptr);
 
   return 0;
}