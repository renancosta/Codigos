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
		printf("Seja bem-vindo a loja de bebidas alco�licas\n");
	}
	else {
		printf("Voc� n�o pode acessar o sistema\n");
	}
	
	system("PAUSE");
}
