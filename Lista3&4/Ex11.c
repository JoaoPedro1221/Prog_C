// Escreva um programa que calcule e imprima a idade de uma pessoa, com base nos seguintes dados de entrada:
// (a) Dia, m�s e ano de nascimento de uma pessoa.
// (b) Dia, m�s e ano atual

#include <stdio.h>

int main( )
{
    int dianasc, diaatual, mesnasc, mesatual, anonasc, anoatual, calc1, calc2, calc3;
    //Nascimento
    printf("Digite seu dia de nascimento: ");
    scanf("%d", &dianasc);
    printf("Digite seu mes de nascimento: ");
    scanf("%d", &mesnasc);
    printf("Digite seu ano de nascimento: ");
    scanf("%d", &anonasc);
    //Atual
    printf ("Digite o dia atual: ");
    scanf ("%d", &diaatual);
    printf ("Digite o mes atual: ");
    scanf ("%d", &mesatual);
    printf ("Digite o ano atual: ");
    scanf ("%d", &anoatual);
    //if datas corretas
    if (diaatual > 31 || dianasc > 31 || mesatual > 12 || mesnasc > 12)
    {
        printf("\nVoce digitou algum dado incorreto!\nRepita a operacao!\n\n");
        system("pause");
        system("cls");
        return main();
    }
    else
    {
     //Calculo
    system("cls");
    calc1 = anoatual - anonasc;

    if (mesatual>mesnasc)
    {
        printf("Voce tem %d anos de idade!\n", calc1);
    }
    if (mesatual<mesnasc)
    {
        calc2 = calc1 - 1;
        printf("Voce tem %d anos de idade!\n", calc2);
    }
    if (mesatual == mesnasc)
    {
        if (diaatual>dianasc)
        {
            printf("Voce tem %d anos de idade!\n", calc1);
        }
        if (diaatual<dianasc)
        {
            calc3 = calc1 - 1;
            printf("Voce tem %d anos de idade!\n", calc3);
        }
    }
    system("pause");
    return 0;
  }
    }
