#include <stdio.h>
#include <stdlib.h>

/* 
    Exemplo da variável do tipo int
    @author Thiago Caramigo
*/

int main(int argc, char *argv[]) 
{
    int idade;
    printf("Digite a sua idade: ");
    scanf("%d", &idade);
    printf("Idade: %d",idade);
    if (idade<18)
    {
    	printf("\nmenor de idade\n");
	}
    if (idade>=18)
	{
		printf("\nmaior de idade\n");
	}  
	system("pause");
	return 0;
}
