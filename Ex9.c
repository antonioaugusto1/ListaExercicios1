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
	printf("Informe a velocidade média da viagem: ");
	scanf("%f",&vm);
	
	distancia = tempo * vm;
	
	litros = distancia / n;
	
	printf("A distância percorrida foi de %.2f KM. \n", distancia);
	
	printf("A qunatidade de combustível gasto na viagem foi de %.2f litros. \n", litros);
	
	system("PAUSE");
	return 0;	
}
