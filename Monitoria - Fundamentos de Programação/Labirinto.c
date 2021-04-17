#include<stdio.h>
#include<stdlib.h>
#include<conio.h> // Cont�m a fun��o getch()

// Constante que delimita a dimens�o de um labirinto quadrado (DIMENSAO x DIMENSAO)
#define DIMENSAO 20

// Renomeando as teclas de movimento para tornar o c�digo mais leg�vel
#define SUBIR 'w'
#define DESCER 's'
#define ESQUERDA 'a'
#define DIREITA 'd'

// Assinatura das fun��es auxiliares que ser�o utilizadas no fluxo b�sico do jogo
void inicializarLabirinto();
void imprimirLabirinto();
void movimentarJogador(char movimento);

// Vari�vel global que ser� vista em todo o escopo do c�digo, n�o sendo necess�rio manipular ponteiros
char labirinto[DIMENSAO][DIMENSAO];

// Vari�veis para posicionar o jogador na matriz
int posicaoJogadorLinha, posicaoJogadorColuna;

int main(){
	
	// Chamada de fun��o para definir os limites do labirinto
	inicializarLabirinto();

    // Define as coordenadas da posi��o inicial do jogador
    posicaoJogadorLinha=1;
    posicaoJogadorColuna=1;
	
	// Posiciona o jogador (asterisco) no labirinto
	labirinto[posicaoJogadorLinha][posicaoJogadorColuna]='*';
	
    // Vari�vel para armazenar os movimentos (a = esquerda | s = descer | d = direita | w = subir)
	char movimento;

	do{ // Executar o corpo do la�o...
		
		//system("clear"); // Limpar a tela no Linux
        system("cls"); // Limpar a tela no Windows
		
		imprimirLabirinto(); // Antes de cada jogada, exibir a situa��o atual do labirinto
		
        // Digitar o movimento a ser realizado e depois teclar ENTER:
        // printf("\nDigite o movimento: ");
		// scanf("%c", &movimento);
        
        // L� um carectere do teclado, mas n�o mostra na tela:
		printf("\nDigite o movimento: ");
		movimento = getch(); 
		
		movimentarJogador(movimento); // Chamada de fun��o passando o movimento recebido por par�metro
		
	}while(movimento!='x'); // ... Enquanto 'x' n�o for pressionado
	
	printf("\nAte a proxima!\n\n");
	
	return 0; // Mensagem para o compilador de que o programa executou corretamente
}

// Fun��o para delimitar os limites externos do labirinto
void inicializarLabirinto(){
	
	int i, j;
	
	for(i=0; i<DIMENSAO; i++){
		
		for(j=0; j<DIMENSAO; j++){
			
			if(i==0 || j==0 || i==DIMENSAO-1 || j==DIMENSAO-1){ // �ndices (i, j) que definem os limites do labirinto, ou seja, suas bordas
				
				labirinto[i][j] = '#';
			}
            else{
                
                labirinto[i][j] = ' '; // �ndices (i, j) que definem as posi��es internas do labirinto, ou seja, onde o jogador ir� se movimentar
            }
		}
	}
}

// Fun��o para imprimir a situ��o do labirinto
void imprimirLabirinto(){
	
	int i, j;
	
	for(i=0; i<DIMENSAO; i++){
        
        printf("\t"); // Tabula��o para centralizar o labirinto na tela
		
		for(j=0; j<DIMENSAO; j++){
			
			printf("%c", labirinto[i][j]);
		}
		
		printf("\n");
	}
}

// Fun��o para realizar o movimento do jogador no labirinto
void movimentarJogador(char movimento){

    // Se a tecla digitada n�o cair em nenhuma das condi��es abaixo o jogador n�o se movimentar�
    // Se a tecla digitada realizar um movimento inv�lido ("entrar na parede") o jogador n�o se movimentar�
	
	if(movimento==SUBIR){ // w
		
		if(posicaoJogadorLinha!=1){ // Pois na posi��o acima da linha 1 (ou seja, na linha 0) haver� uma parede
			
			labirinto[posicaoJogadorLinha][posicaoJogadorColuna]=' '; // Coloca um espa�o vazio na posi��o atual
			labirinto[--posicaoJogadorLinha][posicaoJogadorColuna]='*'; // Move o jogador para a nova posi��o decrementando a linha
		}
	}
	
	if(movimento==DESCER){ // s
		
		if(posicaoJogadorLinha!=DIMENSAO-2){ // Pois na posi��o abaixo da linha DIMENSAO-2 (ou seja, na linha DIMENSAO-1) haver� uma parede
			
			labirinto[posicaoJogadorLinha][posicaoJogadorColuna]=' '; // Coloca um espa�o vazio na posi��o atual
			labirinto[++posicaoJogadorLinha][posicaoJogadorColuna]='*'; // Move o jogador para a nova posi��o incrementando a linha
		}
	}
	
	if(movimento==ESQUERDA){ // a
		
		if(posicaoJogadorColuna!=1){ // Pois na posi��o � esquerda da coluna 1 (ou seja, na coluna 0) haver� uma parede
			
			labirinto[posicaoJogadorLinha][posicaoJogadorColuna]=' '; // Coloca um espa�o vazio na posi��o atual
			labirinto[posicaoJogadorLinha][--posicaoJogadorColuna]='*'; // Move o jogador para a nova posi��o decrementando a coluna
		}
	}
	
	if(movimento==DIREITA){ // d
		
		if(posicaoJogadorColuna!=DIMENSAO-2){ // Pois na posi��o � direita da coluna DIMENSAO-2 (ou seja, na coluna DIMENSAO-1) haver� uma parede
			
			labirinto[posicaoJogadorLinha][posicaoJogadorColuna]=' '; // Coloca um espa�o vazio na posi��o atual
			labirinto[posicaoJogadorLinha][++posicaoJogadorColuna]='*'; // Move o jogador para a nova posi��o incrementando a coluna
		}
	}
}
