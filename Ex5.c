#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>

int main(){
	
	setlocale(LC_ALL, "Portuguese");
	
	float num, pot, raiz;
	
	printf("Digite um n�mero: ");
	scanf("%f",& num);
	
	if (num > 0){
		printf("O n�mero ao quadrado �: %.2f ", pow(num,2));
		printf("\n");
		
		printf("A raiz quadrada do n�mero �: %.2f ", sqrt(num));
		printf("\n");
		
	} else{
		printf("O n�mero digitado n�o � positivo. \n");
	}
	
	system("PAUSE");
	return 0;
}
