#include<stdio.h> //Biblioteca de entrada e sa�da de dados 
#include<locale.h>//Biblioteca de defini��o de localidade

int main() { 
	
	setlocale(LC_ALL, "Portuguese");
	
	float nota[10];
	float maiorNota=0, menorNota=10, soma=0; 
	int cont=0;
	
	printf("Informe seu nome: ");
	scanf("%s",&nome);
	
	while(cont<10){
		printf("Informa a nota %d: ",cont+1);
		scanf("%f",&nota[cont]);
		soma+=nota[cont];
		if(maiorNota<nota[cont]){
			maiorNota = nota[cont];
		}
		if(menorNota>nota[cont]){
			menorNota = nota[cont];
		}
		cont++;
	}
	
	for(int i=0;i<10;i++){
		printf("Nota %d: %f\n",i+1,nota[i]);
	}
	
	printf("\nA menor nota �: %.2f",menorNota);
	printf("\nA maior nota �: %.2f",maiorNota);
	printf("\nA m�dia das notas �: %f\n",soma/10);
	
	return 0;	
}
