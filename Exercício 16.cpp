#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

int qntd, contador,menu_prioridade,menu_tipo,codigo;


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
		scanf("%d", &menu_prioridade);
		
		system("cls");

	} while (menu_prioridade <=0 || menu_prioridade >3);
	
	
	printf("==============================\n");
	printf("      TIPO DE SERVIÇO\n", contador);
	printf("==============================\n");
	printf("1 - Software\n");
	printf("2 - Hardware\n");
	printf("3 - Rede\n");
	printf("==============================\n");
	scanf("%d", &menu_tipo);
	
	system("cls");
	
	switch (menu_tipo){
			
		case 1:
			
			printf("=============================\n");
			printf("    CHAMADO CADASTRADO\n");
			printf("=============================\n");
			printf("Código: %d\n", codigo);
			printf("Serviço: Software\n");
			if (menu_prioridade == 1){
				printf("Prioridade: Urgente\n");
			} else if(menu_prioridade == 2){
				printf("Prioridade: Prioritário\n");
			} else if(menu_prioridade == 3){
				printf("Prioridade: Normal\n");
			}
			printf("=============================\n");
			break;
			
		case 2:
			
			printf("=============================\n");
			printf("    CHAMADO CADASTRADO\n");
			printf("=============================\n");
			printf("Código: %d\n", codigo);
			printf("Serviço: Hardware\n");
			if(menu_prioridade == 1){
				printf("Prioridade: Urgente\n");
			} else if(menu_prioridade == 2){
				printf("Prioridade: Prioritário\n");
			} else if(menu_prioridade == 3){
				printf("Prioridade: Normal\n");
			}
			printf("=============================\n");
			break;
		
		case 3:
			
			printf("=============================\n");
			printf("    CHAMADO CADASTRADO\n");
			printf("=============================\n");
			printf("Código: %d\n", codigo);
			printf("Serviço: Rede\n");
			if(menu_prioridade == 1){
				printf("Prioridade: Urgente\n");
			} else if(menu_prioridade == 2){
				printf("Prioridade: Prioritário\n");
			} else if(menu_prioridade == 3){
				printf("Prioridade: Normal\n");
			}
			printf("=============================\n");
			break;
			
	system("cls");
	}
	
	return 0;
}
}
