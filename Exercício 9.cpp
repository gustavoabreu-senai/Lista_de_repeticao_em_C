#include <stdio.h>
#include <locale.h>

int valor;


int main(){
setlocale(LC_ALL, "");

valor = 1;


while (valor != 0){
	printf("Digite um valor: ");
	scanf("%d", &valor);
	
}

printf("Programa encerrado!");
	
	return 0;
}
