#include<stdio.h> //Biblioteca de entrada e sa�da de dados
#include<locale.h>//Biblioteca de defini��o de localidade

/*Crie um programa que recebe dois n�meros inteiros e 
imprima a soma, subtra��o, multiplica��o, divis�o e 
resto da divis�o desses dois n�meros
*/
int main() {
	setlocale(LC_ALL, "Portuguese");
	int num1,num2;
	int soma;
	
	printf("Informe o n�mero 1: ");
	scanf("%d",&num1);
	printf("Informe o n�mero 2: ");
	scanf("%d",&num2);
	
	printf("Numeros informados: %d %d\n",num1,num2);
	
	soma = num1 + num2;
	printf("A soma dos dois n�meros �: %d\n",soma);
	
	printf("A subtra��o dos dois n�meros �: %d\n",num1-num2);
	
	printf("A multiplica��o �: %d\n",num1 * num2);
	
	printf("A divis�o � %.2f\n",(float)num1/(float)num2);
	
	printf("Resto da divis�o: %d\n",num1%num2);
	
	//num1 = num1 + 1;
	printf("Incremento: %d\n",++num1);
	
	//num1 = num1 - 1;
	printf("Decremento: %d",--num1);
}
