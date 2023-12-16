#include <stdio.h>

int main() {
	int icms_percent = 0. 
	int quantity = 0;
	float product_price = 0;
	float final_price;
	
	printf("What's the value of your product: ");
	scanf("%f", &product_price);
	
	final_price = (product_price * quantity) - (product_price * quantity) * icms_percent;

	printf("%2.f", product_price);
	
	return 0;
}

