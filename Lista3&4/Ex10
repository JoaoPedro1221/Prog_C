// Escreva um programa que leia dois n�meros reais: velocidade do ve�culo e velocidade m�xima da via.
// Em seguida, calcule o percentual em que a velocidade do ve�culo ultrapassou a velocidade m�xima da via e imprima o valor da multa que o motorista dever� pagar, com base na seguinte tabela:
// (a) Velocidade igual ou menor que o limite permitido: `N�o houve multa.`
// (b) Velocidade at� 20% acima do permitido: `O valor da multa � R$ 85,13.`
// (c) Velocidade entre 20% e 50% acima do permitido: `O valor da multa � R$ 127,69.`
// (d) Velocidade acima de 50% do permitido: `O valor da multa � R$ 574,62`

#include <stdio.h>

int main( )
{
float velveic, velmax;
printf("\nQual foi a velocidade do veiculo na via?\n");
scanf("%f",&velveic);
printf("\nQual e a velocidade maxima na via?\n");
scanf("%f",&velmax);

    {
        if (velveic <= velmax)
        {
           printf("\nVelocidade igual ou menor que o limite permitido: Nao houve multa.\n\n");
        }
        if (velveic > velmax && velveic < (velmax*1.2))
        {
           printf("\nVelocidade ate 20 porcento acima do permitido: O valor da multa e R$ 85,13.\n\n");
        }
        if (velveic >= (velmax*1.2) && velveic < (velmax*1.5))
        {
           printf("\nVelocidade entre 20 porcento e 50 porcento acima do permitido: O valor da multa e R$ 127,69.\n\n");
        }
        if (velveic >= (velmax*1.5))
        {
           printf("\nVelocidade acima de 50 porcento do permitido: O valor da multa e R$ 574,62.\n\n");
        }
    }
    system("pause");
    return 0;
  }
