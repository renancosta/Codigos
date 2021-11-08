#include <stdio.h>

typedef struct // Cria uma STRUCT para armazenar os dados de uma pessoa
{
    float Peso;   // define o campo Peso
    int Idade;    // define o campo Idade
    float Altura; // define o campo Altura
} Pessoa; // Define o nome do novo tipo criado

Pessoa CriarPessoa(int idade, float peso, float altura)
{ 
    Pessoa P;
    P.Idade = idade; 
    P.Peso = peso;   
    P.Altura = altura;
    return P; // retorna a struct contendo os dados passados por parâmetro
}

void ImprimePessoa(Pessoa P) // declara o parâmetro como uma struct
{
  printf("\nIdade: %d  Peso: %.2f Altura: %.2f", P.Idade, P.Peso, P.Altura);
}


int main()
{
    Pessoa turma[10];
    int idade;
    float peso, altura;
	
	for(int i=0;i<10;i++){
		printf("Aluno %d\n",i+1);
		printf("Informe os dados na ordem: idade, peso, altura: ");
		scanf("%d %f %f",&idade,&peso,&altura);
		
		turma[i] = CriarPessoa(idade,peso,altura); // atribui o retorno da função a uma variável struct
	}
	
	for(int i=0;i<10;i++){
		ImprimePessoa(turma[i]);
	}
	
    
   return 0;
}
