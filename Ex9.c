#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
	
	setlocale(LC_ALL, "Portuguese");
	
	float tempo, vm, n, distancia, litros;
	
	printf("Informe a quantidade de KM por litro do seu carro: ");
	scanf("%f",&n);
	printf("Informe o tempo gasto na viagem: ");
	scanf("%f",&tempo);
	printf("Informe a velocidade m�dia da viagem: ");
	scanf("%f",&vm);
	
	distancia = tempo * vm;
	
	litros = distancia / n;
	
	printf("A dist�ncia percorrida foi de %.2f KM. \n", distancia);
	
	printf("A qunatidade de combust�vel gasto na viagem foi de %.2f litros. \n", litros);
	
	system("PAUSE");
	return 0;	
}
