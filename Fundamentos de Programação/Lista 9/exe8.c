#include<stdio.h>
#include<stdlib.h>
#include<string.h>

/*
	8) Fa�a um programa que receba uma string e converta toda a string para
	letras min�sculas usando a fun��o strlwr().
*/

int main(){
	
	char string[40];
	
	printf("Digite uma frase: ");
	scanf(" %[^\n]", string);
	
	printf("\n\n");
	
	strcpy(string, strlwr(string));
	
	printf("%s", string);
	
	printf("\n\n");
	
	return 0;
}
