/*
    09/12/2021
    
    Prova
    Exerc�cio 1
    
    Fa�a uma aplica��o que receba 10 valores inteiros. Mostre na tela se o valor recebido � positivo, negativo ou nulo.
    Antes de fechar a aplica��o mostre tamb�m a quantidade de valores positivos, negativos e nulos.



   Autor: Jo�o Pedro
*/
#include <stdio.h>
#include <locale.h>

int main ()
{
	setlocale(LC_ALL, "Portuguese");
    
    int i, Number[10], Pos = 0, Neg = 0, Null = 0;

    for (i = 0; i < 10; i++)
    {
        printf ("Digite o %i n�mero: ", i+1);
        scanf ("%i", &Number[i]);

        if (Number[i] == 0)
        {
            printf ("O n�mero informado � Nulo\n\n");

            Null += 1;
        }
        else if (Number[i] > 0)
        {	
            printf ("O n�mero informado � Positivo\n\n");

            Pos += 1;
        }
        else
        {
            printf ("O n�mero informado � Negativo\n\n");

            Neg += 1;
        }
    }

    printf ("\nFoi digitado %i n�meros Positivos, %i Negativos e %i Nulos\n", Pos, Neg, Null);

	return 0;
}