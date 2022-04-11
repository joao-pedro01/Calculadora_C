#include <stdio.h>
#include <locale.h>
#define Students 30

int main ()
{
	setlocale(LC_ALL, "Portuguese");
	
	int i, Num1, Num2;
	
	printf ("Digite o primeiro número: ");
	scanf ("%i", &Num1);
	printf ("Digite o segundo número: ");
	scanf ("%i", &Num2);
	
	if (Num1 == Num2)
	{
		printf ("Os números são iguais!!!");
	}
	else if (Num1 > Num2)
	{
		for (i = Num2+1; i < Num1; i++)
		{
			printf ("%i ", i);
		}
	}
	else
	{
		for (i = Num1+1; i < Num2; i++)
		{
			printf ("%i ", i);
		}
	}
	
	return 0;
}
