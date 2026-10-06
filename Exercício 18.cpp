#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

int menu,contador,software,hardware,rede,total;

int main (){
setlocale (LC_ALL, "");

for(contador = 1;contador <= 10; contador++){

	do{
		printf("============================\n");
		printf("        ATENDIMENTO %d \n", contador);
		printf("============================\n");
		printf("1 - Software\n");
		printf("2 - Hardware\n");
		printf("3 - Rede\n");
		printf("============================\n");
		scanf("%d", &menu);
	
	} while (menu > 3 || menu <0);	

		switch (menu){
		
			case 1:
				software++;
				total++;
				break;
			case 2:
				hardware++;
				total++;
				break;
			case 3:
				rede++;
				total++;
				break;		
				
		}
	system("cls");
}
printf("Software: %d\n", software);
printf("Hardware: %d\n", hardware);
printf("Rede: %d\n", rede);
printf("Total: %d\n", total);

	return 0;
}
