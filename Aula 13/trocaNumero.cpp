#include <stdio.h>

void trocaNumeros(int *n1, int *n2){
	int aux;
	aux=*n1;
	*n1=*n2;
	*n2=aux;
	printf("\n%d %d",n1,n2);
}

int main()
{
	int num1, num2, aux;
	printf("Informe o número 1: ");
	scanf("%d",&num1);
	printf("Informe o número 2: ");
	scanf("%d",&num2);
	
	printf("Números informados: %d, %d",num1,num2);
	printf("\nenderecos dos números %d,%d,%d,%d",&num1,&num2,&aux,sizeof(int));
	trocaNumeros(&num1, &num2);
	
	printf("\nNúmeros trocados: %d, %d",num1,num2);
}
