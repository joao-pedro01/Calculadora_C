/*
	Tarefa 07
	Exercício 6

	Implementar uma calculadora onde o usuário digita dois números e uma opção, que deve ser 1 para adição, 2 para subtração, 3 para multiplicação e 4 para divisão. Mostrar na tela caso seja informada uma opção inválida.

    Autor: João Pedro
*/
#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

int main ()
{
	setlocale(LC_ALL, "Portuguese");
	
	float Num1, Num2, Result;
    int Op;
	
	printf ("Este programa é uma calculadora onde irá fazer adição, subtração ou multiplicação. \n\n");
	
    // Verificação do Operador se Op < 1 || Op > 4
    do
    {
        // Input
        printf ("Se quer fazer adição digite 1, subtração digite 2, multiplicação digite 3 \n");
        printf ("Digite o operador: ");
        scanf ("%i", &Op);

        // Mensagem de erro se Op < 1 || Op > 4
        if (Op < 1 || Op > 4)
        {
            printf ("Opção inválida\n\n");
        }
    }while (Op < 1 || Op > 4);

    // Input
    printf ("Digite o primeiro número: ");
    scanf ("%f", &Num1);
    printf ("Digite o primeiro número: ");
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