#include <stdio.h>
#include <locale.h>

int idade;

int main(){
setlocale(LC_ALL, "");

do {
	printf("Digite sua idade: \n");
	scanf("%d", &idade);

	if (idade >= 1) {
		printf("Idade válida\n");
	}

} while (idade < 0);

printf("Programa encerrado.\n");


	return 0;
}
