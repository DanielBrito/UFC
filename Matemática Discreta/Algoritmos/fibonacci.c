#include<stdio.h>
#include<math.h>

/*  Baseado no exerc�cio:
	
	Mostre que o e-n�simo n�mero da sequ�ncia de Fibonacci
	� dado pela f�rmula abaixo:
	
	Fn = (pow(((1+sqrt(5))/2), 2) - pow(((1-sqrt(5))/2), n) / sqrt(5)	
*/

int main(){
	
	int p, Fn;
	
	printf("Digite a posicao do e-nesimo numero da sequencia de Finobacci: ");
	scanf("%d", &p);
	
	printf("\n\n");
	
	Fn = (pow(((1+sqrt(5))/2), p) - pow(((1-sqrt(5))/2), p)) / sqrt(5);
	
	printf("Numero na posicao [%d] -> %d.", p, Fn);
	
	printf("\n\n");
	
	return 0;
}


