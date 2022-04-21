/*
	Tarefa 07
	Exercício 1

	Receber um número e informar se ele é positivo, negativo ou nulo.
	
	Autor: João Pedro
*/
#include <stdio.h>
#include <locale.h>

int main ()
{
	setlocale(LC_ALL, "Portuguese");
	
	float Number;	
	
	printf ("Este programa irá informar se o número digitado é positivo, negativo ou nulo!!! \n\n");
	
	// Input
	printf ("Digite o número: ");
	scanf ("%f", &Number);
	
	// Processamento e Output
	if (Number == 0)
	{
		printf ("O número informado é Nulo");
	}
	else if (Number > 0)
	{	
		printf ("O número informado é Positivo");
	}
	else
	{
		printf ("O número informado é Negativo");
	}
	
	return 0;
}
