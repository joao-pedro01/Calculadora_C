/*
	Tarefa 07
	Exercício 4

	Receber três números e dizer se existe algum número repetido entre eles. Em caso afirmativo, mostre qual o número esta repetido.

    Autor: João Pedro
*/
#include <stdio.h>
#include <locale.h>

int main ()
{
	setlocale(LC_ALL, "Portuguese");
	
	float Num1, Num2, Num3;	
	
	printf ("Este programa irá dizer se algum número está repetindo entre eles. \n\n");
    
    // Input
    printf ("Escreva o primeiro número: ");
    scanf ("%f", &Num1);
    printf ("Escreva o segundo número: ");
    scanf ("%f", &Num2);
    printf ("Escreva o terceiro número: ");
    scanf ("%f", &Num3);

    // Processamento e Output
    if (Num1 == Num2 || Num2 == Num3)
    {
        printf ("O número a se repetir é %.2f", Num2);
    }
    else if (Num1 == Num3)
    {
        printf ("O número a se repetir é %.2f", Num1);
    }

	return 0;
}
