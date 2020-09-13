#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
	
	setlocale (LC_ALL, "Portuguese");
	
	float cotacao, real, dolar;
	
	printf("Digite o valor atual da cotação do dólar: ");
	scanf("%f",&cotacao);
	
	printf("Digite o valor em real para conversão: ");
	scanf("%f",&real);
	
	dolar = real / cotacao;
	
	printf("R$%.2f reais equivale a U$%.2f dólares. \n", real, dolar);
	
	system("PAUSE");
	return 0;
}

