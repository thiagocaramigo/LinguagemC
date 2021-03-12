#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/* 
	C�lculo do IMC
	@author Professor Jos� de Assis
*/

int main(int argc, char *argv[]) {
	setlocale(LC_ALL,"Portuguese");
	system("color 70");
	printf(" ___ __  __  ____ \n");
	printf("|_ _|  \\/  |/ ___|\n");
	printf(" | || |\\/| | |    \n");
	printf(" | || |  | | |___ \n");
	printf("|___|_|  |_|\\____|\n");
	printf("\n");
	//vari�veis
	float imc,peso,altura;
	//entrada
	printf("Digite o seu peso em Kg: ");
	scanf("%f",&peso);
	printf("Digite a sua altura em metros: ");
	scanf("%f",&altura);
	//processamento
	imc = peso / (altura * altura);
	//sa�da
	printf("IMC: %.2f\n", imc);
	//Classifica��o de acordo com a tabela IMC
	if (imc < 17){
		printf("Muito abaixo do peso\n");
	} else if (imc < 18.5){
		printf("Abaixo do peso\n");
	} else if (imc < 25){
		printf("Peso normal\n");
	} else if (imc < 30){
		printf("Acima do peso\n");
	} else if (imc < 35){
		printf("Obesidade I\n");
	} else if (imc < 40){
		printf("Obesidade II (severa)\n");
	} else
		printf("Obesidade III (m�rbita)\n");
	system("pause");
	return 0;
}
