/*
    Tarefa 14
    Exercício 9
    
    Receber 10 números e armazená-los em um vetor.
    Copiar os números em outro vetor na ordem inversa e mostrar na tela todos os índices das posições em que se tem o mesmo número nos dois vetores.
    
    Exemplo:

    1 2 3 1 2 3 1 2 3 1

    1 3 2 1 3 2 1 3 2 1

    Índices: 0, 3, 6, 9

    Autor: João Pedro
*/
#include <stdio.h>
#include <locale.h>

int main ()
{
	setlocale(LC_ALL, "Portuguese");
    
    int i, j, Vet[10], Vet2[10], Position[10];

    for (i = 0; i < 10; i++)
    {
        printf ("Digite o %i número: ", i+1);
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
    
    printf ("\n\nÍndices:");

    for (i = 0; i < 10; i++)
    {
        if (Position[i] != 15)
        {
            printf (" %i", Position[i]);
        }
    }

	return 0;
}