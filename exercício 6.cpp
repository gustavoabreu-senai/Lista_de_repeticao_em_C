#include <stdio.h>
#include <locale.h>


int main(){
	
setlocale(LC_ALL, "");
	
int qntd,contador,codigo;
float preco;


printf("Qual a quantidade de produtos que deseja cadastrar?: ");
scanf("%d", &qntd);

for (contador = 1; contador <= qntd;contador++){
	printf("Digite o código do produto %d: ", contador);
	scanf("%d", &codigo);
	printf("Digite o preço do produto: %d: ", contador);
	scanf("%f", &preco);
	
	printf("================================\n");
	printf("       PRODUTO %d REGISTRADO\n",contador);
	printf("================================\n");
	printf("Código do produto: %d\n", codigo);
	printf("Preço do produto: %.2f\n", preco);
	printf("================================\n");
}
	return 0;
}
