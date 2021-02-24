#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/*  
  Fundamentos da Linguagem C
  @author Thiago Caramigo
*/

int main(int argc, char *argv[]) {
  //a linha abaixo configura o idioma para português
  setlocale(LC_ALL,"Portuguese");
  system("color 2f");
  printf("Olá Mundo\n");
  system("pause");
  // a linha abaixo "Limpa" a tela do prompt de comando
  system("cls");
  system("color 0b");
  printf("Código de cores:\n\n");
  printf("0 - Preto\n");
  printf("1 - Azul\n");
  printf("2 - Verde\n");
  printf("3 - Verde Agua\n");
  printf("4 - Vermelho\n");
  printf("5 - Roxo\n");
  printf("6 - Amarelo\n");
  printf("7 - Branco\n");
  printf("8 - Cinza\n");
  printf("9 - Azul Claro\n");
  printf("A - Verde Claro\n");
  printf("B - Verde Água Claro\n");
  printf("C - Vermelho Claro\n");
  printf("D - Lilás\n");
  printf("E - Amarelo Claro\n");
  printf("F - Branco Brilhante\n");
  system("pause");
  return 0;
}
