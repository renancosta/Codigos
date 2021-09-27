#include<stdlib.h>
#include<stdio.h>

int main() {
	int idadeRenan, idadeGiovanni, _tamanhoPe;
	char primeiraLetraNome = 'R';
	float altura, pesoPessoa;
	
	idadeRenan = 30;
	idadeGiovanni = 20;
	_tamanhoPe = 39;
	pesoPessoa = 74.1;
	altura = 2;
	altura = 1.79; //Substituindo valor da variável altura
	
	printf("Minha altura eh: %fm", altura);
	printf("\nMinha idade eh: %d\nIdade Giovanni: %d %c", idadeRenan, idadeGiovanni,163);
	
	printf("\n\nMinhas informacoes pessoais\nTamanho Calcado: %d\nPeso: %fKg", _tamanhoPe, pesoPessoa);
	
	//Juntando todos os printfs em um só, nesse caso ruim devido a uma linha ficar muito grande e atrapalhar a visualização
	printf("\n\n\nMinha altura eh: %f\nMinha idade eh: %d\nIdade Giovanni: %d\n\nMinhas informacoes pessoais\nTamanho Calcado: %d\nPeso: %f",altura,idadeRenan, idadeGiovanni, _tamanhoPe, pesoPessoa);

	system("PAUSE");
}
