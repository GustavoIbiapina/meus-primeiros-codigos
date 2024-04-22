#include <stdlib.h>
#include <stdio.h>

//VARIÁVEIS DE ENTRADA//
 
char nomeCliente [40];
char cpf[11];
char dataNasc[10];
float valorIndividual, valorTotal;
float qunt_Dependente;

char nome_odonto[40];
char cpf_odonto[11];
char dataNasc_odonto[10];
float valorIndividual_odonto, valorTotal_odonto;
float qunt_Dependente_odonto;
int tipoPlano;

int main (){
printf("Informe o tipo de plano 1-Saude ou 2-Odonto:");
scanf("%d", &tipoPlano);
if (tipoPlano == 1){
	printf("Informe seu nome\n");
	scanf("%s", &nomeCliente);
	printf("Informe seu CPF\n");
	scanf("%s", &cpf);
	printf("Informe sua data de nascimento\n");
	scanf("%d", &dataNasc);
	printf("Informe a quantidade de Dependentes\n");
	scanf("%f", &qunt_Dependente);
	valorIndividual = 120;
	valorTotal=valorIndividual * qunt_Dependente;
		printf("O valor total da fatura e: %.2f", valorTotal);	
	} else{
    printf("Informe seu nome\n");
	scanf("%s", &nome_odonto);
	printf("Informe seu CPF\n");
	scanf("%s", &cpf_odonto);
	printf("Informe sua data de nascimento\n");
	scanf("%s", &dataNasc_odonto);
	printf("Informe a quantidade de Dependentes\n");
	scanf("%f", &qunt_Dependente_odonto);
    valorIndividual_odonto = 80;
	valorTotal_odonto=valorIndividual_odonto * qunt_Dependente_odonto;	
	printf("O valor total da fatura e: %.2f", valorTotal_odonto);	
	}
	
	
	return 0;
		
	}