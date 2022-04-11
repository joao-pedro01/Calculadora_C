/*
    Tarefa 13
    Exercício 7

    Implemente um programa que imprime a figura abaixo. A quantidade de linhas da figura abaixo deverá ser informada pelo usuário, sendo o máximo de linhas permitido de 20 linhas, e o mínimo de 1 linha.
    No exemplo abaixo a quantidade de linhas é de 4.

        *
       ***
      ***** 
     ******* 
    
    Autor: João Pedro
*/
#include <stdio.h>
#include <locale.h>

int main ()
{
	setlocale(LC_ALL, "Portuguese");
	
    int i, j, QntLine;

    printf ("Digite a quantidade de linhas que deseja:");
    scanf ("%i", &QntLine);

    if (QntLine >= 1 && QntLine <= 20)
    {
        for (i = 1; i <= QntLine; i++)
        {
            for (j = 1; j <= QntLine-i; j++)

                printf (" ");

                for (j = 1; j <= 2 * i - 1; j++)

                    printf ("*");
                    printf ("\n");
        }
    }
	return 0;
}