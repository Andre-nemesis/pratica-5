#include <stdio.h>
#include <locale.h>

int main(void) {
	setlocale(LC_ALL,"Portuguese_Brazil");
	
	float a,b,c,F1,F2,F3,F4;
	
	printf("Problema do homeme que calculava\n");
	printf("Digite aqui o primeiro valor\n");
	scanf("%f",&a);
	printf("Digite aqui o segundo valor\n");
	scanf("%f",&b);
	printf("Digite aqui o terceiro valor\n");
	scanf("%f",&c);
	
	F1 =(float) (a * b) / c;
	F2 = (a * a) + b + (5 * c);
	F3 = (a * b * c) + b + ((c/3) * 5) - 1;
	F4 =(float) ((a * b * c) * (a * b * c) * (a * b * c)) / 2;
	
	printf("Esses foram os resultados: \nFormula 1: %.2f\nFormula 2: %.2f\nFormula 3: %.2f\nFormula 4: %.2f",F1,F2,F3,F4);
	
	return 0;
}
