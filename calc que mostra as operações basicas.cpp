#include <stdio.h>
#include <locale.h>

int main(void) {
	setlocale(LC_ALL,"Portuguese_Brazil");
	
	float v1,v2,a,b,c,d;
	
	printf("Calculadora que mostra as 4 opera��es\n");
	printf("Digite aqui o primeiro n�mero\n");
	scanf("%f",&v1);
	printf("Digite aqui o segundo n�mero\n");
	scanf("%f",&v2);
	
	a = v1 + v2;
	b = v1 - v2;
	c = v1 * v2;
	d = v1 / v2;
	
	printf("Esse foi o resultado:\nSoma: %.2f\nSubtra��o: %.2f\nMultiplica��o: %.2f\nDivis�o: %.2f",a,b,c,d);
	
	return 0;
}
