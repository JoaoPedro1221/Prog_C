// Faça um algoritmo que receba quatro notas de um aluno, calcule e mostre a média aritmética das notas e a mensagem de aprovado ou reprovado, considerando para aprovação média 6.

#include <stdio.h>
#include <stdlib.h>

main ()
{
float n1, n2, n3, n4, media;
{
printf("Digite a Nota 1: ");
scanf("%f",&n1);

printf("Digite a Nota 2: ");
scanf("%f",&n2);

printf("Digite a Nota 3: ");
scanf("%f",&n3);

printf("Digite a Nota 4: ");
scanf("%f",&n4);

media = ((n1 + n2 + n3 + n4) / 4);

system("cls"); //Comando para limpar a tela!

}
    {
     if (media >= 6)
        {
        printf("Parabens, voce foi aprovado!\nSua nota foi %.2f\n",media);
        }
     else
        {
        printf("Voce foi reprovado!\nSua nota foi %.2f\n",media);
        }
    }

system("pause");
return 0;
}

