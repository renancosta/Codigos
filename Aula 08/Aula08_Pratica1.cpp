/*Escreva um programa que mostre dois candidatos a eleição de representante de turma 
(Escolha os nomes e números que desejarem). Faça uma leitura de 15 votos e 
mostre a quantidade de votos que cada candidato recebeu e quem ganhou a eleição.*/

#include<stdio.h> //Biblioteca de entrada e saída de dados 
#include<locale.h>//Biblioteca de definição de localidade

int main() { 
	
	setlocale(LC_ALL, "Portuguese");
	
	int voto, candX=0, candY=0;
	int i;
	
	printf("Sistema de Eleição\nEleição de represenante de turma");
	printf("\n1 - Candidato X\n2 - Candidato - Y");
	
	for(i=0;i<15;i++){
		printf("\nEscolha um candidato: ");
		scanf("%d",&voto);
		if(voto==1){
			candX++;
		} else if (voto==2){
			candY++;
		} else {
			printf("Voto nulo!");
		}
	}
	
	printf("Candidato X: %d\nCandidato Y: %d\nVotos Nulos: %d\n",candX,candY,(i-candX-candY));
	
	if(candX>candY){
		printf("Candidato X ganhou as eleições");
	} else if (candY>candX){
		printf("Candidato Y ganhou as eleições");
	} else{
		printf("Empate!");
	}
}
