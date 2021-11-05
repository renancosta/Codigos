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
	// 0 1 2 3 - Posições da memória da palavra osso
	//[O,S,S,O]

	
	tamPalavra=strlen(palavra)-1;
	
	for(int i=tamPalavra;i>=0; i--){
		espelho[e]=palavra[i];
		e++;
	} 
	
	espelho[e]='\0';
	
	if(strcmp(palavra,espelho)==0){ //OSSO=OSSO
		printf("É um palíndromo.");
	}
	else {
		printf("Não é um palídromo.");
	}
	return 0;
}
