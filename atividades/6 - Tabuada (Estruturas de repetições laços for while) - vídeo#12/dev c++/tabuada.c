#include <stdio.h>
#include <stdlib.h>

/* 
   Tabuada (Estruturas de repetições laços for while)
   @author Thiago Caramigo
*/

int numero,resposta;
int contador=0;

int main(int argc, char *argv[]) {


do
{
		
    printf("Tabuada\n\n"); 
	printf("Digite o numero da tabuada: ");
	scanf("%d", &numero);
	for(contador=0;contador<=10;contador++)
	{
		printf("%d x %d = %d\n",numero,contador,numero*contador);
    }
    printf("\n1- Novo calculo\n");
	printf("2- Sair\n");  
	printf("Digite a opcao desejada: ");
	scanf("%d", &resposta);
}while(resposta != 2);
	system("pause");	
	return 0;
}
