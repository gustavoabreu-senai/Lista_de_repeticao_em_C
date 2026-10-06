#include <stdio.h>
#include <locale.h>


int tentativa;

int main(){
setlocale(LC_ALL, "");

while (tentativa != 1234){
	printf("Digite a senha: ");
	scanf("%d", &tentativa);
}
printf("Acesso liberado!");
	return 0;
}
