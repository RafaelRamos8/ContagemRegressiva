#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main(){
	setlocale(LC_ALL,"");
	
	//Rafael da Costa Ramos, 22/01/2023, Taubaté
	
	/*Crie um algoritmo que faça contagem regressiva de 10 à 0 utilizando while, doWhile
	e for.*/
	
	//Definindo variável
	int cont = 10;
	
	//Contagem regressiva com While
	while(cont >= 0){
		printf("\n%d", cont);
		cont--;
	}
	//Contagem regressiva com For
	for(cont = 10; cont >= 0; cont--){
		printf("\n%d", cont);
	}
	
	//Contagem regressiva com DoWhile
	cont = 10;
	
	do{
		printf("\n%d", cont);
		cont--;
	}while(cont >= 0);
//Fim do Programa	
printf("\n \n");
system("pause");	
}
