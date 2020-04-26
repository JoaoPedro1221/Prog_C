//Quantos segundos existem em x minutos? Escreva um programa que receba uma quantidade de minutos e imprima quantos segundos existem.

#include <stdio.h>
#include <stdlib.h>

main ()
{
float min, seg;
{

printf("Digite a Quantidade de Minutos: ");
scanf("%f",&min);

}
seg = min * 60;
printf("Existem %.0f segundos em %.0f minutos\n", seg, min);
system("pause");
return 0;
}
