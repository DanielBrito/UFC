#include<stdio.h>
#include<stdlib.h>
#include<string.h>

/*
	2) Fa�a um programa que mostre o tamanho de uma string usando a 
	fun��o strlen()
*/

int main(){
	
	char string[10] = "Hackerman";
	int tamanho = strlen(string);
	
	printf("A string '%s' tem %d caracteres", string, tamanho);
	
	printf("\n\n");
	
	return 0;
}
