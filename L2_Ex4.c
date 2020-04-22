// Suponha que em uma determinada empresa o chefe decida dar um aumento a todos os funcionário.
// Mas esse aumento depende do salário atual do funcionário:
// (a) Para salários menores ou igual a 1000,00 reais, o aumento será de 15%;
// (b) Para salários entre 1000,00 e 2000,00 reais, o aumento será de 10%;
// (c) Para salários maiores ou igual a 2000,00 reais, o aumento será de 5%.

#include <stdio.h>
#include <stdlib.h>

main ()
{
float salario, nsalario;
{
printf("Digite o seu salario atual: R$");
scanf("%f",&salario);

}
    {
     if (salario <= 1000)
        {
        nsalario = (salario*1.15);
        printf("Seu aumento foi de 15 porcento!\nSeu novo salario e: R$%.2f\n",nsalario);
        }
     if (salario > 1000 && salario < 2000)
        {
        nsalario = (salario*1.10);
        printf("Seu aumento foi de 10 porcento!\nSeu novo salario e: R$%.2f\n",nsalario);
        }
     if (salario >= 2000)
        {
        nsalario = (salario*1.05);
        printf("Seu aumento foi de 5 porcento!\nSeu novo salario e: R$%.2f\n",nsalario);
        }
    }

system("pause");
return 0;
}
