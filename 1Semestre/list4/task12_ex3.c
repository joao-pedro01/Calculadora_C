#include <stdio.h>
#include <locale.h>

int main ()
{
	setlocale(LC_ALL, "Portuguese");
	
	int i;
	float Number;
	
	printf ("Este programa ir� informar se o n�mero digitado � positivo, negativo ou nulo!!! \n\n");
	
	for (i > 1; i < 10; i++)
	{
		printf ("Digite o n�mero: ");
		scanf ("%f", &Number);
		
		if (Number == 0)
		{
			printf ("\nO n�mero informado � Nulo\n\n");
		}
		else if (Number > 0)
		{
			printf ("\nO n�mero informado � Positivo\n\n");
		}
		else
		{
			printf ("\nO n�mero informado � Negativo\n\n");
		}
	}
}
