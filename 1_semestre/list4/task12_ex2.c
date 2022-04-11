#include <stdio.h>
#include <locale.h>

int main ()
{
	setlocale(LC_ALL, "Portuguese");
	
	int i, Number, Result;
	
	printf ("Este programa irá fazer a tabuada do número informado\n");
	
	printf ("\nDigite o número: ");
	scanf ("%Number", &Number);
	
	for (i = 1; i <= 10; i++)
	{
		Result = i * Number;
		
		printf ("\n%i x %i = %i\n", Number, i, Result);
	}
}
