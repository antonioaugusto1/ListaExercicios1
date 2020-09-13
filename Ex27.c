#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
	
	setlocale(LC_ALL, "Portuguese");
	
	int aleatorio, num, cont=0;
	
	srand(time(NULL)); // Iniciando um número aleatório
	aleatorio = rand()%20; // Serve para gerar valores entre 0-19
	
	do{
		printf("Digite um número da sorte entre 0-19: ");
		scanf("%d",&num);
		cont++;
	} while(num != aleatorio);
	
	printf("Aleatório: %d | Seu valor: %d \n", aleatorio, num);
	printf("Foram necessárias %d tentativas. \n", cont);
	
	system("PAUSE");
	return 0;
}
