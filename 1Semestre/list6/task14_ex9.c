/*
    Tarefa 14
    Exerc�cio 9
    
    Receber 10 n�meros e armazen�-los em um vetor.
    Copiar os n�meros em outro vetor na ordem inversa e mostrar na tela todos os �ndices das posi��es em que se tem o mesmo n�mero nos dois vetores.
    
    Exemplo:

    1 2 3 1 2 3 1 2 3 1

    1 3 2 1 3 2 1 3 2 1

    �ndices: 0, 3, 6, 9

    Autor: Jo�o Pedro
*/
#include <stdio.h>
#include <locale.h>

int main ()
{
	setlocale(LC_ALL, "Portuguese");
    
    int i, j, Vet[10], Vet2[10], Position[10];

    for (i = 0; i < 10; i++)
    {
        printf ("Digite o %i n�mero: ", i+1);
        scanf ("%i", &Vet[i]);
    }
    
    for (i = 9; i > -1; i--)
    {
        for (j = 0; j < 10; j++)
        {
            Vet2[j] = Vet[i];
        }
    }
    
    for (i = 0; i < 10; i++)
    {
        Position[i] = 15;

        if (Vet2[i] == Vet[i])
        {
            Position[i] = i;            
        }
    }
    
    printf ("\n\n�ndices:");

    for (i = 0; i < 10; i++)
    {
        if (Position[i] != 15)
        {
            printf (" %i", Position[i]);
        }
    }

	return 0;
}