#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main (){
	
	setlocale(LC_ALL, "Portuguese");
	
	int verde = 0, amarelo = 0, branco = 0, result;
	
	printf("Informe a quantidade de bolas verdes: ");
	scanf("%d",&verde);
	
	printf("Informe a quantidade de bolas amarelas: ");
	scanf("%d",&amarelo);
	
	printf("Informe e quantidade de bolas brancas: ");
	scanf("%d",&branco);
	
	verde = verde * 10;
	
	amarelo = amarelo * 5;
	
	branco = branco * 3;
	
	result = verde + amarelo + branco;
	
	printf("A pontuação final foi de %d pontos.", result);
}
