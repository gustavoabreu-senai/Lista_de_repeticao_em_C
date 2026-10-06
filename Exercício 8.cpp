#include <stdio.h>
#include <locale.h>

int contador,valor;

int main(){
setlocale(LC_ALL, "");

printf("==================================\n");
printf("         INSIRA 10 VALORES\n");
printf("==================================\n");


for (contador = 1; contador <= 10;contador++){
	
printf("Digite o %dº valor: \n", contador);
scanf("%d", &valor);

if (valor <0){
	printf("NEGATIVO!\n");
} else if (valor == 0){
	printf("ZERO!\n");
} else {
	printf("POSITIVO!\n");
}

}

	return 0;
}
