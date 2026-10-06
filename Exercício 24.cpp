#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

int menu_tipo,menu_prioridade,contador,urgente,software,hardware,rede;
char repeticao;

int main (){
setlocale (LC_ALL, "");

for (contador = 0;repeticao != 'N';contador++){

	printf("=====================\n");
	printf(" TIPO DE ATENDIMENTO\n");
	printf("=====================\n");
	printf("1 - Software\n");
	printf("2 - Hardware\n");
	printf("3 - Rede\n");
	printf("=====================\n");
	scanf("%d", &menu_tipo);
	
	while (menu_tipo < 1 || menu_tipo > 3){
		printf("Valor incorreto digitado, por favor, insira um valor entre os citados: \n");
		scanf("%d", &menu_tipo);
	}
	
	switch (menu_tipo){
		
	case 1:
		software++;
	break;
			
	case 2:
		hardware++;
		break;
			
	case 3:
		rede++;
		break;
	}
	
	system("cls");

	printf("=====================\n");
	printf("     PRIORIDADE\n");
	printf("=====================\n");
	printf("1 - Urgente\n");
	printf("2 - Prioritário\n");
	printf("3 - Normal\n");
	printf("=====================\n");
	scanf("%d", &menu_prioridade);

	
	while (menu_prioridade < 1 || menu_prioridade > 3){
		printf("Valor incorreto digitado, por favor, insira um valor entre os citados: \n");
		scanf("%d", &menu_prioridade);
	}
	
	if (menu_prioridade == 1){
		urgente++;
	}
	
	system("cls");
	
	printf("Deseja continuar realizando atendimentos? (S/N) \n");
	scanf(" %c", &repeticao);
	
	while (repeticao != 'S' && repeticao != 'N'){
		printf("Resposta fora das informadas, tente novamente! \n");
		scanf(" %c", &repeticao);
	}
	
	system("cls");
	
	if (repeticao == 'S'){
		printf("Continuando o programa...\n");
	}else{
		printf("Encerrando o programa... relatório a seguir:\n");
	}

}

printf("====================================\n");
printf("            RELATÓRIO\n");
printf("====================================\n");
	
printf("Total de atendimentos: %d\n", contador);
printf("Total atendimentos de Software: %d\n", software );
printf("Total atendimentos de Hardware: %d\n", hardware );
printf("Total atendimentos de Rede: %d\n", rede );
printf("Total atendimentos urgentes: %d\n", urgente );
printf("===================================\n");
	

	return 0;
}
