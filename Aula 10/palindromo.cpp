#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<locale.h>

int main() {
	setlocale(LC_ALL, "Portuguese");
	
	char palavra[50], espelho[50];
	int e=0, tamPalavra;
	
	printf("Digite a palavra a ser analisada:\n");
	scanf("%s", palavra);
	// osso - osso, roma - amor
	// 0 1 2 3 - Posi��es da mem�ria da palavra osso
	//[O,S,S,O]

	
	tamPalavra=strlen(palavra)-1;
	
	for(int i=tamPalavra;i>=0; i--){
		espelho[e]=palavra[i];
		e++;
	} 
	
	espelho[e]='\0';
	
	if(strcmp(palavra,espelho)==0){ //OSSO=OSSO
		printf("� um pal�ndromo.");
	}
	else {
		printf("N�o � um pal�dromo.");
	}
	return 0;
}
