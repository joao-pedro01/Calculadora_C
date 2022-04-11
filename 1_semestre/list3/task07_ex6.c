/*
	Tarefa 07
	Exerc�cio 6

	Implementar uma calculadora onde o usu�rio digita dois n�meros e uma op��o, que deve ser 1 para adi��o, 2 para subtra��o, 3 para multiplica��o e 4 para divis�o. Mostrar na tela caso seja informada uma op��o inv�lida.

    Autor: Jo�o Pedro
*/
#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

int main ()
{
	setlocale(LC_ALL, "Portuguese");
	
	float Num1, Num2, Result;
    int Op;
	
	printf ("Este programa � uma calculadora onde ir� fazer adi��o, subtra��o ou multiplica��o. \n\n");
	
    // Verifica��o do Operador se Op < 1 || Op > 4
    do
    {
        // Input
        printf ("Se quer fazer adi��o digite 1, subtra��o digite 2, multiplica��o digite 3 \n");
        printf ("Digite o operador: ");
        scanf ("%i", &Op);

        // Mensagem de erro se Op < 1 || Op > 4
        if (Op < 1 || Op > 4)
        {
            printf ("Op��o inv�lida\n\n");
        }
    }while (Op < 1 || Op > 4);

    // Input
    printf ("Digite o primeiro n�mero: ");
    scanf ("%f", &Num1);
    printf ("Digite o primeiro n�mero: ");
    scanf ("%f", &Num2);

    // Calculo, Processamento e Output
    if (Op == 1)
    {
        Result = Num1 + Num2;
        printf ("%.1f + %.1f = %.2f", Num1,Num2, Result);
    }
    else if (Op == 2)
    {
        Result = Num1 - Num2;
        printf ("%.1f - %.1f = %.2f", Num1,Num2, Result);  
    }
    else
    {
        Result = Num1 * Num2;
        printf ("%.1f x %.1f = %.2f", Num1,Num2, Result);
    }
 
	return 0;
}