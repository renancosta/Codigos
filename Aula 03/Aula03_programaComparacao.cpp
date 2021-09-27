#include <stdio.h>
#include <locale.h>
 
int main()
{
	setlocale(LC_ALL, "Portuguese");
	int numero1, numero2;
	
	printf("Informe um número: ");
	scanf("%d",&numero1);
	printf("Informe outro número: ");
	scanf("%d",&numero2);
	
	printf("\n\nNúmero 1: %d\nNúmero 2: %d\n",numero1,numero2);
	printf("Num1 maior que num2: %d\n",numero1>numero2);
	printf("Num1 menor que num2: %d\n",numero1<numero2);
	printf("Num1 maior ou igual a num2: %d\n",numero1>=numero2);
	printf("Num1 menor ou igual a num2: %d\n",numero1<=numero2);
	printf("Num1 igual a num2: %d\n",numero1==numero2);
	printf("Num1 diferente de num2: %d\n",numero1!=numero2);
}
