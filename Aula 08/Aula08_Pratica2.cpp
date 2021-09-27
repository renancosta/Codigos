/*Escreva um programa que leia o nome da pessoa e depois leia o sobrenome 
(somente 1 sobrenome, sem espaço) da pessoa (leituras separadas) e 
imprima o nome e sobrenome juntos.*/
#include<stdio.h> //Biblioteca de entrada e saída de dados 
#include<locale.h>//Biblioteca de definição de localidade

int main() { 
	
	char nome[50],sobrenome[50];
	
	setlocale(LC_ALL, "Portuguese");
	printf("Informe seu nome: ");
	scanf("%s",nome);
	printf("Informe seu último sobrenome: ");
	scanf("%s",sobrenome);
	
	printf("%s %s",nome,sobrenome);
	
}
