/*
    09/12/2021
    
    Prova
    Exercício 3
    
    Faça uma aplicação que receba uma matriz de tamanho 5x5.
    Após receber todos os valores receba um número qualquer.
    Verifique se esse número existe na matriz. Se existir,  mostre as posições (linha e coluna) no qual esse número foi encontrado na matriz.
    
   Autor: João Pedro
*/
#include <stdio.h>
#include <locale.h>

int main ()
{
	setlocale(LC_ALL, "Portuguese");
    
    int i, j, Number[5][5], Verif;

    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 5; j++)
        {        
            printf ("Digite o numero da %i linha e %i coluna número: ", i, j);
            scanf ("%i", &Number[i][j]);
        }
    }

    printf ("\nDigite um número: ");
    scanf ("%i", &Verif);

    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 5; j++)
        {
            if (Verif == Number[i][j])
            {
               printf ("\nO número informado tem na %i linha e %i coluna", i, j);
            }
        }   
    }

	return 0;
}
