// Escreva um algoritmo que leia um inteiro positivo x e imprima o resultado das pot�ncias de x, de 0 at� 10 (x0, x1, ... ,x10)

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

main ()
{
int i, num;
float calc;
{
printf("Digite o Numero: ");
scanf("%d",&num);

}
    for (i=0;i<11;i++)
    {
    calc = (pow(num, i));
    printf("Potencia %d de %d: %.2f\n", i, num, calc);
    }

system("pause");
return 0;
}
