#include <stdio.h>
#include <locale.h>

int main ()
{
	setlocale(LC_ALL, "Portuguese");
	
	int i;
	float Number;
	
	printf ("Este programa irá informar se o número digitado é positivo, negativo ou nulo!!! \n\n");
	
	for (i > 1; i < 10; i++)
	{
		printf ("Digite o número: ");
		scanf ("%f", &Number);
		
		if (Number == 0)
		{
			printf ("\nO número informado é Nulo\n\n");
		}
		else if (Number > 0)
		{
			printf ("\nO número informado é Positivo\n\n");
		}
		else
		{
			printf ("\nO número informado é Negativo\n\n");
		}
	}
}
