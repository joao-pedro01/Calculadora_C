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
		printf ("A idade digitada é inválida!");
	}
	else if (age >= 0 && age < 2)
	{
		printf ("Você é bebê");
	}
	else if (age >= 2 && age < 10)
	{
		printf ("Você é criança");
	}
	else if (age >= 10 && age < 24)
	{
		printf ("Você é adolescente");
	}
	else if (age >= 24 && age < 60) 
	{
		printf ("Você é adulto");
	}
	else if (age >= 60 && age < 120)
	{
		printf ("Você é idoso");
	}
	else if (age >= 120)
	{
		printf ("Você é matusalém");
	}
	
	return 0;
}
