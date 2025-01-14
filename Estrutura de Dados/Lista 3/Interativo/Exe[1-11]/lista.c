#include "lista.h"
#include <stdlib.h>
#include <stdio.h>

struct lista{

	int info;
	struct lista* prox;
};


Lista* cria(){

	return NULL;
}


Lista* insere(Lista* l, int i){

	Lista* novo = (Lista*) malloc(sizeof(Lista));
	novo->info = i;
	novo->prox = l;
	return novo;
}


Lista* insereFinal(Lista* l, int i){

	Lista* ant = NULL;
	Lista* aux = l;

	while(aux!=NULL){

		ant = aux;
		aux = aux->prox;
	}

	Lista* novo = (Lista*) malloc(sizeof(Lista));
	novo->info = i;

	if(ant==NULL){

		novo->prox = l;
		l = novo;
	}
	else{

		novo->prox = ant->prox;
		ant->prox = novo;
	}

	return l;
}


Lista* insereFinalRec(Lista* l, int i){

	Lista* aux = l;

	if(aux==NULL){

		Lista* novo = (Lista*)malloc(sizeof(Lista));

		novo->info = i;
		novo->prox = aux;

		return novo;
	}

	aux->prox = insereFinalRec(aux->prox, i);
}


Lista* retira(Lista* l, int v){

	Lista* ant=NULL;
	Lista* p=l;

	while(p!=NULL && p->info!=v){

		ant = p;
		p = p->prox;
	}

	if(p==NULL){

		return l;
	}

	if(ant==NULL){

		l = p->prox;
	}
	else{

		ant->prox = p->prox;
	}

	free(p);

	return l;
}


void libera(Lista* l){

	Lista* p=l;

	while(p!=NULL){

		Lista* t = p->prox;

		free(p);

		p = t;
	}
}


void imprime(Lista* l){

	Lista* p;

	for(p=l; p!=NULL; p=p->prox){

		printf("%d  ", p->info);
	}
}


void imprimeUmElemento(Lista* l){

	if(l!=NULL){

		printf("%d", l->info);
	}
	else{

		printf("Lista vazia");
	}
}


// QUESTÃO 1:

Lista* buscaMenorElemento(Lista* l){

	Lista* p;
	Lista* menor;

	menor->info = l->info;

	for(p=l; p!=NULL; p=p->prox){

		if(p->info < menor->info){

			menor->info = p->info;
		}
	}

	return menor;
}


// QUESTÃO 2:

Lista* retiraValorMaximo(Lista* l){

	Lista* p;

	int maior = l->info;

	for(p=l; p!=NULL; p=p->prox){

		if(p->info > maior){

			maior = p->info;
		}
	}

	for(p=l; p!=NULL; p=p->prox){

		if(p->info == maior){

			l = retira(l, maior);
		}
	}

	return l;
}


// QUESTÃO 3:

int contaCelulas(Lista* l){

	Lista* p;

	int cont=0;

	for(p=l; p!=NULL; p=p->prox){

		cont++;
	}

	return cont;
}


// QUESTÃO 4:

Lista* concatenaListas(Lista* lA, Lista* lB){

	Lista* p;
	Lista* aux;


	for(p=lA; p!=NULL; p=p->prox){

		aux = p;
	}

	aux->prox = lB;

	return lA;
}


// QUESTÃO 5:

Lista* removeKEsimaCelula(Lista* l, int v){

	Lista* ant=NULL;
	Lista* atual=l;
	int cont=0;

	while(cont<k-1 && atual->p!=NULL){

		ant=atual;
		atual = atual->p;
		cont++;
	}

	if(atual==NULL){
		return l;
	}
	else 
	if(ant==NULL){

		l = l->p;
		free(atual);

		return l;
	}
	else{

		ant->p = atual->p;
		free(atual);
		
		return l;
	}
}


// QUESTÃO 6:

Lista* removeElementoX(Lista* l, int x){

	Lista* p;

	for(p=l; p!=NULL; p=p->prox){

		if(p->info==x){

			l = retira(l, p->info);
		}
	}

	return l;
}


// QUESTÃO 7:

Lista* removeElementosRepetidos(Lista* l){

	Lista* p;
	Lista* q;

	for(p=l; p!=NULL; p=p->prox){

		q = p->prox;

		while(q!=NULL){

			if(p->info == q->info){

				l = retira(l, q->info);
			}

			q = q->prox;
		}
	}

	return l;
}


// QUESTÃO 8:

int contaElemento(Lista* l, int x){

	Lista* p;

	int cont=0;

	for(p=l; p!=NULL; p=p->prox){

		if(p->info==x){

			cont++;
		}
	}

	return cont;
}


int verificaPrimo(int num){
	
	int i, cont=0;
	
	for(i=1; i<=num; i++){
				
		if(num%i == 0){
			
			cont++;
		}
	}
	
	if(num==1){
		
		return 0;
	}
	else
	if(cont<3){
		
		return 1;
	}
	else{
		
		return 0;
	}
}


// QUESTÃO 9:

int contaPrimos(Lista*l){

	Lista *p;

	int cont=0;

	for(p=l; p!=NULL; p=p->prox){

		if(verificaPrimo(p->info)==1){

			cont++;
		}
	}

	return cont;
}


// QUESTÃO 10:

int somaPrimos(Lista* l){

	Lista *p;

	int soma=0;

	for(p=l; p!=NULL; p=p->prox){

		if(verificaPrimo(p->info)==1){

			soma = soma+p->info;
		}
	}

	return soma;
}


// QUESTÃO 11:

Lista* somaListas(Lista* lA, Lista* lB){

	Lista* lC;

	lC = cria();

	Lista* p;
	Lista* q;

	for(p=lA, q=lB; p!=NULL, q!=NULL; p=p->prox, q=q->prox){

		lC = insere(lC, p->info + q->info);
	}

	return lC;
}