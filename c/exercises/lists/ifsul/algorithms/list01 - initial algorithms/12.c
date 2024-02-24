#include <stdio.h>

int main() {
	char seller_name[50];
	float comission = 0.05, ICMS = 0.18, ISSQN = 0.05, saleValue, taxes, result;
	int quantity, value;
	
	printf("Qual o seu nome, vendedor(a)? ");
	scanf("%s", &seller_name);
	
	printf("Quantas vendas você fez? ");
	scanf("%i", &quantity);
	
	printf("Qual o valor médio das vendas? ");
	scanf("%i", &value);
	
	taxes = ICMS + ISSQN; // 0.23
	
	saleValue = value * quantity;
	saleValue = saleValue + (saleValue * comission);
	result = saleValue - (saleValue * taxes);
	
	printf("%2.f", result);
	
	return 0;
}

