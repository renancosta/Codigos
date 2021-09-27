#include<stdlib.h>
#include<stdio.h>

int main() {
	int num1 = 6;
	float num2 = 3.1415;
	
	//Definindo tamanho do número
	printf ("Valor: %6d!\n", num1);
	printf("Valor: %-6d!\n", num1);
	
	//Definindo casas depois da vírgula
	printf("Valor: %4.2f!\n", num2);
	
	//Impressão de zeros a esquerda
	printf ("Valor: %06d!\n", num1);
	system("PAUSE");
}
