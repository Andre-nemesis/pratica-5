#include <stdio.h>
#include <locale.h>

int main(void) {
	setlocale(LC_ALL,"Portuguese_Brazil");
	
	float b,h,area;
	
	printf("Calculadora de área de triângulo\n");
	printf("Digite aqui um valor para a  base do triângulo\n");
	scanf("%f",&b);
	printf("Digite aqui um valor para a altura do triângulo\n");
	scanf("%f",&h);
	
	area = (b * h) / 2;
	
	printf("Essa foi a área do triângulo: %.2f",area);
	
	return 0;
}
