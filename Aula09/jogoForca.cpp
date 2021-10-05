#include<stdio.h> //Biblioteca de entrada e sa�da de dados 
#include<locale.h>//Biblioteca de defini��o de localidade
#include<string.h>
#include<stdlib.h>

/*Escreva um programa que funciona como o jogo da forca. 
O usu�rio tenta acertar uma palavra (contida numa vari�vel) 
usando 5 tentativas. A palavra � mostrada ao usu�rio com as 
letras marcadas com o s�mbolo '*'. O usu�rio deve digitar uma 
letra (sem acentos, til, trema) e caso a letra esteja correta, 
o s�mbolo '*' � substitu�do pela letra. Se o usu�rio n�o montar a 
palavra at� a quinta tentativa, o jogo acaba em derrota.
*/

int main() { 
	setlocale(LC_ALL, "Portuguese");
	
	char letra, palavra[]="renan",palavraTentativa[]="*****";
	int acertou=0,erro=0;
	
	while(erro!=5){
		printf("###Jogo da Forca###");
		printf("\nAcerte a palavra: %s",palavraTentativa);
		printf("\nInforme uma letra: ");
		scanf(" %c",&letra);
		
		for(int i=0;i<strlen(palavra);i++){
			if(palavra[i]==letra){
				palavraTentativa[i]=letra;
				acertou=1;
			} 
		}
		if(acertou==0){
			erro++;
			printf("Errou :( Faltam %d tentativas",5-erro);
		} else {
			printf("Acertou o/ Faltam %d tentativas",5-erro);
			acertou=0;
		}
		if(strcmp(palavra,palavraTentativa)==0){
			printf("\nVoc� ganhou o jogo!");
			break;
		}
		system("PAUSE");
		system("cls");
	}
	if(erro==5){
		printf("\nVoc� perdeu o jogo!");
		system("PAUSE");
	}
}
