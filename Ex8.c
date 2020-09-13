#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
	
	setlocale(LC_ALL, "Portuguese");
	
	float precoFabrica = 0, distribuidor = 0, imposto = 0, precoFinal;
	
	printf("Informe o custo de fábrica do veículo: ");
	scanf("%f",&precoFabrica);
	
	distribuidor = (precoFabrica / 100) * 25;
	
	imposto = (precoFabrica / 100) * 42;
	
	precoFinal = precoFabrica + distribuidor + imposto;
	
	printf("O preço final do veículo é de R$%.2f. \n", precoFinal);
	
	system("PAUSE");
	return 0;
}
