/*
	Tarefa 07
	Exercício 5
	
	Receber três números e mostrar qual é o maior deles.
    Autor: João Pedro
*/
#include <stdio.h>
#include <locale.h>

int main ()
{
	setlocale(LC_ALL, "Portuguese");
    
    float Num1, Num2, Num3, Result;

    printf ("Este programa irá receber três número e irá mostrar qual é o maior deles. \n\n");

    // Input
    printf ("Digite o primeiro número: ");
    scanf ("%f", &Num1);
    printf ("Digite o segundo número: ");
    scanf ("%f", &Num2);
    printf ("Digite o terceiro número: ");
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
    printf ("\nO maior número é: %.2f", Result);

	return 0;
}
