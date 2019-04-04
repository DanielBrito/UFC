#include<stdio.h>

int main(){
	
	int P, Q, R; // Como existem 3 �tomos, temos 2^3 poss�veis combina��es de valores poss�veis, ou seja, 8 linhas
	
	printf("P  Q  R  (P && R)  (Q || R)  (P && R) || (Q || R)\n\n"); // Cabe�alho da tabela com as proposi��es l�gicas
	
	// Verificando o valor l�gico de cada uma das combina��es poss�veis:
	
	P=1; Q=1; R=1;
	printf("%d  %d  %d     %d         %d               %d\n", P, Q, R, P&&R, Q||R, (P&&Q)||(Q||R));
	
	P=1; Q=1; R=0;
	printf("%d  %d  %d     %d         %d               %d\n", P, Q, R, P&&R, Q||R, (P&&Q)||(Q||R));
	
	P=1; Q=0; R=1;
	printf("%d  %d  %d     %d         %d               %d\n", P, Q, R, P&&R, Q||R, (P&&Q)||(Q||R));
	
	P=1; Q=0; R=0;
	printf("%d  %d  %d     %d         %d               %d\n", P, Q, R, P&&R, Q||R, (P&&Q)||(Q||R));
	
	P=0; Q=1; R=1;
	printf("%d  %d  %d     %d         %d               %d\n", P, Q, R, P&&R, Q||R, (P&&Q)||(Q||R));
	
	P=0; Q=1; R=0;
	printf("%d  %d  %d     %d         %d               %d\n", P, Q, R, P&&R, Q||R, (P&&Q)||(Q||R));
	
	P=0; Q=0; R=1;
	printf("%d  %d  %d     %d         %d               %d\n", P, Q, R, P&&R, Q||R, (P&&Q)||(Q||R));
	
	P=0; Q=0; R=0;
	printf("%d  %d  %d     %d         %d               %d\n", P, Q, R, P&&R, Q||R, (P&&Q)||(Q||R));
	
	return 0;
}
