#include<stdio.h> //Biblioteca de entrada e saída de dados 
#include<locale.h>//Biblioteca de definição de localidade

int main() { 
	setlocale(LC_ALL, "Portuguese");
	
	int idade,sabor,estacao;
	
	printf("Informe sua idade: ");
	scanf("%d",&idade);
	
	if (idade>=18) {
		printf("Escolha uma preferência de sabor\n1 - Amargo\n2 - Doce\n3 - Azedo\n");
		scanf("%d",&sabor);
		printf("Escolha uma estação\n1 - Primavera\n2 - Verão\n3 - Outono\n4 - Inverno\n");
		scanf("%d",&estacao);
		if(sabor==1){
			if(estacao==3 || estacao==4){
				printf("Double IPA");
			} else if(estacao==1 || estacao==2){
				printf("IPA");
			}
			else {
				printf("Estação inválida!");
			}
		} else if(sabor==2){
			if(estacao==2) {
				printf("Pilsner");
			} else if(estacao==1){
				printf("Sour");
			} else if(estacao==3 || estacao==4){
				printf("Larger");
			}else {
				printf("Estação inválida!");	
			}
		} else if(sabor==3) {
			
		}
		else {
			printf("Sabor incorreto!");
		}
	} else {
		printf("Saindo do programa!");
	}
}
