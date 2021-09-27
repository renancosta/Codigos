#include <stdio.h>
#include <stdlib.h>
 
int main(void) { 
	int opcao; 
	do { 
		printf("\t\t\nMenu do curso C Progressivo\n"); 
		printf("0. Sair\n"); 
		printf("1. Dar Boas vindas\n"); 
		printf("2. Dar Oi\n"); 
		printf("3. Repetir o menu\n"); 
		printf("4. Ler mais uma vez o menu\n"); 
		printf("Opcao: "); 
		scanf("%d", &opcao); 
		switch( opcao ) { 
			case 0: system("cls || clear"); 
			printf("Saindo do menu...\n"); 
			break; 
		case 1: 
			system("cls || clear"); 
			printf(" Bem-vindo ao menu do portal C Progressivo! \n"); 
			break; 
		case 2: 
			system("cls || clear"); 
			printf(" Oi! \n"); 
			break; 
		case 3: 
		case 4: 
			system("cls || clear"); 
			break; 
		default: system("cls || clear"); 
			printf("Opcao invalida! Tente novamente.\n"); 
		} 
	} 
	while(opcao); 
}

