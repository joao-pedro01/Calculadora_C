/*
    Tarefa 13
    Exerc�cio 4

    Receber 10 n�meros e, ao final, informar qual � o maior e o menor deles.

    Autor: Jo�o Pedro
*/
#include <stdio.h>
#include <locale.h>

int main ()
{
	setlocale(LC_ALL, "Portuguese");
	
	int i, Number, NumMin, NumMax;
	
    NumMin = 0;
    NumMax = 0;

	for (i = 0; i < 10; i++)
	{
		printf ("Digite os n�meros que quer saber a m�dia: ");
		scanf ("%i", &Number);
		
        if (Number > NumMax)
        {
		    NumMax = Number;
        }
        else if (Number < NumMin)
        {
            NumMin = Number;
        }
	}
	
	printf ("Numero mais baixo: %i\n", NumMin);
    printf ("Numero mais alto: %i\n", NumMax);
	
	return 0;
}