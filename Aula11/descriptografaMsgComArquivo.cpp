#include<stdio.h> 
#include<locale.h>
#include<string.h>
#include<conio.h>

int main() { 

	FILE *arquivo;	
	setlocale(LC_ALL, "Portuguese");
	
	char msg[50],caractere;
	
	arquivo = fopen ("mensagemCriptografada.txt","r");
	if (arquivo == NULL) {
		printf ("Erro abertura do arquivo : escritaPutc.txt Tecle algo !\n");
		getch();
	}
	else {
		printf("Arquivo aberto.\n");
		
		int i=0;
		caractere = getc(arquivo);
		while (caractere != EOF) {
			caractere-=i;
			printf("%c", caractere);
			caractere = getc(arquivo);
			i++;
		}
		
		//for(int i=0; i<strlen(msg); i++){
		//	msg[i] += i;
		//	putc(msg[i],arquivo);
		//}
		//putc('\n',arquivo);
		//printf("%s",msg);
	}
	fclose(arquivo);
}


