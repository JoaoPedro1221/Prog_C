// Fa�a um programa que imprima na tela a mensagem de sauda��o a seguir, usando para isso uma estrutura de repeti��o.
// #######################
// #                     #
// #                     #
// #   SEJA BEM-VINDO    #
// #                     #
// #                     #
// #######################

#include <stdio.h>

int main( )
{
int linha1, linha2, aux1, aux2, linha41, linha42, linha5, linha7;

// LINHA 0
    printf("\n");

// LINHA 1
    linha1 = 0;
    while (linha1 <= 24)
    {
        printf( "#" );
        linha1 += 1;
    }

// LINHAS 2 E 3
        aux1 = 0;
        while (aux1 < 2)
        {
            printf("\n#");
                linha2 = 0;
                while (linha2 <= 22)
                {
                printf( " " );
                linha2 += 1;
                }
            printf("#");
            aux1 +=1;
        }

//LINHA 4 - BEM VINDO
        printf("\n#");
        linha41 = 0;
        while (linha41 <= 6)
            {
            printf( " " );
            linha41 += 1;
            }
                printf("BEM VINDO");
                    linha42 = 0;
                    while (linha42 <= 6)
                    {
                    printf( " " );
                    linha42 += 1;
                    }
        printf("#\n");

// LINHAS 5 E 6
        aux2 = 0;
        while (aux2 < 2)
        {
            printf("#");
                linha5 = 0;
                while (linha5 <= 22)
                {
                printf( " " );
                linha5 += 1;
                }
            printf("#\n");
            aux2 +=1;
        }

// LINHA 7
    linha7 = 0;
    while (linha7 <= 24)
    {
        printf( "#" );
        linha7 += 1;
    }

// LINHA 8 (SEM NADA)
    printf( "\n\n" );

// FIM
    system("pause");
    return 0;
  }
