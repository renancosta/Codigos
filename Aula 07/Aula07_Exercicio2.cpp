#include<stdio.h> //Biblioteca de entrada e sa�da de dados 
#include<locale.h>//Biblioteca de defini��o de localidade

/*Fa�a um programa que leia 10 valores inteiros. A seguir mostre 
quantos valores digitados foram pares, quantos valores digitados 
foram �mpares, quantos valores digitados foram positivos e 
quantos valores digitados foram negativos.
*/
int main() { 
	
	setlocale(LC_ALL, "Portuguese");
	
	int numero, qtdPar = 0, qtdImpar = 0, qtdPositivo = 0, qtdNegativo = 0;

	
	for(int i=1;i<=10;i++){
		//Leitura
		printf("Informe o n�mero %d: ",contador);
		scanf("%d",&numero);
		
		//Verifica n�meros �mpares e pares
		if(numero%2==0){
			qtdPar++;
		}else{
			qtdImpar++;
		}
		
		//Verifica n�meros positivos e negativos
		if(numero>0){
			qtdPositivo++;
		} else if(numero<0){
			qtdNegativo++;
		}
	}
	
	printf("\nA quantidade de n�meros pares �: %d",qtdPar);
	printf("\nA quantidade de n�meros �mpares �: %d",qtdImpar);
	printf("\nA quantidade de n�meros positivos �: %d",qtdPositivo);
	printf("\nA quantidade de n�meros negativos �: %d",qtdNegativo);
}
