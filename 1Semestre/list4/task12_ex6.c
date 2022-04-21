#include <stdio.h>
#include <locale.h>

int main ()
{
	setlocale(LC_ALL, "Portuguese");
	
	int i, Num;
	
	//Num = 0;
	printf ("%i", Num);
	for (i = 0; i < 2000; i++)
	{
		Num = Num+1;
		
		printf ("%i\n",Num);
	}
}
