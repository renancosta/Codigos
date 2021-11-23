#include <stdio.h>

struct HM { 
	int horas; 
	int minutos; 
};

HM transformarMinEmHM(int minutos){
	HM var;
	var.horas = minutos/60;
	var.minutos = minutos%60;
	return var;
}

int main(){
	HM var;
	int valor;
	
	printf("Informe o valor em minutos que queira converter para Horas:minutos: ");
	scanf("%d",&valor);
	
	var = transformarMinEmHM(valor);
	
	printf("Valor Informado transformado: %dh:%dmin",var.horas,var.minutos);
}
