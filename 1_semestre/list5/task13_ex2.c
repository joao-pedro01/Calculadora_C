/*
	Tarefa 13
    Exercício 2
	
	Receber 10 números e, ao final, informar quantos são positivos e quantos são negativos. 

	Autor: João Pedro
*/
#include <stdio.h>
#include <locale.h>

int main ()
{
	setlocale(LC_ALL, "Portuguese");
	
	int i, OpPos = 0, OpNeg = 0, Number;

	for (i = 0; i < 10; i++)
	{
		printf ("Digite um número: ");
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
	printf ("\nQuantiade de número positivo(s): %i\n", OpPos);
	printf ("Quantiade de número negativo(s): %i\n", OpNeg);
	
	return 0;
}