#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
	
	setlocale(LC_ALL, "Portuguese");
	
	int aleatorio, num, cont=0;
	
	srand(time(NULL)); // Iniciando um n�mero aleat�rio
	aleatorio = rand()%20; // Serve para gerar valores entre 0-19
	
	do{
		printf("Digite um n�mero da sorte entre 0-19: ");
		scanf("%d",&num);
		cont++;
	} while(num != aleatorio);
	
	printf("Aleat�rio: %d | Seu valor: %d \n", aleatorio, num);
	printf("Foram necess�rias %d tentativas. \n", cont);
	
	system("PAUSE");
	return 0;
}
