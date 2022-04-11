/*
    09/12/2021

    Prova
    Exercício 2
    
    Faça uma aplicação que receba um vetor de 10 posições.
    Após receber todos os valores, mostre na tela a média dos valores acima de 50.

   Autor: João Pedro
*/
#include <stdio.h>
#include <locale.h>

int main ()
{
	setlocale(LC_ALL, "Portuguese");
    
    int i, Cont, Number[10], Media;

    for (i = 0; i < 10; i++)
    {
        printf ("Digite 10 números: ");
        scanf ("%i", &Number[i]);

        if (Number[i] > 50)
        {
            Media += Number;

            Cont += 1;
        }
    }

    Media /= Cont;

    printf ("A media dos valores acima de 50 é: %i\n", Media);

	return 0;
}
