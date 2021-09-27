#include<stdio.h> //Biblioteca de entrada e saída de dados 
#include<locale.h>//Biblioteca de definição de localidade

int main() { 
	
	setlocale(LC_ALL, "Portuguese");
	
	float nota;
	float maiorNota=0, menorNota=10, soma=0; 
	
	for(int i=1;i<=100;i++){
		printf("Informa a nota %d: ",i);
		scanf("%f",&nota);
		soma+=nota;
		if(maiorNota<nota){
			maiorNota = nota;
		}
		if(menorNota>nota){
			menorNota = nota;
		}
	}
	
	printf("\nA menor nota é: %.2f",menorNota);
	printf("\nA maior nota é: %.2f",maiorNota);
	printf("\nA média das notas é: %f\n",soma/100);
	
	return 0;	
}
