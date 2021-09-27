#include<stdio.h> //Biblioteca de entrada e saída de dados
#include<locale.h>//Biblioteca de definição de localidade

/*Crie um programa que recebe dois números inteiros e 
imprima a soma, subtração, multiplicação, divisão e 
resto da divisão desses dois números
*/
int main() {
	setlocale(LC_ALL, "Portuguese");
	int num1,num2;
	int soma;
	
	printf("Informe o número 1: ");
	scanf("%d",&num1);
	printf("Informe o número 2: ");
	scanf("%d",&num2);
	
	printf("Numeros informados: %d %d\n",num1,num2);
	
	soma = num1 + num2;
	printf("A soma dos dois números é: %d\n",soma);
	
	printf("A subtração dos dois números é: %d\n",num1-num2);
	
	printf("A multiplicação é: %d\n",num1 * num2);
	
	printf("A divisão é %.2f\n",(float)num1/(float)num2);
	
	printf("Resto da divisão: %d\n",num1%num2);
	
	//num1 = num1 + 1;
	printf("Incremento: %d\n",++num1);
	
	//num1 = num1 - 1;
	printf("Decremento: %d",--num1);
}
