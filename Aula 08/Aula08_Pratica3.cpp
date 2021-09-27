Escreva um programa que mostre dois candidatos a eleição de representante de turma (Escolha os nomes e números que desejarem). Faça uma leitura de 15 votos e mostre a quantidade de votos que cada candidato recebeu e quem ganhou a eleição.

Escreva um programa que leia o nome da pessoa e depois leia o sobrenome (somente 1 sobrenome, sem espaço) da pessoa (leituras separadas) e imprima o nome e sobrenome juntos.

Desafio: Escreva um jogo de pedra, papel e tesoura. O sistema terá um menu com as três opção e mais a opção sair. Ao escolher uma opção o computador irá escolher também entre pedra, papel e tesoura e o sistema irá dizer quem venceu e voltar ao menu. Dica: para isso terá que gerar um número aleatório.
#include<stdio.h> //Biblioteca de entrada e saída de dados 
#include<locale.h>//Biblioteca de definição de localidade

int main() { 
	
	setlocale(LC_ALL, "Portuguese");
