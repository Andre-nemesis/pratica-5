#include <stdio.h>
#include <locale.h>

int main(void) {
	setlocale(LC_ALL,"Portuguese_Brazil");
	
	float b,h,area;
	
	printf("Calculadora de �rea de tri�ngulo\n");
	printf("Digite aqui um valor para a  base do tri�ngulo\n");
	scanf("%f",&b);
	printf("Digite aqui um valor para a altura do tri�ngulo\n");
	scanf("%f",&h);
	
	area = (b * h) / 2;
	
	printf("Essa foi a �rea do tri�ngulo: %.2f",area);
	
	return 0;
}
