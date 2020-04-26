// Escreva um programa que leia um n�mero inteiro N >= 2 e imprima um tri�ngulo ret�ngulo.
// Por exemplo, se N = 3: (Dica: use la�os aninhados.)
// #
// # #
// # # #

#include <stdio.h>

int main( )
{
  int linha, coluna, num;
  printf("Insira um numero inteiro: ");
  scanf("%d", &num);
  linha = 0;

  while (linha <= num)
  {
    coluna = 0;
    while (coluna < linha)
    {
      printf( "#" );
      coluna += 1;
    }
    printf( "\n" );
    linha += 1;
  }
    printf("\n");
    system("pause");
    return 0;
}
