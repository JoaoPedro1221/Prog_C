//Qual � a estrutura de repeti��o mais adequada para resolver cada um dos tr�s problemas anteriores? Por que?

// No problema 1 e 2, o "FOR" � mais adequado, mas quando se trata de menus, acho que o mais adequado � lidar com o "IF"
// Abaixo um exemplo do Exerc�cio 3 onde utiliza-se "IF"


#include <stdio.h>
#include <stdlib.h>

main ()
{
int op;
{
system("cls");
printf("Selecione uma das opcoes: \n");
printf("1 - Opcao 1 \n");
printf("2 - Opcao 2 \n");
printf("3 - Opcao 3 \n");
printf("0 - SAIR \n");
printf("Qual o numero correspondente a sua opcao?: \n");
scanf("%d",&op);

}
    if (op==1)
    {
        printf("A Opcao 1 esta Funcionando!\n:");
        system("pause");
        return 0;
    }
    if (op==2)
    {
        printf("A Opcao 1 esta Funcionando!\n");
        system("pause");
        return 0;
    }
    if (op==3)
    {
        printf("A Opcao 1 esta Funcionando!\n");
        system("pause");
        return 0;
    }
    if (op==0)
    {
        printf("Aperte -ENTER- para sair do Programa!\n");
        system("pause");
        return 0;
    }
    else
    {
        printf("Voce nao digitou uma opcao valida!\n");
        printf("Aperte -ENTER- para ir novamente para as opcoes\n");
        system("pause");
        return main();
    }
}
