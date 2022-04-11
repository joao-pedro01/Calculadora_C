/*
    09/12/2021
    
    Prova
    Exercício 1
    
    Faça uma aplicação que receba 10 valores inteiros. Mostre na tela se o valor recebido é positivo, negativo ou nulo.
    Antes de fechar a aplicação mostre também a quantidade de valores positivos, negativos e nulos.



   Autor: João Pedro
*/
#include <stdio.h>
#include <locale.h>

int main ()
{
	setlocale(LC_ALL, "Portuguese");
    
    int i, Number[10], Pos = 0, Neg = 0, Null = 0;

    for (i = 0; i < 10; i++)
    {
        printf ("Digite o %i número: ", i+1);
        scanf ("%i", &Number[i]);

        if (Number[i] == 0)
        {
            printf ("O número informado é Nulo\n\n");

            Null += 1;
        }
        else if (Number[i] > 0)
        {	
            printf ("O número informado é Positivo\n\n");

            Pos += 1;
        }
        else
        {
            printf ("O número informado é Negativo\n\n");

            Neg += 1;
        }
    }

    printf ("\nFoi digitado %i números Positivos, %i Negativos e %i Nulos\n", Pos, Neg, Null);

	return 0;
}