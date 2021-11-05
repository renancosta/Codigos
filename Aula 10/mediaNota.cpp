#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<locale.h>

float mediaAluno(float nota1, float nota2, float nota3, char tipoMedia){
	float media=0;
	if(tipoMedia=='A'){
		media=(nota1+nota2+nota3)/3;
	} else if(tipoMedia=='P'){
		media=(nota1*5+nota2*3+nota3*2)/10;
	} else {
		printf("Tipo media inexistente!");
	}
	return media;
}

int main() {
	setlocale(LC_ALL, "Portuguese");
	
	float notas[3];
	
	printf("Informe as notas do aluno: ");
	scanf("%f %f %f",&notas[0],&notas[1],&notas[2]);
	
	printf("A média é: %f",mediaAluno(notas[0],notas[1],notas[2],'f'));
	
	printf("A média é: %f",mediaAluno(9,5,7,'A'));
	
	
}
