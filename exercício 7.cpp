#include <stdio.h>
#include <locale.h>

int qntd,contador;
float nota;

int main(){
	
setlocale(LC_ALL, "");

printf("Digite o valor de estudantes: \n");
scanf("%d", &qntd);

for (contador = 1; contador <= qntd;contador++){
	
	printf("Digite a nota do %dº aluno: \n", contador);
	scanf("%f", &nota);
	printf("================================\n");
	printf("Nota registrada: %.1f\n", nota);
	
	if (nota >= 7){
		printf("Nota maior ou igual a 7\n");
	} else {
		printf("Nota menor do que 7\n");
	}
	printf("================================\n");
	
}
	return 0;
}
