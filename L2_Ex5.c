// Escreva um algoritmo que leia a idade de uma pessoa e informe sua classe eleitoral:
// (a) Não eleitor (abaixo de 16 anos);
// (b) Eleitor obrigatório (entre 18 e 65 anos, inclusive);
// (c) Eleitor facultativo (entre 16 e 18 anos ou acima dos 65 anos).

#include <stdio.h>
#include <stdlib.h>

main ()
{
int idade;
{
printf("Insira sua idade em anos: ");
scanf("%d",&idade);

}
    {
     if (idade < 16)
        {
        printf("Voce nao pode votar ainda, voce ainda nao e um eleitor\n");
        }
     if (idade >= 18 && idade < 65)
        {
        printf("Seu voto e obrigatorio! Nao se esqueca de votar!\n");
        }
     if (idade >=16 && idade < 18 || idade >= 65)
        {
        printf("Seu voto e facultativo, voce pode votar mas nao e obrigatorio!\n");
        }
    }

system("pause");
return 0;
}
