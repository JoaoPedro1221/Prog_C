// Toda vez que João vai calcular as raízes de uma equação de 2o grau, esquece de algum detalhe e calcula errado.
// Para ajudar João a resolver as equações, escreva um algoritmo que calcule as raízes da equação de 2o grau.
// (a) Quais dados João precisa saber?
// (b) Qual é a fórmula de uma equação de 2o grau?
// (c) Uma equação de 2o grau sempre possui raízes? Quantas?
// (d) Quais casos é preciso verificar?

#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main(void)
{
  float n1, raiz;
  printf("Digite o numero que voce deseja calcular a raiz de 2o grau: ");
  scanf("%f",&n1);
  {
  raiz = sqrt(n1);
  printf("A raiz de 2o grau de %.2f e %.2f!\n", n1, raiz);
  }
  system("pause");
  return 0;
}
