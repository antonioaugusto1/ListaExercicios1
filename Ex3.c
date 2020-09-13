#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
	
	setlocale(LC_ALL, "Portuguese");
	
	int num;
	
	printf("Digite um número de 1 a 7: ");
	scanf("%d",&num);
	
	switch(num){
		case 1:
			printf("%d corresponde a domingo. \n", num);
			break;
		case 2:
			printf("%d corresponde a segunda-feira. \n", num);
			break;
		case 3:
			printf("%d corresponde a terça-feira. \n", num);
			break;
		case 4:
			printf("%d corresponde a quarta-feira. \n", num);
			break;
		case 5:
			printf("%d corresponde a quinta-feira. \n", num);
			break;
		case 6:
			printf("%d corresponde a sexta-feira. \n", num);
			break;
		case 7:
			printf("%d corresponde a sabado. \n", num);
			break;
		default:
			printf("%d não está entre 1 e 7. \n", num);
	}
	
	system("PAUSE");
	return 0;
}
