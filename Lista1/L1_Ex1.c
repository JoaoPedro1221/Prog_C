//Faça um algoritmo que receba três notas, calcule e mostre a média aritmética

#include<stdio.h>
#include<stdlib.h>
int main(void)
{
  float n1, n2, n3, media;

  printf("Digite a primeira nota do aluno: ");
  scanf("%f",&n1);

  printf("Digite a segunda nota do aluno: ");
  scanf("%f",&n2);

  printf("Digite a terceira nota do aluno: ");
  scanf("%f",&n3);

  media = (n1 + n2 + n3) / 3;

  printf("Media do Aluno= %.2f\n",media);

  system("pause");
  return 0;
}
