// Escreva um programa que leia dois n�meros inteiros e imprima todos os n�meros inteiros entre os dois n�meros lidos.
// Use a estrutura de repeti��o PARA.
// D�vida se "PARA" � o "FOR" ou "BREAK".


#include <stdio.h>

int main( )
{
    int i, num1, num2;
    printf("Digite o primeiro numero: ");
    scanf("%d", &num1);
    printf("Digite o segundo numero: ");
    scanf("%d", &num2);
    printf("\n");

    for (i = num1; i <= num2; i++)
    {
        printf("%d\n", i);
    }

    printf("\n");
    system("pause");
    return 0;
}
