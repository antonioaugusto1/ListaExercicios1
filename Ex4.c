#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
	
	setlocale(LC_ALL, "Portuguese");
	
	float r, h, area;
	
	printf("Informe o valor do raio do cilindro: ");
	scanf("%f",&r);
	
	printf("Informe o valor da altura do cilindro: ");
	scanf("%f",&h);
	
	area = 2 * 3.14 * r * (r + h);
	
	printf("A área do cilindro é de %.2f. \n", area);
	
	system("PAUSE");
	return 0;
}
