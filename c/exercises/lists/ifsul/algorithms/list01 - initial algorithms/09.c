#include <stdio.h>

/*

a percentagem do IPI a ser acrescida no valor das pe�as;

o c�digo da pe�a 1, valor unit�rio da pe�a1, quantidade de pe�as 1;
o c�digo da pe�a 2, valor unit�rio da pe�a 2, quantidade de pe�as 2;
O algoritmo deve calcular o valor total a ser pago e apresentar o resultado.

F�rmula: total = ( valor1 *quant1 + valor2 * quant2) * (ipi / 100 + 1)

TODO: revisar esse tal de IPI !!

*/

int main() {
	float total = 0;
	float ipi = 27.5; // aliquota varia entre 0% e 30%. Em 2023 �: 27.5%
	float valor1, quant1, valor2, quant2;

	printf("Informe o valor 01: ");
	scanf("%f", &valor1);
	
	printf("Informe o quantia 01: ");
	scanf("%f", &quant1);
	
	printf("Informe o valor 02: ");
	scanf("%f", &valor2);

	printf("Informe o quantia 02: ");
	scanf("%f", &quant2);

	total = (valor1 * quant1 + valor2 * quant2) * (ipi / 100 + 1);

	printf("%1.f", total);
	
	return 0;
}

