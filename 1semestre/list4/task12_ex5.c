#include <stdio.h>
#include <locale.h>

int main ()
{
	setlocale(LC_ALL, "Portuguese");
	
	int i;
	
	i = 12;
	
	for (i > i; i < 79; i++)
	{	
		printf ("%i\n", i);
		i += 1;
	}

	return 0;
}
