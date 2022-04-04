/*
	Tarefa 13
    Exercício 1
	
	Solicitar quantos números o usuário deseja informar, receber cada um deles e mostrar a média aritmética no final. 

	Autor: João Pedro
*/
#include <stdio.h>
#include <locale.h>

int main ()
{
	setlocale(LC_ALL, "Portuguese");
	
	int i, Op, Number, Media = 0;
	
    printf ("Digite a quantidade de número que quer saber a média: ");
	scanf ("%i", &Op);
	
	for (i = 0; i < Op; i++)
	{
		printf ("Digite os números que quer saber a média: ");
		scanf ("%i", &i);
		
		Media += Number;
	}
	
	Media /= Op;
	
	printf ("%i", Media);
	
	return 0;
}
