#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

int contador,status,funcionando,defeito;

int main (){
setlocale (LC_ALL, "");

defeito = 0;
funcionando = 0;

for(contador = 1;contador <= 10; contador++){

	do{
		printf("============================\n");
		printf("        COMPUTADOR %d \n", contador);
		printf("============================\n");
		printf("1 - Funcionando\n");
		printf("0 - Com defeito\n");
		scanf("%d", &status);
	
	} while (status > 1 || status <0);	

		switch (status){
		
			case 0:
				defeito++;
				break;
			case 1:
				funcionando++;
				break;
		}
	system("cls");
}

printf("Computadores funcionando: %d\n", funcionando);
printf("Computadores com defeito: %d\n", defeito);

	return 0;
}
