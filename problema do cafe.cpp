#include <stdio.h>
#include <locale.h>

int main(void) {
	setlocale(LC_ALL,"Portuguese_Brazil");
	
	int c,troco;
		
	printf("Calcucaldora de resto do caf�\n");
	printf("Digite aqui um n�mero que seja multiplo de 5\n");
	scanf("%d",&c);
	
	troco = c % 7;
	
	printf("Esse foi o total de dinheiro que vc perdeu: %d",troco);
	
	return 0;
}
