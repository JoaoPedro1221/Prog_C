//Fa�a um programa que receba a hora atual no formato 24 horas (0, 1, 2, ..., 23) e imprima o per�odo do dia:
//n (a) Manh� (5h �s 11h) (b) Tarde (12h �s 17h) (c) Noite (18h �s 4h)

#include <stdio.h>
#include <stdlib.h>

main ()
{
system("cls");
int hora;
printf("Qual hora deseja consultar?\n");
scanf("%d",&hora);
{
    if (hora >=5 && hora<=11)
    {
        printf("\nEsse horario corresponde ao periodo da MANHA\n");
    }
    if (hora >=12 && hora<=17)
    {
        printf("\nEsse horario corresponde ao periodo da TARDE\n");
    }
    if (hora >=18 && hora<=23 || hora>=0 && hora<=4)
    {
        printf("\nEsse horario corresponde ao periodo da NOITE\n");
    }
    else
    {
        printf("\nHorario INVALIDO, tente novamente...\n");
        system("pause");
        system("cls");
        return main();
    }
}
system("pause");
return 0;

}
