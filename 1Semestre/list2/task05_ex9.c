/*
    Tarefa 05
	Exercício 9

    Receber um ano e se este ano for bissexto exibir na tela ?Ano Bissexto?, senão exibir na tela ?Ano Não-Bissexto?.
    Um ano é bissexto se for divisível por 4, mas não por 100.
    Um ano também é bissexto se for divisível por 400.
*/
#include <stdio.h>
#include <locale.h>

int main ()
{
    setlocale(LC_ALL, "Portuguese");
    
    int Year;

    printf ("Este programa irá dizer se o ano é ou não Bissexto!!! \n");

    printf ("Digite o ano que deseja saber se é ou não Bissexto: ");
    scanf ("%i", &Year);

    if (Year % 4 == 0)
    {
        printf ("Ano Bissexto");
    }
    else
    {
        printf ("Ano Não-Bissexto");
    }

    return 0;
}