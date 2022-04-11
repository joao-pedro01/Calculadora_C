/*
    Tarefa 05
	Exercício 6
    Receber dois números e os apresente em ordem crescente.
    Utilize apenas a estrutura de decisão if, ou seja, sem o opcional else.
*/
#include <stdio.h>
#include <locale.h>

int main ()
{
    setlocale(LC_ALL, "Portuguese");
    
    float Num1, Num2;

    printf ("Este programa irá receber 2 números e apresentar na tela em ordem crescente \n\n");

    printf ("Digite o primeiro número: ");
    scanf ("%f", &Num1);
    printf ("Digite o segundo número: ");
    scanf ("%f", &Num2);

    
    if (Num1 > Num2)
    {
		printf ("%.2f; %.2f \n", Num2, Num1);  
		return 0;
    }
    
    printf ("%.2f; %.2f \n", Num1, Num2);

    return 0;
}
