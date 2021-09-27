#include<stdio.h> //Biblioteca de entrada e saída de dados 
#include<locale.h>//Biblioteca de definição de localidade

/*Faça um programa que leia 10 valores inteiros. A seguir mostre 
quantos valores digitados foram pares, quantos valores digitados 
foram ímpares, quantos valores digitados foram positivos e 
quantos valores digitados foram negativos.
*/
int main() { 
	
	setlocale(LC_ALL, "Portuguese");
	
	int numero, qtdPar = 0, qtdImpar = 0, qtdPositivo = 0, qtdNegativo = 0;

	
	for(int i=1;i<=10;i++){
		//Leitura
		printf("Informe o número %d: ",contador);
		scanf("%d",&numero);
		
		//Verifica números ímpares e pares
		if(numero%2==0){
			qtdPar++;
		}else{
			qtdImpar++;
		}
		
		//Verifica números positivos e negativos
		if(numero>0){
			qtdPositivo++;
		} else if(numero<0){
			qtdNegativo++;
		}
	}
	
	printf("\nA quantidade de números pares é: %d",qtdPar);
	printf("\nA quantidade de números ímpares é: %d",qtdImpar);
	printf("\nA quantidade de números positivos é: %d",qtdPositivo);
	printf("\nA quantidade de números negativos é: %d",qtdNegativo);
}
