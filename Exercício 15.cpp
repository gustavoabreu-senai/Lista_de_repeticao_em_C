#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

int qntd, contador,menu,codigo;


int main (){
setlocale (LC_ALL, "");

printf("Quantas chamadas deseja cadastrar? \n");
scanf("%d", &qntd);
	
for (contador = 1;contador <= qntd;contador++){
	
	printf("Digite o código do %dº chamado: \n", contador);
	scanf("%d", &codigo);
	
	system("cls");

	do {
	
		printf("==============================\n");
		printf("        %dº CHAMADO\n", contador);
		printf("==============================\n");
		printf("1 - Urgente\n");
		printf("2 - Prioritário\n");
		printf("3 - Normal\n");
		printf("==============================\n");
		scanf("%d", &menu);
		
		system("cls");

	
		if (menu == 1){
			printf("%dº chamado - Atendimento urgente selecionado!\n", contador);
		} else if (menu == 2){
			printf("%dº chamado - Atendimento prioritário selecionado!\n", contador);
		} else if (menu == 3){
			printf("%dº chamado - Atendimento normal selecionado!\n", contador);
		}
		
	} while (menu <=0 || menu >3);
	printf("Programa encerrado!");

}	
	
	return 0;
}
