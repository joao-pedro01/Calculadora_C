/*
    Tarefa 14
    Exerc�cio 8
    
    Declarar um vetor de 10 posi��es j� inicializado com os n�meros de 1 a 10 e copi�-los para outro vetor na ordem inversa.

    Autor: Jo�o Pedro
*/
#include <stdio.h>
#include <locale.h>

int main ()
{
	setlocale(LC_ALL, "Portuguese");
    
    int i, Vet[10] = {1,2,3,4,5,6,7,8,9,10}, Vet2[10];

    for (i = 9; i > -1; i--)
    {
        Vet2[i] = Vet[i];
    }
    for (i = 9; i > -1; i--)
    {
        printf ("%i\n", Vet2[i]);
    }

	return 0;
}