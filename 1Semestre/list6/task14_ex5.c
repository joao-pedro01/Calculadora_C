/*
    Tarefa 14
    Exercício 5
    
    Receber 10 números e armazená-los em um vetor.Ao final, exibir quais foram os números negativos informados.

    Autor: João Pedro
*/
#include <stdio.h>
#include <locale.h>

int main ()
{
	setlocale(LC_ALL, "Portuguese");
    
    int i, Number[10], Cont = 0;

    for (i = 0; i < 10; i++)
    {
        printf ("Digite o %i número: ", i+1);
        scanf ("%i", &Number[i]);

        if (Number[i] < 0)
        {
            Cont += 1;
        }
    }
 
    printf ("Foi digitado %i números negativos\n", Cont);

	return 0;
}