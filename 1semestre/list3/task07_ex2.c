/*
	Tarefa 07
	Exercício 1
	
	Receber um intervalo (dois valores) e em seguida um número. 
	Informar se o número está dentro, fora ou nas extremidades do intervalo. 
	Por exemplo, em um intervalo de 1 a 3, 0 está fora, 2 está dentro e 1 está em uma extremidade do intervalo.
	
	Autor: João Pedro
*/
#include <stdio.h>
#include <locale.h>

int main ()
{
	setlocale(LC_ALL, "Portuguese");
	
	float Num1, Num2, Int;	
	
	printf ("/// \n");
	
	// Input
	printf ("Digite o primeiro número: ");
	scanf ("%f", &Num1);
	printf ("Digite o segundo número: ");
	scanf ("%f", &Num2);
	printf ("Digite o terceiro número número: ");
	scanf ("%f", &Int);
	
	// Processamento
	if (Num1 == Int || Num2 == Int)
	{
		printf ("O numero %.2f está na extremidade", Int);
	}
	else if  (Num1 >= Int && Num2 <= Int || Num1 <= Int && Num2 >= Int)
	{
		printf ("O número %.2f está no intervalo entre %.2f e %.2f", Int, Num1, Num2);
		
	}
	else
	{
		printf ("O número %.2f não está no intervalo entre %.2f e %.2f", Int, Num1, Num2);
	}
	
	return 0;
}
