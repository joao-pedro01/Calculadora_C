/*
	Tarefa 05
	Exercício 1
	
	Receber um número e informar se ele é negativo ou não é negativo.
*/
#include <stdio.h>
#include <locale.h>

int main ()
{
	setlocale(LC_ALL, "Portuguese");
	
	float Number;	
	
	printf ("Este programa irá informar se o número digitado é negativo ou positivo!!! \n");
	
	printf ("Digite o número: ");
	scanf ("%f", &Number);
	
	if (Number < 0)
	{
		printf ("O número informado é negativo");
	}
	else
	{	
		printf ("O número informado não é negativo");
	}
	
	return 0;
}
