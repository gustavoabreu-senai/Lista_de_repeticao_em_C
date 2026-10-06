#include <stdio.h>
#include <locale.h>

int main(){
setlocale(LC_ALL, "");
	
int valor,contador,resultado;

printf("Digite um valor numérico inteiro: ");
scanf("%d", &valor);

for (contador = 1;contador <= 10; contador++){
	resultado = valor * contador;
	printf("%d x %d = %d\n", valor,contador,resultado);

}

	
	return 0;
}
