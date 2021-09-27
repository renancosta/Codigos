#include <stdio.h>
#include <stdlib.h>
#include <locale.h> 

int main()
{
	setlocale(LC_ALL, "Portuguese");
	int idade;
	
	printf("Informe sua idade: ");
	scanf("%d",&idade);
	
	if(idade>=18) {
		printf("Seja bem-vindo a loja de bebidas alcoólicas\n");
	}
	else {
		printf("Você não pode acessar o sistema\n");
	}
	
	system("PAUSE");
}
