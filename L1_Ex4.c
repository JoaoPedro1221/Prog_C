//Faça um programa que receba o salário de um funcionário e o percentual de aumento, calcule e mostre o valor do aumento e o novo salário.

#include<stdio.h>
#include<stdlib.h>
int main(void)
{
  float salario, percentual, nsalario;

  printf("Digite o seu salario atual: R$");
  scanf("%f",&salario);

  printf("Digite o seu percentual de aumento: ");
  scanf("%f",&percentual);

  nsalario = salario * ((percentual/100) + 1);

  printf("Seu novo salario com o aumento vai ser= R$%.2f\n",nsalario);

  system("pause");
  return 0;
}
