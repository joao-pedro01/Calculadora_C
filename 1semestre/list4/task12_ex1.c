#include <stdio.h>
#include <locale.h>

int main ()
{
	setlocale(LC_ALL, "Portuguese");
	
	int i, Number;
	
	i = 10;

	scanf ("%i", &i);

	for (i > 1; i < 10; i++)
	{
		printf ("Digite o número que quer o dobro dele: ");
		scanf ("%i", &Number);
		
		printf ("\nO dobro de %i é: ", Number);
		
		Number = Number * 2;
		
		printf ("%i\n\n", Number);
	}
	
	return 0;
}
