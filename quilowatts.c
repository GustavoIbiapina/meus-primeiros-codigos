#include <stdio.h>
#include <stdlib.h>

int main(){
	
	float salario_minimo, valor_quilowatt, quilowatts_gastos, valor_conta, desconto;
	 
 printf("Digite o valor do salario minimo:\n");
 scanf("%f", &salario_minimo);
 
 printf("Digite o numero de quilowatts gastos: \n");
 scanf("%f", &quilowatts_gastos);
 
 
 valor_quilowatt = salario_minimo / 7 / 100;
 valor_conta = valor_quilowatt * quilowatts_gastos;
 desconto = valor_conta -(valor_conta * 10/100);
 
 printf("O valor de cada quilowatt e %.2fR$ \n", valor_quilowatt);
 printf("O valor da conta e %.2fR$ \n", valor_conta);
 printf("O valor com desconto de 10 e %.2fR$ \n", desconto);
 
 
 

 
 
	
	
	
}