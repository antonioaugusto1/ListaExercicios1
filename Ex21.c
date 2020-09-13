#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
	
	setlocale(LC_ALL, "Portuguese");
	
	int termos, i, ant=0, atual=1, prox;
	
	printf("Digite a quantidade de termos da sequência de Fibonacci: ");
	scanf("%d",&termos);
	
	for(i=0; i<=termos; i++){
		printf("%d ", atual); _sleep(500);
		prox = atual + ant;
		ant = atual;
		atual = prox;
	}
	printf("\n");
	system("PAUSE");
	return 0;
}
