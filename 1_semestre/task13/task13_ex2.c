/*
	Tarefa 13
    Exerc�cio 2
	
	Receber 10 n�meros e, ao final, informar quantos s�o positivos e quantos s�o negativos. 

	Autor: Jo�o Pedro
*/
#include <stdio.h>
#include <locale.h>

int main ()
{
	setlocale(LC_ALL, "Portuguese");
	
	int i, OpPos = 0, OpNeg = 0, Number;

	for (i = 0; i < 10; i++)
	{
		printf ("Digite um n�mero: ");
		scanf ("%i", &Number);
		
		if (Number != 0)
		{
			if (Number > 0)
			{
				OpPos += 1;
			}
			else
			{
				OpNeg += 1;
			}
		}
	}
	printf ("\nQuantiade de n�mero positivo(s): %i\n", OpPos);
	printf ("Quantiade de n�mero negativo(s): %i\n", OpNeg);
	
	return 0;
}