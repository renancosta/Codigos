#include <stdio.h>
#include <conio.h>
#include <locale.h>

int main () {
	setlocale(LC_ALL, "Portuguese");
	FILE *Arquivo;
	char Caractere, Nome[20];
	
	printf("Nome do arquivo? ");
	fflush(stdin);
	gets(Nome);
	Arquivo = fopen (Nome,"w");
	if (Arquivo == NULL) {
		printf ("Erro abertura do Arquivo : %s. Tecle algo !\n",Nome);
		getch();
	}
	else {
		printf("Arquivo aberto. Digite os caracteres a serem salvos! Enter quebrará a linha no arquivo\n");
		do {
			Caractere = getche();
			if (Caractere == 13) { //teclou enter
				putc('\n',Arquivo); //grava um \n no arquivo
				printf("\n"); // pular linha na tela pois getche não faz isso com enter 
			}
			else {
				putc(Caractere,Arquivo);
			}
		} while (Caractere != 26); // CTRL + Z para encerrar
	}
	fclose(Arquivo);
	printf("\n Fim da digitação do texto !" );
	getch();
}
