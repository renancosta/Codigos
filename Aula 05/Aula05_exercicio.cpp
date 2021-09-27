#include<stdio.h>
#include<locale.h>
/*A nova lei da cadeirinha atualizada em abril de 2021 institui o seguinte:
Beb� conforto:�indicado para crian�as de at� um ano de idade e at� 13 kg;
Cadeirinha:�utilizada para crian�as de 1 a 4 anos de idade, que tenham entre 9 e 18 kg;
Assento de eleva��o:�indicado para crian�as de 4 a 7 anos e meio de idade que 
n�o tenham atingido 1,45 m de altura, com peso entre 15 e 36 kg;
Banco traseiro com cinto de seguran�a:�crian�as com mais de sete anos e meio de idade 
at� 10 anos que ainda n�o tenham atingido 1,45 m de altura.
Com base nessas regras crie um programa que ir� receber os dados da pessoa 
necess�rios para realizar a classifica��o. Ap�s receber os dados o programa 
ir� indicar a forma adequada conforme informa��es acima. Caso a pessoa n�o 
se encaixe em nenhuma das descri��es o programa informa que ela pode ocupar 
qualquer assento.
*/

int main() { 
	setlocale(LC_ALL, "Portuguese");
	float idade, peso, altura;
	
	printf("Introduza o valores de idade,peso e altura separando por espa�o: ");
	scanf("%f %f %f",&idade,&peso,&altura);
	
	printf("Idade: %f\nPeso: %f\nAltura: %f",idade,peso,altura);
	
	//lei da cadeirinha
	if(idade<1 && peso<13) {
		printf("\nBeb� conforto");
	} else if (idade>1 && idade<4 && peso>9 && peso<18){
		printf("\nCadeirinha");
	} else if (idade>4 && idade<7.5 && altura<1.45 && peso>15 && peso<36){
		printf("\nAssento de eleva��o");
	} else if (idade>7.5 && idade<10 && altura<1.45){
		printf("\nBanco traseiro com cinto de seguran�a");
	} else {
		printf("\nPode ocupar qualquer assento");
	}
	
	
}
