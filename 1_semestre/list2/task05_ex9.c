/*
    Tarefa 05
	Exerc�cio 9

    Receber um ano e se este ano for bissexto exibir na tela ?Ano Bissexto?, sen�o exibir na tela ?Ano N�o-Bissexto?.
    Um ano � bissexto se for divis�vel por 4, mas n�o por 100.
    Um ano tamb�m � bissexto se for divis�vel por 400.
*/
#include <stdio.h>
#include <locale.h>

int main ()
{
    setlocale(LC_ALL, "Portuguese");
    
    int Year;

    printf ("Este programa ir� dizer se o ano � ou n�o Bissexto!!! \n");

    printf ("Digite o ano que deseja saber se � ou n�o Bissexto: ");
    scanf ("%i", &Year);

    if (Year % 4 == 0)
    {
        printf ("Ano Bissexto");
    }
    else
    {
        printf ("Ano N�o-Bissexto");
    }

    return 0;
}