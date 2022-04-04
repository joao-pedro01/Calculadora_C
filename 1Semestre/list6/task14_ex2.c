/*
    Tarefa 14
    Exercício 2
    
    Receber 10 números e armazená-los em um vetor. Ao final, exibir os números na ordem inversa da que foram recebidos

   Autor: João Pedro
*/
#include <stdio.h>
#include <locale.h>

int main ()
{
	setlocale(LC_ALL, "Portuguese");
    
    int i, Number [10];

    printf ("O programa irá receber 10 números\n");

    for (i = 0; i < 10; i++)
    {
        printf ("Digite o %i número: ", i+1);

        scanf ("%i", &Number[i]);
    }
    for (i = 10; i >= 0; i--)
    {
        printf ("%i\n", Number[i]);
    }

	return 0;
}