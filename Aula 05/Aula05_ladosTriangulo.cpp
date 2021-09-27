#include<stdio.h> //Biblioteca de entrada e saída de dados 
#include<locale.h>//Biblioteca de definição de localidade 

int main() { 
	setlocale(LC_ALL, "Portuguese"); 
	int ladoA, ladoB, ladoC; 
	printf("Informe o lado A do trinagulo: "); 
	scanf("%d",&ladoA); 
	printf("Informe o lado B do trinagulo: "); 
	scanf("%d",&ladoB); 
	printf("Informe o lado aC do trinagulo: "); 
	scanf("%d",&ladoC); 
	printf("Lados do triângulo %d - %d - %d",ladoA,ladoB,ladoC); 
	//&& operador lógico que obriga tudo ser verdade 
	if(ladoA==ladoB && ladoB == ladoC) { 
		printf("\nTriângulo Equilátero"); 
	} 
	else if (ladoA!=ladoB && ladoB != ladoC && ladoA!=ladoC){ 
		printf("\nTriângulo Escaleno"); 
	} 
	else{ 
		printf("\nTriângulo Isósceles"); 
	}
}

