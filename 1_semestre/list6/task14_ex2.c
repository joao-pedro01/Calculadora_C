/*
    Tarefa 14
    Exerc�cio 2
    
    Receber 10 n�meros e armazen�-los em um vetor. Ao final, exibir os n�meros na ordem inversa da que foram recebidos

   Autor: Jo�o Pedro
*/
#include <stdio.h>
#include <locale.h>

int main ()
{
	setlocale(LC_ALL, "Portuguese");
    
    int i, Number [10];

    printf ("O programa ir� receber 10 n�meros\n");

    for (i = 0; i < 10; i++)
    {
        printf ("Digite o %i n�mero: ", i+1);

        scanf ("%i", &Number[i]);
    }
    for (i = 10; i >= 0; i--)
    {
        printf ("%i\n", Number[i]);
    }

	return 0;
}