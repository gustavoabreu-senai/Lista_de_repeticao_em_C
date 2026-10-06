#include <stdio.h>
#include <locale.h>

int main(){
setlocale(LC_ALL, "");

int menu;

do {
	
	printf("==========================\n");
	printf("      SUPORTE DE TI   \n");
	printf("==========================\n");
	
	printf("1 - Software\n");
	printf("2 - Hardware\n");
	printf("3 - Rede\n");
	printf("0 - Sair\n");
	printf("==========================\n");
	scanf("%d", &menu);
		
	if (menu >3 || menu <0){
		printf("Valor inválido!\n");
	} else {
		
		switch (menu){
			
		case 1:
			printf("Suporte de Software selecionado.\n");
			break;	
		case 2:
			printf("Suporte de Hardware selecionado.\n");
			break;
		case 3:
			printf("Suporte de Rede selecionado.\n");
			break;
		}
	}

} while (menu != 0);

printf("Programa encerrado!");

	return 0;
}
