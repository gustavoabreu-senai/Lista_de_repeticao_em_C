#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

int menu,menu_prioridade,menu_tipo,contador,codigo,total_chamados,chamado_urgente,hardware,software,rede;

int main (){
setlocale (LC_ALL, "");

do{

	printf("==========================\n");
	printf("    SISTEMA DE SUPORTE\n");
	printf("==========================\n");
	printf("1 - Registrar Chamado\n");
	printf("2 - Relatório\n");
	printf("0 - Sair\n");
	printf("==========================\n");
	scanf("%d", &menu);
	
	system("cls");
	
	switch (menu){
	
	case 1:
		
			printf("Digite o código do chamado: \n", contador);
			scanf("%d", &codigo);
			
			system("cls");
		do {
	
			printf("==============================\n");
			printf("         PRIORIDADE\n");
			printf("==============================\n");
			printf("1 - Urgente\n");
			printf("2 - Prioritário\n");
			printf("3 - Normal\n");
			printf("==============================\n");
			scanf("%d", &menu_prioridade);
		} while (menu_prioridade <=0 || menu_prioridade >3);
		
		if (menu_prioridade == 1){
			chamado_urgente++;
		}
		system("cls");

	
	
		printf("==============================\n");
		printf("      TIPO DE SERVIÇO\n", contador);
		printf("==============================\n");
		printf("1 - Software\n");
		printf("2 - Hardware\n");
		printf("3 - Rede\n");
		printf("==============================\n");
		scanf("%d", &menu_tipo);
		
		if (menu_tipo == 1){
			software++;
		} else if (menu_tipo ==2){
			hardware++;
		} else{
			rede++;
		}
	
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
				total_chamados++;
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
				total_chamados++;
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
				total_chamados++;
				printf("=============================\n");
				break;				
		}
		
	break;
		
	case 2:	
	
		printf("==============================\n");
		printf("         RELATÓRIO\n");
		printf("==============================\n");
		printf("Chamados Software: %d\n", software);
		printf("Chamados Hardware: %d\n", hardware);
		printf("Chamados Rede: %d\n", rede);
		printf("Total chamados registrados: %d\n", total_chamados);
		printf("Chamados urgentes: %d\n", chamado_urgente);
		printf("==============================\n");
		break;

}
	
} while (menu != 0);
	printf("Muito obrigado!\n");


	return 0;
}
