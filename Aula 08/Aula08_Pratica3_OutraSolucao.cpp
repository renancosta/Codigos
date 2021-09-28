/*Desafio: Escreva um jogo de pedra, papel e tesoura. O sistema 
ter� um menu com as tr�s op��o e mais a op��o sair. 
Ao escolher uma op��o o computador ir� escolher tamb�m entre pedra, papel e tesoura 
e o sistema ir� dizer quem venceu e voltar ao menu. Dica: 
para isso ter� que gerar um n�mero aleat�rio.*/
#include<stdio.h> //Biblioteca de entrada e sa�da de dados 
#include<locale.h>//Biblioteca de defini��o de localidade
#include<stdlib.h>
#include<time.h>

int main() { 
	srand(time(NULL));
	setlocale(LC_ALL, "Portuguese");
	
	int opcao,opcaoSistema;

	do {
		printf("****PEDRA PAPEL TESOURA****");
		printf("\nEscolha uma op��o:\n1 - Pedra\n2 - Papel\n3 - Tesoura\nQualquer caractere - Sair\n");
		scanf("%d",&opcao);
		opcaoSistema = (rand()%3)+1;
		
		printf("Escolha do usu�rio: %d",opcao);
		printf("\nEscolha do computador: %d",opcaoSistema);
		
		if((opcao==1 && opcaoSistema==3) || (opcao==2 && opcaoSistema==1) || (opcao==3 && opcaoSistema==2)){
			printf("\nO jogador ganhou!");
		} else if((opcao==1 && opcaoSistema==2) || (opcao==2 && opcaoSistema==3) || (opcao==3 && opcaoSistema==1)) {
			printf("\nO computador ganhou!");
		} else if((opcao==1 && opcaoSistema==1) || (opcao==2 && opcaoSistema==2) || (opcao==3 && opcaoSistema==3)){
			printf("\nEmpate!");
		} else {
			break;
		}
		system("PAUSE");
		system("cls");
	}while(1);
}
