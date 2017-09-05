#include<stdio.h>

int compara(char* str1, char* str2);

int main(){
	
	char string1[20];
	char string2[20];
	
	printf("Digite a string 1: ");
	scanf("%s", string1);
	
	printf("Digite a string 2: ");
	scanf("%s", string2);
	
	printf("\n");
	
	if(compara(string1, string2)){
		
		printf("As strings sao iguais.");
	}
	else{
		
		printf("As strings sao diferentes.");
	}
	
	printf("\n\n");
	
	return 0;
}


int compara(char* str1, char* str2){
	
	int i=0;
	
	while(str1[i]==str2[i] && str1[i]!='\0' && str2!='\0'){
		
		i++;
	}
	
	if(str1[i]=='\0' && str2[i]=='\0'){
		
		return 1;
	}
	else{
		
		return 0;
	}

}
