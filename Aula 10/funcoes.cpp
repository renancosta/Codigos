#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<locale.h>

int tamanhoPalavra(char* palavra){
	int i=0;
	while(palavra[i]!='\0'){
		i++;
	}
	return i;	
}


int main() {
	setlocale(LC_ALL, "Portuguese");
	
	char palavra[50];
	
	printf("Informe uma string: ");
	scanf("%s",palavra);
	
	printf("O tamanho da string é: %d %d",strlen(palavra),tamanhoPalavra(palavra));
	
	return 0;
}
