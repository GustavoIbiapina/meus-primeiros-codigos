#include <stdio.h>

int main(){
	
	int idade;
	
	printf("Qual sua idade:");
	scanf("%d", &idade);
	
	if (idade > 18 && idade< 95){
		printf("Voce pode tirar sua carteira");
	}
	else {
		printf("Voce n pode tirar sua carteira");
	}
	
	
}