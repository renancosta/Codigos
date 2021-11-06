#include<stdio.h>
#include<math.h>
#include<string.h>
#include<conio.h>

int main()
{
	int numerodependentes, i;
	float salariominimo, salariofunc, taxaimposto, taxaimpostosalario, impostoderenda, impostobruto, impostoliquido, salariomaximo12, salariomaximo5, calcdependentes; 
	FILE *arquivo;
	char aux;
	
	printf("Dados de impostos anteriores");
	arquivo = fopen ("dadosImposto.txt","r");
	if (arquivo == NULL) {
		printf ("Erro abertura do arquivo : escritaPutc.txt Tecle algo !\n");
		getch();
	}
	else {
		aux = fscanf(arquivo, "%f %d %f %f %f %f %f",&salariominimo, &numerodependentes, &salariofunc, &taxaimposto, &impostobruto, &impostoliquido, &impostoderenda);
		while (aux != EOF) {
			i = i + 1;
			printf("\n%.2f %d %.2f %.2f %.2f %.2f %.2f",salariominimo, numerodependentes, salariofunc, taxaimposto, impostobruto, impostoliquido, impostoderenda);
			getch();
			aux = fscanf(arquivo, "%f %d %f %f %f %f %f",&salariominimo, &numerodependentes, &salariofunc, &taxaimposto, &impostobruto, &impostoliquido, &impostoderenda);
		}
	}
	fclose(arquivo);
	
	scanf("%f",&salariominimo);
	scanf("%d",&numerodependentes);
	scanf("%f",&salariofunc);
	scanf("%f",&taxaimposto);
	
	salariomaximo12 = salariominimo * 12;
	salariomaximo5 = salariominimo * 5;
	calcdependentes = numerodependentes * 300.00;
	taxaimpostosalario = (taxaimposto / 100) * salariofunc;
	
	if ( salariofunc > salariomaximo12){
		impostobruto = 0.2 * salariofunc;
		impostobruto = 0.04 * impostobruto + impostobruto;
	} 
	
	else if (salariofunc >  salariomaximo5){
		impostobruto = 0.08 * salariofunc;
		impostobruto = 0.04 * impostobruto + impostobruto;
	}
	
	else if (salariofunc <= salariomaximo5){
		impostobruto = 0;
	}
	
	impostoliquido = impostobruto - calcdependentes ;
	impostoderenda = impostoliquido - taxaimpostosalario;
	
	if (impostoderenda == 0){
		printf("IMPOSTO BRUTO = %.2f\n",impostobruto);
		printf("IMPOSTO LIQUIDO = %.2f\n",impostoliquido);
		printf("RESULTADO = %.2f\n",impostoderenda);
		printf("IMPOSTO QUITADO\n");
	}
	
	else if (impostoderenda < 0){
		printf("IMPOSTO BRUTO = %.2f\n",impostobruto);
		printf("IMPOSTO LIQUIDO = %.2f\n",impostoliquido);
		printf("RESULTADO = %.2f\n",impostoderenda);
		printf("IMPOSTO A RECEBER\n");
	}
	
	else if (impostoderenda > 0){
		printf("IMPOSTO BRUTO = %.2f\n",impostobruto);
		printf("IMPOSTO LIQUIDO = %.2f\n",impostoliquido);
		printf("RESULTADO = %.2f\n",impostoderenda);
		printf("IMPOSTO A PAGAR\n");
	}
	
	arquivo = fopen ("dadosImposto.txt","a");
	if (arquivo == NULL) {
		printf ("Erro abertura do arquivo : escritaPutc.txt Tecle algo !\n");
		getch();
	}
	else {
		fprintf(arquivo,"%.2f %d %.2f %.2f %.2f %.2f %.2f\n",salariominimo, numerodependentes, salariofunc, taxaimposto, impostobruto, impostoliquido, impostoderenda);
	}
	fclose(arquivo);
	
	return 0;
}
