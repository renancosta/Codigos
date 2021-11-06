#include<stdio.h> 
#include<locale.h>
#include<string.h>
#include<conio.h>

int main() { 

	FILE *arquivo;	
	setlocale(LC_ALL, "Portuguese");
	
	char msg[50];
	
	arquivo = fopen ("mensagemCriptografada.txt","w");
	if (arquivo == NULL) {
		printf ("Erro abertura do arquivo : escritaPutc.txt Tecle algo !\n");
		getch();
	}
	else {
		printf("Arquivo aberto.\n");
		printf("Informe sua mensagem: ");
		gets(msg);
		
		for(int i=0; i<strlen(msg); i++){
			//if(msg[i]!='\x20'){
				msg[i] += i;
				putc(msg[i],arquivo);
			//}else {
			//	putc(msg[i],arquivo);
			//}
		}
		putc('\n',arquivo);
		printf("%s",msg);
	}
	fclose(arquivo);
}


