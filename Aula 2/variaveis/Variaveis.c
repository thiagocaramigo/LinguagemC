#include <stdio.h>
#include <stdlib.h>
#include <locale.h>



/*
  Estudo das variáveis
  @author Thiago Caramigo
*/



int main(int argc, char *argv[]) { 
  setlocale(LC_ALL,"Portuguese");
  char professor[30] = {"Thiago Caramigo"}; 
  char personal = 's';
  int periodo = 1;
  float cargaHoraria = 30.5;
  double salario = 3500.65;
  printf("ACADEMIA PHISICAL\n");
  printf("_____________________________\n");
  printf("Professor: %s\n", professor);
  printf("Personal Trainer(s/n): %c\n", personal);
  printf("Período: %d\n", periodo);
  printf("Carga horária semanal: %.1f\n", cargaHoraria);
  printf("Salário: R$ %.2lf\n", salario);
  printf("_____________________________\n");
  system("pause");
  system("cls");
  char aluno[50];
  char sexo;
  int idade;
  float peso, altura;
  printf("CADASTRO DE ALUNO \n\n");
  printf("Nome do aluno(a): ");
  gets(aluno);
  printf("Sexo(M/F): ");
  scanf("%c",&sexo);
  printf("Idade: ");
  scanf("%d", &idade);
  printf("Peso(kg): ");
  scanf("%f", &peso);
  printf("Altura(m): ");
  scanf("%f", &altura);
  printf("\n");
  system("pause");
  system("cls");
  printf("Ficha do aluno(a):\n");
  printf("______________________________\n");
  printf("Aluno: %s\n", aluno);
  printf("Sexo: %c\n", sexo);
  printf("Idade: %d\n", idade);
  printf("Peso: %.2f\n", peso);
  printf("Altura: %.2f\n", altura);
  printf("______________________________\n");
  system("pause");
  return 0;
}
