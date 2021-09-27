/*Desafio: Escreva um jogo de pedra, papel e tesoura. O sistema 
terá um menu com as três opção e mais a opção sair. 
Ao escolher uma opção o computador irá escolher também entre pedra, papel e tesoura 
e o sistema irá dizer quem venceu e voltar ao menu. Dica: 
para isso terá que gerar um número aleatório.*/
#include<stdio.h> //Biblioteca de entrada e saída de dados 
#include<locale.h>//Biblioteca de definição de localidade
#include<stdlib.h>
#include<time.h>

int main() { 
	srand(time(NULL));
	setlocale(LC_ALL, "Portuguese");
	
	int opcao,opcaoSistema;

	do {
		printf("****PEDRA PAPEL TESOURA****");
		printf("\nEscolha uma opção:\n1 - Pedra\n2 - Papel\n3 - Tesoura\nQualquer caractere - Sair\n");
		scanf("%d",&opcao);
		opcaoSistema = (rand()%3)+1;
		
		printf("Escolha do usuário: %d",opcao);
		printf("\nEscolha do computador: %d",opcaoSistema);
		
		if(opcao==1){
			if(opcaoSistema==1){
				printf("\nEmpate!");
			} else if(opcaoSistema==2){
				printf("\nO computador ganhou!");
			} else {
				printf("\nO jogador ganhou!");
			}
		} else if(opcao==2) {
			if(opcaoSistema==1){
				printf("\nO jogador ganhou!");
			} else if(opcaoSistema==2){	
				printf("\nEmpate!");
			} else {
				printf("\nO computador ganhou!");
			}
		} else if(opcao==3){
			if(opcaoSistema==1){
				printf("\nO computador ganhou!");
			} else if(opcaoSistema==2){
				printf("\nO jogador ganhou!");
			} else {
				printf("\nEmpate!");
			}
		} else {
			break;
		}
		system("PAUSE");
		system("cls");
	}while(1);
}
