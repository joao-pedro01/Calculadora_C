/*
	Tarefa 05
	Exercício 2
	
	Receber um número e verificar se ele esta na faixa de 0 à 9.
    	Se sim, mostre uma mensagem afirmativa, caso contrário mostre uma mensagem indicando que o número não se encontra na faixa. 
*/
#include <stdio.h>
#include <locale.h>

int main ()
{
	setlocale(LC_ALL, "Portuguese");
	
	float Number;	
	
	printf ("Este programa irá informar se o número digitado se encontra na faixa de 0 a 9!!! \n\n");
	
	printf ("Digite o número: ");
	scanf ("%f", &Number);
	
	if (Number >= 0 && Number <=9)
	{
		printf ("O número informado se encontra na faixa de 0 à 9");
	}
	else
	{	
		printf ("O número informado não se encontra na faixa de 0 à 9");
	}
	
	return 0;
}
