/* Este programa ilustra o funcionamento dos operadores relacionais. */
#include <stdio.h>
#include <locale.h> //Biblioteca para implementar a localiza��o de programas
int main()
{
	setlocale(LC_ALL, "Portuguese"); //Necess�rio para definir caracteres especiais da l�ngua portuguesa
	int i, j;
	printf("\nEntre com dois numeros inteiros: ");
	scanf("%d%d", &i, &j);
	printf("\n%d == %d � %d\n", i, j, i==j);
	printf("\n%d != %d � %d\n", i, j, i!=j);
	printf("\n%d <= %d � %d\n", i, j, i<=j);
	printf("\n%d >= %d � %d\n", i, j, i>=j);
	printf("\n%d < %d � %d\n", i, j, i<j);
	printf("\n%d > %d � %d\n", i, j, i>j);
	return(0);
}
