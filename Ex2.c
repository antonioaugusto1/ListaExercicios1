#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){

	setlocale(LC_ALL, "Portuguese");
	
	int mbps, kbps;
	
	printf("Digite o valor em Mbps a ser convertido: ");
	scanf("%d",&mbps);
	
	kbps = mbps * 1024;
	
	printf("%d Mbps equivale a %d Kbps. \n", mbps, kbps);

}
