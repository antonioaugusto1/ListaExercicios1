#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>

int main(){
	
	setlocale(LC_ALL, "Portuguese");
	
	float num, pot, raiz;
	
	printf("Digite um número: ");
	scanf("%f",& num);
	
	if (num > 0){
		printf("O número ao quadrado é: %.2f ", pow(num,2));
		printf("\n");
		
		printf("A raiz quadrada do número é: %.2f ", sqrt(num));
		printf("\n");
		
	} else{
		printf("O número digitado não é positivo. \n");
	}
	
	system("PAUSE");
	return 0;
}
