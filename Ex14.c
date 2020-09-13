#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
	
	setlocale(LC_ALL, "Portuguese");
	
	float massa;
	int seg=0;
	
	printf("Digite o valor da massa do material: ");
	scanf("%f",&massa);
	
	while(massa >= 1.45){
		massa = massa - (massa * 0.13); // ou massa -= massa * 0.13
		seg += 20; // ou seg = seg +20
		printf("Passado %d segundos a massa é de: %.2f. \n", seg, massa);
		_sleep(500); // é uma pause de 500mls
	}
	
	printf("Fora necessários %d segundos para a massa decair. \n", seg);
	
	system("PAUSE");
	return 0;	
}
