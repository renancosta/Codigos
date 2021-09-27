/* Este programa ilustra o funcionamento dos operadores relacionais. */
#include <stdio.h>
#include <locale.h> //Biblioteca para implementar a localização de programas
int main()
{
	setlocale(LC_ALL, "Portuguese"); //Necessário para definir caracteres especiais da língua portuguesa
	int i, j;
	printf("\nEntre com dois numeros inteiros: ");
	scanf("%d%d", &i, &j);
	printf("\n%d == %d é %d\n", i, j, i==j);
	printf("\n%d != %d é %d\n", i, j, i!=j);
	printf("\n%d <= %d é %d\n", i, j, i<=j);
	printf("\n%d >= %d é %d\n", i, j, i>=j);
	printf("\n%d < %d é %d\n", i, j, i<j);
	printf("\n%d > %d é %d\n", i, j, i>j);
	return(0);
}
