#include<stdio.h> //Biblioteca de entrada e saída de dados
#include<locale.h>//Biblioteca de definição de localidade

int main() {
	setlocale(LC_ALL, "Portuguese");
	
	int idade;
	
	printf("Informe sua idade: ");
	scanf("%d",&idade);
	
	if(idade>=18){
		printf("Bem-vindo");	
	}
	else{
		printf("Proibido para menores de 18 anos");
	}
	
	printf("OK!");
}
