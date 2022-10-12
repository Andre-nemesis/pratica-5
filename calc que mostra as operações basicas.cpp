#include <stdio.h>
#include <locale.h>

int main(void) {
	setlocale(LC_ALL,"Portuguese_Brazil");
	
	float v1,v2,a,b,c,d;
	
	printf("Calculadora que mostra as 4 operações\n");
	printf("Digite aqui o primeiro número\n");
	scanf("%f",&v1);
	printf("Digite aqui o segundo número\n");
	scanf("%f",&v2);
	
	a = v1 + v2;
	b = v1 - v2;
	c = v1 * v2;
	d = v1 / v2;
	
	printf("Esse foi o resultado:\nSoma: %.2f\nSubtração: %.2f\nMultiplicação: %.2f\nDivisão: %.2f",a,b,c,d);
	
	return 0;
}
