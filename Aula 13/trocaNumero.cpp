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
	printf("Informe o n�mero 1: ");
	scanf("%d",&num1);
	printf("Informe o n�mero 2: ");
	scanf("%d",&num2);
	
	printf("N�meros informados: %d, %d",num1,num2);
	printf("\nenderecos dos n�meros %d,%d,%d,%d",&num1,&num2,&aux,sizeof(int));
	trocaNumeros(&num1, &num2);
	
	printf("\nN�meros trocados: %d, %d",num1,num2);
}
