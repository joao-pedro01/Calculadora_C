/*
    Tarefa 13
    Exerc�cio 6

    Desenvolver um programa que recebe a altura e o sexo (1 para masculino, 2 para feminino) de 15 pessoas.
    Este programa dever� mostrar no final:

    - a menor altura do grupo;(OK)
    - a m�dia de altura das mulheres;(OK)
    - o n�mero de homens;(OK)
    - o sexo da pessoa mais alta.

    Autor: Jo�o Pedro
*/
#include <stdio.h>
#include <locale.h>

int main ()
{
	setlocale(LC_ALL, "Portuguese");
	
    int i, Op, People = 15;
    float Height, ShorterHeight = 0, ContMen = 0, MediumHeight, HeightMen, HeightWoman;

    for (i = 0; i < People; i++)
    {
        do
        {
            printf ("Digite 1 para masculino e 2 para feminino: ");
            scanf ("%i", &Op);
            
            // Erro operador inv�lido
            if (Op != 1 && Op != 2)
            {
                printf ("\nDigite um operador v�lido!!!\n\n");
            }
        } while (Op != 1 && Op != 2);

        printf ("Digite a sua altura: ");
        scanf ("%i", &Height);

        // Contador para homem e m�dia de mulheres
        if (Op == 1)
        {
            ContMen += 1;
            
            if (HeigthMen > Heigth)
            {
                HeightMen = Height;
            }
        }
        else
        {
            MediumHeight += Height;

            if (HeightWoman > Height)
            {
                HeightWoman = Height;
            }
        }

        // Define menor altura
        if (ShorterHeight < Height)
        {
            ShorterHeight = Height;
        }
    }
    MediumHeight /= People;
    
    printf ("A menor altura do grupo foi: %.2f", ShorterHeight);
    printf ("A m�dia da altura das mulheres �: %.2f", MediumHeight);
    printf ("Quantidade de homens foi: %i", ContMen);
    
    if (HeightMen > HeightWoman)
    {
        printf ("O sexo masculino � o mais alto!!!");
    }
    else if (HeightWoman > HeightMen)
    {
        printf ("O sexo feminino � o mais alto!!!");
    }
	return 0;
}