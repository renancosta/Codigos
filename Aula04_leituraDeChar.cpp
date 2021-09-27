#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <conio.h> 

int main()
{
	setlocale(LC_ALL, "Portuguese");
	char c1, c2, c3;
	
	printf("Informe o primeiro caractere: ");
	c1 = getchar();
	printf("\nInforme o segundo caractere: ");
	c2 = getch();
	printf("\nInforme o terceiro caractere: ");
	c3 = getche();
	
	system("PAUSE");
}
