#include <stdio.h>
#include <stdlib.h>
#include <locale.h> 

int main()
{
	setlocale(LC_ALL, "Portuguese");
	int num1, num2;
	
	printf("Informe o primeiro n�mero: ");
	scanf("%d",&num1);
	printf("\nInforme o segundo n�mero: ");
	scanf("%d",&num2);
	
	printf("Soma: %d + %d = %d\n",num1,num2,num1+num2);
	printf("Subtra��o: %d - %d = %d\n",num1,num2,num1-num2);
	printf("Divis�o: %d / %d = %f\n",num1,num2,(float) num1 / (float) num2);
	printf("Resto da Divis�o: %d %% %d = %d\n",num1,num2,num1%num2);
	printf("Multiplica��o: %d * %d = %d\n",num1,num2,num1*num2);
	
	printf("Num1: %d",num1);
	printf("\nNum1 Incremento: %d",++num1);
	printf("\nNum2: %d",num1);
	printf("\nNum2 Decremento: %d",--num1);
	
	system("PAUSE");
}
