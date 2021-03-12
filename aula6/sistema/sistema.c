#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/* 
	Exemplo de uso da estrutura "switch case"
	@author Professor Jos� de Assis
*/

int main(int argc, char *argv[]) {
	setlocale(LC_ALL, "Portuguese");
	int opcao;
	printf("Sistemas dispon�veis:\n\n");
	printf("1. Windows\n");
	printf("2. Linux\n");
	printf("\n");
	printf("Digite a op��o desejada: ");
	scanf("%d",&opcao);
	
	switch (opcao){
		case 1:
			system("cls");
			system("color 1F");
			printf("Carregando o sistema Windows.............\n");
			break;
		case 2:
			system("cls");
			system("color 4E");
			printf("Carregando o sistema Linux...\n");
			break;
		default:
			printf("Op��o inv�lida\n");
			break;
	}
	
	system("pause");
	return 0;
}
