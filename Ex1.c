#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
	
	setlocale (LC_ALL, "Portuguese");
	
	float cotacao, real, dolar;
	
	printf("Digite o valor atual da cota��o do d�lar: ");
	scanf("%f",&cotacao);
	
	printf("Digite o valor em real para convers�o: ");
	scanf("%f",&real);
	
	dolar = real / cotacao;
	
	printf("R$%.2f reais equivale a U$%.2f d�lares. \n", real, dolar);
	
	system("PAUSE");
	return 0;
}

