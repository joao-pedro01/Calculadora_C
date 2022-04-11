#include <stdio.h>
#include <locale.h>

int main ()
{
	setlocale(LC_ALL, "Portuguese");
	
	float age;
	
	printf ("Digite a sua idade: ");
	scanf ("%f", &age);
	
	if (age < 0)
	{
		printf ("A idade digitada � inv�lida!");
	}
	else if (age >= 0 && age < 2)
	{
		printf ("Voc� � beb�");
	}
	else if (age >= 2 && age < 10)
	{
		printf ("Voc� � crian�a");
	}
	else if (age >= 10 && age < 24)
	{
		printf ("Voc� � adolescente");
	}
	else if (age >= 24 && age < 60) 
	{
		printf ("Voc� � adulto");
	}
	else if (age >= 60 && age < 120)
	{
		printf ("Voc� � idoso");
	}
	else if (age >= 120)
	{
		printf ("Voc� � matusal�m");
	}
	
	return 0;
}
