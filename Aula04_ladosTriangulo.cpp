#include<stdio.h> //Biblioteca de entrada e sa�da de dados
#include<locale.h>//Biblioteca de defini��o de localidade

int main() {
	setlocale(LC_ALL, "Portuguese");
	
	int ladoA, ladoB, ladoC;
	
	printf("Informe o lado A do trinagulo: ");
	scanf("%d",&ladoA);
	printf("Informe o lado B do trinagulo: ");
	scanf("%d",&ladoB);
	printf("Informe o lado C do trinagulo: ");
	scanf("%d",&ladoC);
	
	printf("Lados do tri�ngulo %d - %d - %d",ladoA,ladoB,ladoC);
	
	//&& operador l�gico que obriga tudo ser verdade
	if(ladoA==ladoB && ladoB == ladoC) {
		printf("\nTri�ngulo Equil�tero");
	} else if (ladoA==ladoB || ladoA==ladoC || ladoB==ladoC){
		printf("\nTri�ngulo Is�seles");
	} else {
		printf("\nTri�ngulo Escaleno");
	}
}
