#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

int main(){
	
	setlocale(LC_ALL, "Portuguese");
	
	int num1, num2, result;
	char operador[1];
	
	printf("Informe o primeiro n�mero: ");
	scanf("%d",&num1);
	
	printf("Informe o segundo n�mero: ");
	scanf("%d",&num2);
	
	printf("Informe o sinal da opera��o que deseja realizar (+, -, *, / ): ");
	setbuf(stdin, NULL);
	gets(operador);
	
	switch(operador[0]){
		case '+':
			result = num1 + num2;
			printf("A soma dos n�meros informados �: %d \n", result);
			break;
		case '-':
			printf("A subtra��o dos n�meros informados �: %d \n", num1 - num2);
			break;
		case '*':
			printf("A multiplica��o dos n�meros informados �: %d \n", num1 * num2);
			break;
		case '/':
			printf("A divis�o dos n�meros informados �: %.2f \n", num1 / num2);
			break;
		default:
			printf("Este operador n�o � v�lido. \n");
	}
	
	system("PAUSE");
	return 0;
}
