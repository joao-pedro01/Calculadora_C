/*
    Tarefa 14
    Exerc�cio 7
    
    Declarar um vetor de 10 posi��es j� inicializado com os n�meros de 1 a 10 e copi�-los para outro vetor.

    Autor: Jo�o Pedro
*/
#include <stdio.h>
#include <locale.h>

int main ()
{
	setlocale(LC_ALL, "Portuguese");
    
    int i, Vet[10] = {1,2,3,4,5,6,7,8,9,10}, Vet2[10];

    for (i = 0; i < 10; i++)
    {
        Vet2[i] = Vet[i];
    }
    for (i = 0; i < 10; i++)
    {
        printf ("%i\n", Vet2[i]);
    }

	return 0;
}