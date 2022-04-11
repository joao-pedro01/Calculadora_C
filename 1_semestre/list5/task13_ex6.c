/*
    Tarefa 13
    Exerc�cio 6

    Desenvolver um programa que recebe a altura e o sexo (1 para masculino, 2 para feminino) de 15 pessoas.
    Este programa dever� mostrar no final:

    - a menor altura do grupo;(OK)
    - a m�dia de altura das mulheres;(OK)
    - o n�mero de homens;(OK)
    - o sexo da pessoa mais alta.(OK)

    Autor: Jo�o Pedro
*/
#include <stdio.h>
#include <locale.h>

int main ()
{
	setlocale(LC_ALL, "Portuguese");
	
    int i, Op;
    int People = 4, ContMen = 0, ContWoman = 0;
    float Height=100, ShorterHeight;
    float MediumHeight = 0, HeightMen = 0, HeightWoman = 0;

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
        scanf ("%f", &Height);

        // Contador, Maior altura
        if (Op == 1)
        {
            ContMen += 1;
            
            // Define o sexo que tem a maior altura
            if (HeightMen > Height)
            {
                HeightMen = Height;
            }
        }
        else
        {
            ContWoman += 1;

            MediumHeight += Height;

            // Define o sexo que tem a maior altura
            if (HeightWoman > Height)
            {
                HeightWoman = Height;
            }
        }

        // Define menor altura
        if (ShorterHeight > Height)
        {
            ShorterHeight = Height;
        }
    }
    MediumHeight /= ContWoman;
    
    printf ("\nA menor altura do grupo foi: %.2f\n", ShorterHeight);
    printf ("A m�dia da altura das mulheres �: %.2f\n", MediumHeight);
    printf ("Quantidade de homens foi: %i\n", ContMen);

    // Print do sexo da maior altura    
    if (HeightMen > HeightWoman)
    {
        printf ("O sexo masculino � o mais alto!!!\n");
    }
    else if (HeightMen < HeightWoman)
    {
        printf ("O sexo feminino � o mais alto!!!\n");
    }

	return 0;
}