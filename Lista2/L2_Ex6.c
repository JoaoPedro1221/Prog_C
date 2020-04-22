// Escreva um algoritmo que leia três números. Em seguida, peça ao usuário que escolha uma dentre três opções de média a ser calculada.
// (a) Média aritmética: (n1 + n2 + n3)/3
// (b) Média geométrica: (n1∗n2∗3)(1 3)
// (c) Média ponderada: ((1∗n1) + (2∗n2) + (3∗n3))/6

#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main(void)
{
  float n1, n2, n3, media=0, opcao;
  system("cls");
  printf("Digite a opcao correspondente ao tipo de media que deseja calcular\n");
  printf("1 - Media Aritmetica\n");
  printf("2 - Media Geometrica\n");
  printf("3 - Media Ponderada\n");
  printf("0 - Sair do Programa\n");
  printf("Qual sua opcao: ");
  scanf("%f",&opcao);

  {
        if (opcao > 3 || opcao < 0)
        {
        printf("Opcao Incorreta!\n");
        system("pause");
        return main();
        }
        if (opcao == 0)
        {
        printf("Programa fechado!\n");
        return 0;
        }
  }

  printf("Digite a primeira nota do aluno: ");
  scanf("%f",&n1);

  printf("Digite a segunda nota do aluno: ");
  scanf("%f",&n2);

  printf("Digite a terceira nota do aluno: ");
  scanf("%f",&n3);

      {
     if (opcao == 1)
        {
        media = (n1 + n2 + n3) / 3;
        printf("Sua Media Aritmetica e: %.2f\n", media);
        }
     if (opcao == 2)
        {
        media = pow((n1*n2*n3), 0.333333);
        printf("Sua Media Geometrica e: %.2f\n", media);
        }
     if (opcao == 3)
        {
        float p1, p2, p3;
        {
        printf("Digite o peso da primeira nota do aluno: ");
        scanf("%f",&p1);

        printf("Digite o peso da segunda nota do aluno: ");
        scanf("%f",&p2);

        printf("Digite o peso da terceira nota do aluno: ");
        scanf("%f",&p3);
        }
        media = (((n1*p1) + (n2*p2) + (n3*p3)) / (p1+p2+p3));
        printf("Sua Media Ponderada= %.2f\n", media);
        }
      }

  system("pause");
  return 0;
}
