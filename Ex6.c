#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
	
	setlocale(LC_ALL, "Portuguese");
	
	float num1, num2;
	
	printf("Informe o primeiro número: ");
	scanf("%f",&num1);
	printf("Informe o segundo número: ");
	scanf("%f",&num2);
	
	if(num1 > num2){
		printf("O maior valor é o número %.2f. \n", num1);
		
	} else{
		printf("O maior valor é o número %.2f. \n", num2);
	}
	
	system("PAUSE");
	return 0;
}
