/*
    Tarefa 14
    Exerc�cio 8
    
    Receber 10 n�meros e armazen�-los em um vetor. Ao final, exibir os 10 n�meros na ordem que foram recebidos.

   Autor: Jo�o Pedro
*/
#include <stdio.h>
#include <locale.h>

int main ()
{
	setlocale(LC_ALL, "Portuguese");
    
    int i, Number [10];

    for (i = 0; i < 10; i++)
    {
        printf ("Digite 10 n�meros: ");
        scanf ("%i", &Number[i]);
    }
    for (i = 0; i < 10; i++)
    {
        printf ("%i\n", Number[i]);
    }

	return 0;
}