/*
    Tarefa 14
    Exerc�cio 5
    
    Receber 10 n�meros e armazen�-los em um vetor.Ao final, exibir quais foram os n�meros negativos informados.

    Autor: Jo�o Pedro
*/
#include <stdio.h>
#include <locale.h>

int main ()
{
	setlocale(LC_ALL, "Portuguese");
    
    int i, Number[10], Cont = 0;

    for (i = 0; i < 10; i++)
    {
        printf ("Digite o %i n�mero: ", i+1);
        scanf ("%i", &Number[i]);

        if (Number[i] < 0)
        {
            Cont += 1;
        }
    }
 
    printf ("Foi digitado %i n�meros negativos\n", Cont);

	return 0;
}