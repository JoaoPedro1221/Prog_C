//O �ndice de massa corporal (IMC) � utilizado para identificar o peso ideal de uma pessoa. O c�lculo do IMC � feito dividindo a massa pelo quadrado da altura. Escreva um programa que, dada a massa e a altura de uma pessoa, imprima o valor do seu IMC.

#include <stdio.h>
#include <stdlib.h>

main ()
{
float massa, altura, imc;
{
printf("Qual a sua Massa? ");
scanf("%f",&massa);
printf("Qual a sua altura? ");
scanf("%f",&altura);
}
imc = (massa / (pow(altura, 2)));

printf("\nSeu IMC e: %.2f\n\n", imc);
system("pause");
return 0;

}
