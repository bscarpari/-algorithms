#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
	char name[15], i, length;
   
	printf("Digite um nome: ");
	gets(name);
   
	length = strlen(name); // length
   
	for (i = 0;i <= length; i++) {
   	  printf("%c", name[i]);
    }
    
    printf("\n\n");
    
    for (i = length;i >= 0; i--) {
	  printf("%c", name[i]);   	
    }

 	return 0;
}
