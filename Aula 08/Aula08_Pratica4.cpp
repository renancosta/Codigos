#include<stdio.h> //Biblioteca de entrada e sa�da de dados 
#include<locale.h>//Biblioteca de defini��o de localidade
#include<string.h>

int main() { 
	setlocale(LC_ALL, "Portuguese");
	
	char nome[50],nomeUp[50];
	
	printf("Informe seu nome: ");
	scanf("%s",nome);
	
	for(int i=0;i<strlen(nome);i++){
		nomeUp[i]=nome[i]-32;
	}
	
	printf("%s",nomeUp);
}
