#include<stdio.h> //Biblioteca de entrada e sa�da de dados 
#include<locale.h>//Biblioteca de defini��o de localidade

int main() { 
	
	setlocale(LC_ALL, "Portuguese");
	
	int soma=0;
	
	for(int i=2;i<=100;i+=2){
		soma+=i;	
	}
	
	printf("Soma de n�meros pares de 2 a 100: %d",soma);
	
}
