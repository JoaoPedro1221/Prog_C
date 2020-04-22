//Escreva um algoritmo que leia dois números e imprima-os em ordem crescente. Considere que os números possam ser iguais.
// (a) Use apenas uma comparação entre os números!
// (b) Use apenas uma instrução ESCREVA no seu algoritmo!

#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main(void)
{
  float n1, n2;
  printf("Digite o numero 1: ");
  scanf("%f",&n1);
  printf("Digite o numero 2: ");
  scanf("%f",&n2);

  {
        if ( n1 >= n2)
        {
        printf("Maior Numero %.2f, Menor Numero %.2f\n", n1, n2);
        }
        else
        {
        printf("Maior Numero %.2f, Menor Numero %.2f\n", n2, n1);
        }
  }
  system("pause");
  return 0;
}
