// Faça um algoritmo que receba o valor dos catetos de um triângulo, calcule e mostre o valor da hipotenusa

#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main(void)
{
  float cat1, cat2, hip;

  printf("Digite o valor do primeiro cateto: ");
  scanf("%f",&cat1);

  printf("Digite o valor do segundo cateto: ");
  scanf("%f",&cat2);

  hip = sqrt(pow(cat1, 2) + pow(cat2, 2));


  printf("A Hipotenusa do seu triangulo e= %.2f\n",hip);

  system("pause");
  return 0;
}

