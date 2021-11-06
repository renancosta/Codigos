#include <stdio.h>
#include <conio.h>
#include <locale.h>
#include <string.h>

int main () {
	setlocale(LC_ALL, "Portuguese");
	FILE *arquivo;
	char nome[20];
	
	arquivo = fopen ("escritaPutc.txt","a");
	if (arquivo == NULL) {
		printf ("Erro abertura do arquivo : escritaPutc.txt Tecle algo !\n");
		getch();
	}
	else {
		printf("Arquivo aberto.\n");
		
		printf("Escreva o seu nome: ");
		gets(nome);
		
		printf("Gravando no arquivo!");
		for(int i=0;i<strlen(nome);i++){		
			putc(nome[i],arquivo);
		}
		putc('\n',arquivo);
	
	}
	fclose(arquivo);
	printf("\n Fim da digitação do texto !" );
	getch();
}
