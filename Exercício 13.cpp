#include <stdio.h>
#include <locale.h>

int main(){
setlocale(LC_ALL, "");

int menu;

do {
	printf("==========================\n");
	printf("         MENU   \n");
	printf("==========================\n");
	
	printf("1 - Cadastrar\n");
	printf("2 - Consultar\n");
	printf("3 - Relatorio\n");
	printf("0 - Sair\n");
	printf("==========================\n");
	scanf("%d", &menu);
	switch (menu){
	
	case 1:
		printf("Cadastro\n");
		break;	
	case 2:
		printf("Consulta\n");
		break;
	case 3:
		printf("Relatório\n");
		break;
}


} while (menu != 0);

printf("Programa encerrado!");

	return 0;
}
