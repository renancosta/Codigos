#include<stdlib.h>
#include<stdio.h>
#include<locale.h>
#include <conio.h>

int main(){

	setlocale(LC_ALL,"Portuguese");
	
	int n1,n2;
	
	int soma , subtracao, multiplicacao , divisao;
	
	printf("Determine o valor do primeiro numero:\n");
	
	scanf("%d",&n1);
	
	printf("Determine o valor do segundo numero:\n");
	
	scanf("%d",&n2);
	
	soma = n1 + n2;
	
	printf("o valor da soma e:%d\n",soma);
	
	subtracao = n1- n2;
	
	printf("o valor da subtracao e:%d\n",subtracao);
	
	multiplicacao = n1 * n2;
}
