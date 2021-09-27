#include<stdio.h> //Biblioteca de entrada e saída de dados 
#include<locale.h>//Biblioteca de definição de localidade

int main() { 
	
	setlocale(LC_ALL, "Portuguese");
	
	char nome[50];
	
	printf("Informe seu nome: ");
	scanf("%s",nome);
	
	printf("%s",nome);
}
