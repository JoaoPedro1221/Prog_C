//Faça um algoritmo que receba três notas e seus pesos, calcule e mostre a média ponderada

#include<stdio.h>
#include<stdlib.h>
int main(void)
{
  float n1, n2, n3, p1, p2, p3, media;

  printf("Digite a primeira nota do aluno: ");
  scanf("%f",&n1);

  printf("Digite o peso da primeira nota do aluno: ");
  scanf("%f",&p1);

  printf("Digite a segunda nota do aluno: ");
  scanf("%f",&n2);

  printf("Digite o peso da segunda nota do aluno: ");
  scanf("%f",&p2);

  printf("Digite a terceira nota do aluno: ");
  scanf("%f",&n3);

  printf("Digite o peso da terceira nota do aluno: ");
  scanf("%f",&p3);

  media = ((n1*p1) + (n2*p2) + (n3*p3)) / (p1+p2+p3);

  printf("Media Ponderada do aluno= %.2f\n",media);

  system("pause");
  return 0;
}
