/*
	Tarefa 13
    Exerc�cio 1
	
	Solicitar quantos n�meros o usu�rio deseja informar, receber cada um deles e mostrar a m�dia aritm�tica no final. 

	Autor: Jo�o Pedro
*/
#include <stdio.h>
#include <locale.h>

int main ()
{
	setlocale(LC_ALL, "Portuguese");
	
	int i, Op, Number, Media = 0;
	
    printf ("Digite a quantidade de n�mero que quer saber a m�dia: ");
	scanf ("%i", &Op);
	
	for (i = 0; i < Op; i++)
	{
		printf ("Digite os n�meros que quer saber a m�dia: ");
		scanf ("%i", &i);
		
		Media += Number;
	}
	
	Media /= Op;
	
	printf ("%i", Media);
	
	return 0;
}
