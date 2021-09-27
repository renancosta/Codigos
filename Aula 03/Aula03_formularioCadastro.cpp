#include<stdlib.h>
#include<stdio.h>

int main() {
	int idade;
	float peso,altura,imc;
	
	printf("Sistema de cadastro de usuario\n");
	
	printf("Informe sua idade: ");
	scanf("%d",&idade);
	printf("Informe seu peso: ");
	scanf("%f",&peso);
	printf("Informe sua altura: ");
	scanf("%f",&altura);
	
	printf("Informe seus dados na ordem separado por espaço - Idade Peso Altura: ");
	scanf("%d %f %f",&idade,&peso,&altura);
	
	printf("Seus dados sao\nIdade: %d\nPeso: %.2f\nAltura: %.2f",idade,peso,altura);
	imc = peso/(altura*altura);
	printf("\nSeu IMC eh: %.2f",imc);
}
