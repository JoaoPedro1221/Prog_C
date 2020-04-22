// Tente adaptar seu algoritmo para ordenar três números.

#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main(void)
{
  float n1, n2, n3, maior, media, menor;
  printf("Digite o numero 1: ");
  scanf("%f",&n1);
  printf("Digite o numero 2: ");
  scanf("%f",&n2);
  printf("Digite o numero 3: ");
  scanf("%f",&n3);
  {
        if ( n1 >= n2 && n1>=n3 && n2>n3 )
        {
        maior = n1;
        media = n2;
        menor = n3;
        }
        if ( n1 >= n2 && n1>=n3 && n3>n2 )
        {
        maior = n1;
        media = n3;
        menor = n2;
        }
        if ( n2 >= n1 && n2>=n3 && n1>n3 )
        {
        maior = n2;
        media = n1;
        menor = n3;
        }
        if ( n2 >= n1 && n2>=n3 && n3>n1 )
        {
        maior = n2;
        media = n3;
        menor = n1;
        }
        if ( n3 >= n1 && n3>=n2 && n1>n2 )
        {
        maior = n3;
        media = n1;
        menor = n2;
        }

        if ( n3 >= n1 && n3>=n2 && n2>n1 )
        {
        maior = n3;
        media = n2;
        menor = n1;
        }

  printf("Maior numero: %.2f, Intermediario: %.2f, Menor numero: %.2f\n", maior, media, menor);

  }
  system("pause");
  return 0;
}
