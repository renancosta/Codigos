#include<stdio.h> //Biblioteca de entrada e saída de dados 
#include<locale.h>//Biblioteca de definição de localidade

int main() { 
	setlocale(LC_ALL, "Portuguese");
	
	int num1, num2, opcao;
	
	float resultado;
	
	printf("Informe dois números separados por espaço: ");
	scanf("%d %d",&num1,&num2);
	
	//menu
	printf("\nEscolha uma operação\n1 - Soma\n2 - Subtração\n3 - Divisão\n4 - Multiplicação\n");
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
				printf("Não é possível dividir por zero");
				break;
			}
			resultado = (float)num1/(float)num2;
			break;
		case 4:
			resultado = num1*num2;
			break;
		default:
			printf("Opção inválida!");
			break;
	}
	
	printf("O resultado da operação escolhida é: %.2f",resultado);
}
