#include <stdio.h>
#include <locale.h>

int main (void) {
	setlocacle(LC_ALL,"Portuguese_Brazil");
	int m,calc;
	
	printf("Calculadora que tranforma minutos em segundos\n");
	printf("Digite aqui o n�mero:\n");
	scanf("%d",&m);
	
	calc = m * 60;
	
	printf("Essa � a quantidade de segundos: %d",calc);
	
	return 0;
}
