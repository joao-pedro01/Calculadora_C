/*
    Tarefa 14
    Exerc�cio 10
    
    10 Receber 10 n�meros inteiros e armazenar em um vetor.
    Imprimir os dados do vetor em ordem crescente.

    Autor: Jo�o Pedro
*/
#include <stdio.h> 
#include <locale.h>

int main ()
{
		
	setlocale(LC_ALL, "Portuguese");
	
	int i, j, Number[10], Vet;
	
	for (i = 0; i < 10; i++)
    {
		printf("Digite %i n�meros: ", i+1);
		scanf("%i", &Number[i]);
	}	
	
	for (i = 0; i < 10; i++)
    {
		for (j = i + 1; j < 10; j++)
        {
			if (Number[i] > Number[j])
            {
				Vet = Number[i];
				Number[i] = Number[j];
				Number[j] = Vet;
			}
		}
	}
	
	for (i = 0; i < 10; i++)
    {
		printf("Vetor na ordem crescente: %i\n", Number[i]);
	}

    return 0;
}