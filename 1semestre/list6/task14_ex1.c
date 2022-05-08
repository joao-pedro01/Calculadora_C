/*
    Tarefa 14
    Exercício 8
    
    Receber 10 números e armazená-los em um vetor. Ao final, exibir os 10 números na ordem que foram recebidos.

   Autor: João Pedro
*/
#include <stdio.h>
#include <locale.h>

int main ()
{
	setlocale(LC_ALL, "Portuguese");
    
    int i, Number [10];

    for (i = 0; i < 10; i++)
    {
        printf ("Digite 10 números: ");
        scanf ("%i", &Number[i]);
    }
    for (i = 0; i < 10; i++)
    {
        printf ("%i\n", Number[i]);
    }

	return 0;
}