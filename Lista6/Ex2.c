#include <stdio.h>
#include <stdlib.h>
#include <string.h>

main()

    {
    //Variaveis
    int i, j, num, nota=0, rep=0;
    float porc, aux1;
    char gab[8];

    //Leitura Gabarito
    for(i=0 ; i<8 ; i++)
        {
        printf("Resposta da questao %d: ",i+1);
        fflush(stdin); //Limpa buffer teclado, para usar char dentro de for
        scanf("%c",&gab[i]);
        }
    printf("\n\nQuantidade de Alunos: ");
    scanf("%d",&num);

    char resp[num]; //char da resposta depois do numero de alunos para nao dar erro

    //leitura das respostas de cada aluno
    for(i=0 ; i<num ; i++)
        {
        printf("\n\ALUNO NUMERO %d\n",i+1);

        for(j=0 ; j<8 ; j++)
            {
            printf("Resposta da Questao %d = ",j+1);
            fflush(stdin);
            scanf("%c",&resp[j]);

            if(gab[j] == resp[j])
                {
                nota++;
                }
            }
        if(nota>=6)
            {
            printf("\nALUNO %d APROVADO, Nota: %d\n\n", i+1, nota);
            rep++;
            }

            else
            {
            printf("\nALUNO %d REPROVADO, Nota: %d\n\n", i+1, nota);
            }

            nota=0;
         }

    porc = (rep/num)*100;
    printf("Porcentagem de alunos aprovados= %.2f%%", porc);
}
