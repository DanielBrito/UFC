#include<stdio.h>
#include<stdlib.h>

// Assinatura da fun��o que recebe tr�s argumentos (dois ponteiros do tipo inteiro e um inteiro):
// Os dois primeiros, far�o refer�ncia � primeira posi��o de mem�ria dos respectivos vetores com os valores a serem somados.
// O terceiro se refere ao tamanho destes vetores, auxiliando na cria��o do vetor resultado, que possuir� o mesmo tamanho.
int* somaVetores(int* vetA, int* vetB, int tamanho);

int main(){
	
	int tamanhoA, tamanhoB, i;

	printf("Digite o tamanho do vetor A: ");
	scanf("%d", &tamanhoA);

	printf("Digite o tamanho do vetor B: ");
	scanf("%d", &tamanhoB);

	if(tamanhoA != tamanhoB){ // Se os tamanhos forem diferentes, terminar de imediato

		printf("\nOs vetores possuem tamanhos diferentes!\n");

		return 1;
	}

	// Alocando mem�ria para os vetores A e B
	int* vetA = (int*)malloc(sizeof(int)*tamanhoA);
	int* vetB = (int*)malloc(sizeof(int)*tamanhoB);

	// Recebendo valores para o vetor A:
	printf("\nVETOR A:\n");

	for(i=0; i<tamanhoA; i++){

		printf("Digite o %do elemento: ", i+1);
		scanf("%d", &vetA[i]);
	}

	// Recebendo valores para o vetor B:
	printf("\nVETOR B:\n");

	for(i=0; i<tamanhoB; i++){

		printf("Digite o %do elemento: ", i+1);
		scanf("%d", &vetB[i]);
	}

	// Ponteiro que far� refer�ncia � primeira posi��o de mem�ria do nosso vetor com o resultado:
	int* resultado;

	// Chamada da fun��o passando os dados convenientes para a opera��o, conforme explicado no in�cio.
	// No retorno da fun��o, poderemos ter acesso � posi��o de mem�ria do primeiro elemento do resultado.
	// Pode ser enviado tanto o tamanhoA quanto o tamanhoB, pois ambos possuem valores iguais.
	resultado = somaVetores(vetA, vetB, tamanhoA);

	// Feito isso, podemos imprimir todos os elementos:
	printf("\nRESULTADO:\n");

	for(i=0; i<tamanhoA; i++){ // O vetor resultado possui tamanho igual ao vetor A e B

		printf("[%d] ", resultado[i]);
	}
	
	return 0;
}

int* somaVetores(int* vetA, int* vetB, int tamanho){ // Implementa��o da fun��o
	
	int i;

	// Alocando mem�ria para o vetor que conter� o resultado:
	int* soma = (int*)malloc(sizeof(int)*tamanho);

	for(i=0; i<tamanho; i++){

		// Somando os respectivos valores do vetor A e B na posi��o i e armazenando no vetor resultado na posi��o i:
		soma[i] = vetA[i] + vetB[i];
	}

	return soma; // Retornando a refer�ncia da primeira posi��o de mem�ria do vetor com o resultado
}
