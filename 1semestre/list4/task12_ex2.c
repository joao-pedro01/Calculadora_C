#include <stdio.h>
#include <locale.h>

int main ()
{
	setlocale(LC_ALL, "Portuguese");
	
	int i, Number, Result;
	
	printf ("Este programa ir� fazer a tabuada do n�mero informado\n");
	
	printf ("\nDigite o n�mero: ");
	scanf ("%Number", &Number);
	
	for (i = 1; i <= 10; i++)
	{
		Result = i * Number;
		
		printf ("\n%i x %i = %i\n", Number, i, Result);
	}
}
