/*
	Tarefa 07
	Exerc�cio 5
	
	Receber tr�s n�meros e mostrar qual � o maior deles.
    Autor: Jo�o Pedro
*/
#include <stdio.h>
#include <locale.h>

int main ()
{
	setlocale(LC_ALL, "Portuguese");
    
    float Num1, Num2, Num3, Result;

    printf ("Este programa ir� receber tr�s n�mero e ir� mostrar qual � o maior deles. \n\n");

    // Input
    printf ("Digite o primeiro n�mero: ");
    scanf ("%f", &Num1);
    printf ("Digite o segundo n�mero: ");
    scanf ("%f", &Num2);
    printf ("Digite o terceiro n�mero: ");
    scanf ("%f", &Num3);
    
    // Processamento
    Result = Num1;
    if (Num2 > Num1 && Num2 > Num3)
    {
        Result = Num2;
    }
    if (Num3 > Num1 && Num3 > Num2)
    {
        Result = Num3;
    }

    // Output
    printf ("\nO maior n�mero �: %.2f", Result);

	return 0;
}
