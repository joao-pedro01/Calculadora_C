/*
	Tarefa 07
	Exerc�cio 1
	
	Receber um intervalo (dois valores) e em seguida um n�mero. 
	Informar se o n�mero est� dentro, fora ou nas extremidades do intervalo. 
	Por exemplo, em um intervalo de 1 a 3, 0 est� fora, 2 est� dentro e 1 est� em uma extremidade do intervalo.
	
	Autor: Jo�o Pedro
*/
#include <stdio.h>
#include <locale.h>

int main ()
{
	setlocale(LC_ALL, "Portuguese");
	
	float Num1, Num2, Int;	
	
	printf ("/// \n");
	
	// Input
	printf ("Digite o primeiro n�mero: ");
	scanf ("%f", &Num1);
	printf ("Digite o segundo n�mero: ");
	scanf ("%f", &Num2);
	printf ("Digite o terceiro n�mero n�mero: ");
	scanf ("%f", &Int);
	
	// Processamento
	if (Num1 == Int || Num2 == Int)
	{
		printf ("O numero %.2f est� na extremidade", Int);
	}
	else if  (Num1 >= Int && Num2 <= Int || Num1 <= Int && Num2 >= Int)
	{
		printf ("O n�mero %.2f est� no intervalo entre %.2f e %.2f", Int, Num1, Num2);
		
	}
	else
	{
		printf ("O n�mero %.2f n�o est� no intervalo entre %.2f e %.2f", Int, Num1, Num2);
	}
	
	return 0;
}
