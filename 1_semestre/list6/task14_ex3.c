/*
    Tarefa 14
    Exercício 3
    
    Receber 10 números e armazená-los em um vetor.
    Ao final, exibir o dobro de cada um dos números.

   Autor: João Pedro
*/
#include <stdio.h>
#include <locale.h>

int main ()
{
	setlocale(LC_ALL, "Portuguese");
    
    int i, Number [10], Result[10];

    printf ("O programa irá receber 10 números\n");
    
    for (i = 0; i < 10; i++)
    {
        printf ("Digite o %i número: ", i+1);
        scanf ("%i", &Number[i]);

        Result[i] = Number[i] * 2;
    }
    printf ("\n");
    for (i = 0; i < 10; i++)
    {
        printf ("O dobro de %i é: %i\n", Number[i], Result[i]);
    }

	return 0;
}