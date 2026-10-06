#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

int contador;
float venda,media,total;

int main (){
setlocale (LC_ALL, "");

for (contador = 1;contador <= 5; contador++){
	
	printf("Digite o valor da %dª\n", contador);
	scanf("%f", &venda);
	
	total = total + venda;

	media = venda/5;
	
}
system("cls");
printf("Total vendido: %.2f R$\n", total);
printf("Media: %.2f R$\n", media);

	return 0;
}
