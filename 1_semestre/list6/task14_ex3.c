/*
    Tarefa 14
    Exerc�cio 3
    
    Receber 10 n�meros e armazen�-los em um vetor.
    Ao final, exibir o dobro de cada um dos n�meros.

   Autor: Jo�o Pedro
*/
#include <stdio.h>
#include <locale.h>

int main ()
{
	setlocale(LC_ALL, "Portuguese");
    
    int i, Number [10], Result[10];

    printf ("O programa ir� receber 10 n�meros\n");
    
    for (i = 0; i < 10; i++)
    {
        printf ("Digite o %i n�mero: ", i+1);
        scanf ("%i", &Number[i]);

        Result[i] = Number[i] * 2;
    }
    printf ("\n");
    for (i = 0; i < 10; i++)
    {
        printf ("O dobro de %i �: %i\n", Number[i], Result[i]);
    }

	return 0;
}