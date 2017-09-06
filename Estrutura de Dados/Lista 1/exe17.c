#include<stdio.h>
#include<stdlib.h>

float** matrizTransposta(float** mat, float** matTransposta, int tam);

int main(){
	
	int i, j;
	float** matriz;
	int tam;
	float** transposta;
	
	printf("Digite a dimensao da matriz [N]x[N]: ");
	scanf("%d", &tam);
	
	// Aloca��o de mem�ria para "matriz":
	
	matriz = (float**)malloc(tam*sizeof(float*));
	
	for(i=0; i<tam; i++){
		
		matriz[i] = (float*)malloc(tam*sizeof(float));
	}
	
	// Aloca��o de mem�ria para "transposta":
	
	transposta = (float**)malloc(tam*sizeof(float*));
	
	for(i=0; i<tam; i++){
		
		transposta[i] = (float*)malloc(tam*sizeof(float));
	}
	
	printf("\n");	
	
	for(i=0; i<tam; i++){
		
		for(j=0; j<tam; j++){
			
			printf("Digite o elemento [%d][%d]: ", i, j);
			scanf("%f", &matriz[i][j]);
		}
	}
	
	printf("\n");
	
	printf("MATRIZ DIGITADA\n");
	
	for(i=0; i<tam; i++){
		
		for(j=0; j<tam; j++){
			
			printf("%.0f ", matriz[i][j]);
		}
		
		printf("\n");
	}
	
	matrizTransposta(matriz, transposta, tam);
	
	printf("\n\n");
	
	printf("MATRIZ TRANSPOSTA\n");
	
	for(i=0; i<tam; i++){
		
		for(j=0; j<tam; j++){
			
			printf("%.0f ", transposta[i][j]);
		}
		
		printf("\n");
	}
	
	printf("\n\n");
	
	
	// Libera��o do espa�o de mem�ria
	
	for(i=0; i<tam; i++)
		
		free(matriz[i]);
		
	free(matriz);
	
	
	for(i=0; i<tam; i++)
		
		free(transposta[i]);
		
	free(transposta);
	
	return 0;
}


float** matrizTransposta(float** mat, float** matTransposta, int tam){
	
	int i, j;
	
	for(i=0; i<tam; i++){
		
		for(j=0; j<tam; j++){
			
			matTransposta[j][i] = mat[i][j];
		}
	}
}
