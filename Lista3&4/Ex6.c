//Escreva um programa que leia dois n�meros reais e imprima o resultado das quatro opera��es b�sicas (adi��o, subtra��o, multiplica��o e divis�o) sobre esses n�meros.

#include <stdio.h>
#include <stdlib.h>

main ()
{
float num1, num2, ad, sub, mult, div;
{
printf("Digite o numero 1: ");
scanf("%f",&num1);
printf("Digite o numero 2: ");
scanf("%f",&num2);
}
ad = num1 + num2;
sub = num1 - num2;
mult = num1 * num2;
div = num1 / num2;

printf("\nOs resultados das 4 operacoes basicas para os numeros %.2f e %.2f sao:\n", num1, num2);
printf("Adicao: %.2f\n", ad);
printf("Subtracao: %.2f\n", sub);
printf("Multiplicacao: %.2f\n", mult);
printf("Divisao: %.2f\n\n", div);
system("pause");
return 0;

}
