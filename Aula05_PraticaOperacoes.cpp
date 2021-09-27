#include<stdio.h> //Biblioteca de entrada e sa�da de dados 
#include<locale.h>//Biblioteca de defini��o de localidade

int main() { 
	setlocale(LC_ALL, "Portuguese");
	
	int num1, num2, opcao;
	
	float resultado;
	
	printf("Informe dois n�meros separados por espa�o: ");
	scanf("%d %d",&num1,&num2);
	
	//menu
	printf("\nEscolha uma opera��o\n1 - Soma\n2 - Subtra��o\n3 - Divis�o\n4 - Multiplica��o\n");
	scanf("%d",&opcao);
	
	switch(opcao){
		case 1:
			resultado = num1+num2;
			break;
		case 2:
			resultado = num1-num2;
			break;
		case 3:
			if(num2==0){
				printf("N�o � poss�vel dividir por zero");
				break;
			}
			resultado = (float)num1/(float)num2;
			break;
		case 4:
			resultado = num1*num2;
			break;
		default:
			printf("Op��o inv�lida!");
			break;
	}
	
	printf("O resultado da opera��o escolhida �: %.2f",resultado);
}
