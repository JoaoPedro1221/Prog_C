//Faça um algoritmo que receba três notas e seus pesos, calcule e mostre a média ponderada

#include<stdio.h>
#include<stdlib.h>
int main(void)
{
  float salario, nsalario;

  printf("Digite o seu salario atual: R$");
  scanf("%f",&salario);

  nsalario = salario * 1.25;

  printf("Seu novo salario com o aumento vai ser= R$%.2f\n",nsalario);

  system("pause");
  return 0;
}
