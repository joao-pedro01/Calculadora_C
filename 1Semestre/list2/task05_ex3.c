/*
	Tarefa 05
	Exercício 3
	
	Receber numerador e denominador. 
	Calcular e mostrar o resultado da divisão, desde que possível (denominador diferente de zero).
    	Se não for possível dividir, apenas escreva “não existe divisão por zero”. 
*/
#include <stdio.h>
#include <locale.h>

int main ()
{
	setlocale(LC_ALL, "Portuguese");
	
	float Number, Denominator, Result;	
	
	printf ("Este programa irá calcular o resultado da divisão, desde que possível!!! \n\n");
	
	printf ("Digite o número que irá dividir: ");
	scanf ("%f", &Number);
	printf ("Digite o divisor: ");
	scanf ("%f", &Denominator);
	
	Result = Number / Denominator;
	
	if (Denominator != 0)
	{
		printf ("O resultado da divisão é: %.2f", Result);
	}
	else
	{	
		printf ("Não existe divisão por zero");
	}
	
	return 0;
}
