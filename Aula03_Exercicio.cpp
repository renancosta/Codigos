#include <stdio.h>
#include <locale.h>
 
/*
Fazer um programa que leia dois caracteres do teclado com a função scanf 
(leitura separada), mostre os seus códigos ASCII correspondentes, 
some esses dois valores e mostre qual caractere resulta da soma dos 
dois na tabela ASCII.
*/
int main()
{
	setlocale(LC_ALL, "Portuguese");
	char c1, c2;
	int soma;
	
	printf("Informe o primeiro caractere: ");
	scanf("%c",&c1);
	printf("Informe o segundo caractere: ");
	scanf(" %c",&c2);
	
	printf("Códigos em ASCII\nCaractere 1: %d\nCaractere 2: %d",c1,c2);
	
	soma = c1+c2;
	
	printf("\nASCII da soma: %c",soma);
}
