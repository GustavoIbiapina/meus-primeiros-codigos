#include <stdio.h>


int main(){

int num1, num2, num3;

printf("Digite o primeiro numero: \n");
scanf("%d", &num1);
printf("Digite o segundo numero: \n");
scanf("%d", &num2);
printf("Digite o terceiro numero: \n");
scanf("%d", &num3);


if (num1 == num2 && num1 == num3){
	printf("os numeros sao iguais");
}
else if (num1>num2 && num1>num3){
	printf("%d \n", num1);
} 
else if (num2>num1 && num2>num3){
	printf("%d \n", num2);
} else{
	printf("%d \n", num3);
}


return 0;
	
	
}