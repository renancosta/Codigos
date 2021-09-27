#include<stdio.h> //Biblioteca de entrada e saída de dados 
#include<locale.h>//Biblioteca de definição de localidade

int main() { 
	setlocale(LC_ALL, "Portuguese");
	
	int opcao;
	
	printf("Escolha um dia da semana:\n1- Domingo\n2- Segunda\n3- Terça\n4- Quarta\n5- Quinta\n6- Sexta\n7- Sábado\n");	
	scanf("%d",&opcao);
	
	switch(opcao){
		case 1:
		case 7:
			printf("FDS");
			break;
		case 2:
		case 3:
		case 4:
		case 5:
		case 6:
			printf("Dia útil");
			break;
		default:
			printf("Opção inválida");
			break;
	}
}
