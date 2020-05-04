#include <stdio.h>
#include <stdlib.h>

main ()
{
//INICIO MENU
int op;
{
system("cls");
printf("####################################################\n");
printf("################## MENU DE OPCOES ##################\n");
printf("####################################################\n");
printf("##                                                ##\n");
printf("## Escolha uma forma geometrica:                  ##\n");
printf("##                                                ##\n");
printf("##  1. Quadrado                                   ##\n");
printf("##  2. Retangulo                                  ##\n");
printf("##  3. Triangulo Equilatero                       ##\n");
printf("##  4. Triangulo Retangulo (catetos iguais)       ##\n");
printf("##  5. Paralelogramo                              ##\n");
printf("##  6. Sair                                       ##\n");
printf("##                                                ##\n");
printf("####################################################\n");
printf("####################################################\n\n");
printf("Qual o numero correspondente a sua opcao?: \n");
scanf("%d",&op);
//FIM MENU
}
    //INICIO OPCAO DO QUADRADO
    if (op==1)
    {
        system("cls");
        int lado, area, perimetro, i, linha, desenho;
        printf("====================================================\n");
        printf(" QUADRADO\n");
        printf("====================================================\n\n");
        printf("   Digite o lado do quadrado:  ");
        scanf("%d",&lado);

        area = lado * lado;
        perimetro = lado * 4;

        printf("\n   AREA:  %d\n", area);
        printf("   PERIMETRO:  %d\n\n", perimetro);

        //imprimir moldura SUPERIOR
        desenho=-2;
        printf("   ");
        while (desenho < lado)
            {
            printf( "__" );
            desenho += 1;
            }
            printf("\n");

        //imprimir moldura lateral desenho da linha em branco INICIO
         printf("  |  ");
         linha=0;
         while (linha < lado)
            {
            printf( "  " );
            linha += 1;
            }
         printf("  |\n");

        //imprimir quadrado e suas molduras
        for (i=0; i<lado;i++)
        {
         linha=0;
         printf("  |  ");
         while (linha < lado)
            {
            printf( "@ " );
            linha += 1;
            }
         printf("  |\n");
        }

        //imprimir moldura lateral desenho linha em branco FINAL e MOLDURA INFERIOR
        printf("  |");
         linha=-2;
         while (linha < lado)
            {
            printf( "__" );
            linha += 1;
            }
         printf("|\n\n");


        system("pause");
        return main();
    }
    //FIM OPCAO DO QUADRADO
    //INICIO OPCAO RETANGULO
    if (op==2)
    {
        system("cls");
        int ladomaior, ladomenor, area, perimetro, i, linha, desenho;
        printf("====================================================\n");
        printf(" RETANGULO\n");
        printf("====================================================\n\n");
        printf("   Digite o maior lado do retangulo:  ");
        scanf("%d",&ladomaior);
        printf("   Digite o menor lado do retangulo:  ");
        scanf("%d",&ladomenor);

        area = ladomaior * ladomenor;
        perimetro = (ladomaior * 2) + (ladomenor * 2);

        printf("\n   AREA:  %d\n", area);
        printf("   PERIMETRO:  %d\n\n", perimetro);

        //imprimir moldura SUPERIOR
        desenho=-2;
        printf("   ");
        while (desenho < ladomaior)
            {
            printf( "__" );
            desenho += 1;
            }
            printf("\n");

        //imprimir moldura lateral desenho da linha em branco INICIO
         printf("  |  ");
         linha=0;
         while (linha < ladomaior)
            {
            printf( "  " );
            linha += 1;
            }
         printf("  |\n");

        //imprimir retangulo e suas molduras
        for (i=0; i<ladomenor;i++)
        {
         linha=0;
         printf("  |  ");
         while (linha < ladomaior)
            {
            printf( "@ " );
            linha += 1;
            }
         printf("  |\n");
        }

        //imprimir moldura lateral desenho linha em branco FINAL e MOLDURA INFERIOR
        printf("  |");
         linha=-2;
         while (linha < ladomaior)
            {
            printf( "__" );
            linha += 1;
            }
         printf("|\n\n");


        system("pause");
        return main();
    }
    //FIM OPCAO RETANGULO
    //INICIO OPCAO TRIANGULO EQUILATERO
    if (op==3)
    {
        system("cls");
        int lado, perimetro, i, j, x, z, teste, linha;
        float area;
        printf("====================================================\n");
        printf(" TRIANGULO EQUILATERO\n");
        printf("====================================================\n\n");
        printf("   Digite o lado do Triangulo Retangulo:  ");
        scanf("%d",&lado);

        //calculos necessarios
        area = ((pow(lado,2) * sqrt(3)) / 4);
        perimetro = (lado * 3);
        teste = lado;
        printf("\n   AREA:  %.2f\n", area);
        printf("   PERIMETRO:  %d\n\n", perimetro);
        //ponto no topo do triangulo
        for(z=0; z<(lado); z++)
        {
            printf(" ");
        }
        printf("    .\n");

        //imprimir triangulo e suas molduras
        for (j=0; j<=lado; j++)
        {
        printf("   ");
        for (x=teste; x>0; x--)
        {
        printf(" ");
        }
        printf("/ ");
        teste -= 1;
        for (i=0; i< j; i++)
        {
        printf ("@ ");
        }
        printf("\\\n");
        }
        linha = 0;
        printf("  /");
        while (linha < lado)
            {
            printf( "__" );
            linha += 1;
            }
        printf ("___\\\n\n");
        system("pause");
        return main();
    }
    //FIM OPCAO TRIANGULO EQUILATERO
    //INICIO TRIANGULO RETANGULO
    if (op==4)
    {
        system("cls");
        int lado, perimetro, i, j, x, z, teste, linha;
        float area;
        printf("====================================================\n");
        printf(" TRIANGULO RETANGULO\n");
        printf("====================================================\n\n");
        printf("   Digite o lado do Triangulo Retangulo:  ");
        scanf("%d",&lado);

        //calculos necessarios
        area = ((lado*2) / 2);
        perimetro = (lado * 3);
        teste = lado;
        printf("\n   AREA:  %.2f\n", area);
        printf("   PERIMETRO:  %d\n\n", perimetro);
        printf("  |\\\n");
        printf("  | \\\n");
        //imprimir triangulo e suas molduras
        for (j=0; j<=lado; j++)
        {
        printf("  | ");
        teste -= 1;
        for (i=0; i< j; i++)
        {
        printf ("@");
        }
        printf(" \\\n");
        }
        linha = 0;
        printf("  |___");
        while (linha < lado)
            {
            printf("_");
            linha += 1;
            }
        printf("\\");
        printf("\n");
        system("pause");
        return main();
    }
    //FIM OPCAO TRIANGULO RETANGULO
    //INCIO OPCAO PARALELOGRAMO
    if (op==5)
    {
      system("cls");
        int lado, area, perimetro, i, z, mold, linha, desenho;
        printf("====================================================\n");
        printf(" PARALELOGRAMO\n");
        printf("====================================================\n\n");
        printf("   Digite o lado do paralelogramo:  ");
        scanf("%d",&lado);

        area = lado * lado;
        perimetro = lado * 4;

        printf("\n   AREA:  %d\n", area);
        printf("   PERIMETRO:  %d\n\n", perimetro);

        //imprimir moldura SUPERIOR
        desenho=-4;
        printf("  ");
        while (desenho < lado)
            {
            printf( "_" );
            desenho += 1;
            }
            printf("\n");

        //imprimir moldura lateral desenho da linha em branco INICIO
         printf(" \\  ");
         linha=0;
         while (linha < lado)
            {
            printf( " " );
            linha += 1;
            }
         printf("  \\\n");

        //imprimir paralelogramo e suas molduras
        mold=0;
        for (i=0; i<lado;i++)
        {
         linha=0;

         for (z=0; z<mold; z++)
         {
             printf(" ");
         }
         mold +=1;
         printf("  \\  ");
         while (linha < lado)
            {
            printf( "@" );
            linha += 1;
            }
         printf("  \\\n");
        }

        //imprimir moldura lateral desenho linha em branco FINAL e MOLDURA INFERIOR
        for (z=0; z<mold; z++)
         {
             printf(" ");
         }
        printf("  \\");
         linha=-4;
         while (linha < lado)
            {
            printf( "_" );
            linha += 1;
            }
         printf("\\\n\n");


        system("pause");
        return main();
    }
    //FIM OPCAO PARALELOGRAMO
    if (op==6)
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
