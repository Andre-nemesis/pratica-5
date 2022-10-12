#include <stdio.h>
#include <locale.h>

int main(void) {
	setlocale(LC_ALL,"Portuguese_Brazil");
	
	float p,a,imc;
	
	printf("Calculadora de imc\n");
	printf("Digite aqui seu peso em KG\n");
	scanf("%f",&p);
	printf("Digite aqui sua altura em Metros\n");
	scanf("%f",&a);
	
	imc =(float) p / (a * a);
	
	printf("Esse é seu imc: %.2f",imc);
	
	return 0;
}
