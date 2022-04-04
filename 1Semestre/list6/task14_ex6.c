/*
    Tarefa 13
    Exercício 6
    
    Preencher automaticamente um vetor com todos os números pares entre 1 e 100 e depois exibir os números para o usuário.

   Autor: João Pedro
*/
#include <stdio.h>
#include <locale.h>
 
int main()
{
	
	setlocale(LC_ALL, "Portuguese");
	
	int i, num[100];
	
	for (i = 2; i < 100; i += 2)
    {
		num[i] = i;
	}
	
	for (i = 2; i < 100; i += 2)
    {
		printf (" %i  \n", num[i]);
	}
	
	return 0;
}