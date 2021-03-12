#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/* 
	Exemplo de uso da estrutura "switch case"
	@author Professor José de Assis
*/

int main(int argc, char *argv[]) {
	setlocale(LC_ALL, "Portuguese");
	int opcao;
	printf("Sistemas disponÍveis:\n\n");
	printf("1. Windows\n");
	printf("2. Linux\n");
	printf("\n");
	printf("Digite a opção desejada: ");
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
			printf("Opção inválida\n");
			break;
	}
	
	system("pause");
	return 0;
}
