#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

int main(){
	
	setlocale(LC_ALL, "Portuguese");
	
	int num1, num2, result;
	char operador[1];
	
	printf("Informe o primeiro número: ");
	scanf("%d",&num1);
	
	printf("Informe o segundo número: ");
	scanf("%d",&num2);
	
	printf("Informe o sinal da operação que deseja realizar (+, -, *, / ): ");
	setbuf(stdin, NULL);
	gets(operador);
	
	switch(operador[0]){
		case '+':
			result = num1 + num2;
			printf("A soma dos números informados é: %d \n", result);
			break;
		case '-':
			printf("A subtração dos números informados é: %d \n", num1 - num2);
			break;
		case '*':
			printf("A multiplicação dos números informados é: %d \n", num1 * num2);
			break;
		case '/':
			printf("A divisão dos números informados é: %.2f \n", num1 / num2);
			break;
		default:
			printf("Este operador não é válido. \n");
	}
	
	system("PAUSE");
	return 0;
}
