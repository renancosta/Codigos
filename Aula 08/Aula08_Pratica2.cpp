Escreva um programa que mostre dois candidatos a elei��o de representante de turma (Escolha os nomes e n�meros que desejarem). Fa�a uma leitura de 15 votos e mostre a quantidade de votos que cada candidato recebeu e quem ganhou a elei��o.

Escreva um programa que leia o nome da pessoa e depois leia o sobrenome (somente 1 sobrenome, sem espa�o) da pessoa (leituras separadas) e imprima o nome e sobrenome juntos.

Desafio: Escreva um jogo de pedra, papel e tesoura. O sistema ter� um menu com as tr�s op��o e mais a op��o sair. Ao escolher uma op��o o computador ir� escolher tamb�m entre pedra, papel e tesoura e o sistema ir� dizer quem venceu e voltar ao menu. Dica: para isso ter� que gerar um n�mero aleat�rio.
#include<stdio.h> //Biblioteca de entrada e sa�da de dados 
#include<locale.h>//Biblioteca de defini��o de localidade

int main() { 
	
	setlocale(LC_ALL, "Portuguese");
