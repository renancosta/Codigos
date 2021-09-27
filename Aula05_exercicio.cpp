#include<stdio.h>
#include<locale.h>
/*A nova lei da cadeirinha atualizada em abril de 2021 institui o seguinte:
Bebê conforto: indicado para crianças de até um ano de idade e até 13 kg;
Cadeirinha: utilizada para crianças de 1 a 4 anos de idade, que tenham entre 9 e 18 kg;
Assento de elevação: indicado para crianças de 4 a 7 anos e meio de idade que 
não tenham atingido 1,45 m de altura, com peso entre 15 e 36 kg;
Banco traseiro com cinto de segurança: crianças com mais de sete anos e meio de idade 
até 10 anos que ainda não tenham atingido 1,45 m de altura.
Com base nessas regras crie um programa que irá receber os dados da pessoa 
necessários para realizar a classificação. Após receber os dados o programa 
irá indicar a forma adequada conforme informações acima. Caso a pessoa não 
se encaixe em nenhuma das descrições o programa informa que ela pode ocupar 
qualquer assento.
*/

int main() { 
	setlocale(LC_ALL, "Portuguese");
	float idade, peso, altura;
	
	printf("Introduza o valores de idade,peso e altura separando por espaço: ");
	scanf("%f %f %f",&idade,&peso,&altura);
	
	printf("Idade: %f\nPeso: %f\nAltura: %f",idade,peso,altura);
	
	//lei da cadeirinha
	if(idade<1 && peso<13) {
		printf("\nBebê conforto");
	} else if (idade>1 && idade<4 && peso>9 && peso<18){
		printf("\nCadeirinha");
	} else if (idade>4 && idade<7.5 && altura<1.45 && peso>15 && peso<36){
		printf("\nAssento de elevação");
	} else if (idade>7.5 && idade<10 && altura<1.45){
		printf("\nBanco traseiro com cinto de segurança");
	} else {
		printf("\nPode ocupar qualquer assento");
	}
	
	
}
