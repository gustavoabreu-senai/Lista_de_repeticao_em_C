#include <stdio.h>
#include <locale.h>

int valor;

int main(){
setlocale(LC_ALL, "");

printf("Digite um valor: \n");
scanf("%d", &valor);


while (valor < 0){
	printf("Valor inválido, digite novamente: \n");
	scanf("%d", &valor);
}


	return 0;
}
