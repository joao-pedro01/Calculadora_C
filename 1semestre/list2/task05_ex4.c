/*
	Tarefa 05
	Exercício 4
	
	Calcular a média de um aluno em um semestre com duas provas, onde M = (P1 + P2) / 2.
    	Se a média for maior ou igual a 5 escreva “aprovado”, senão calcule e mostre quanto faltou para atingir 5. 
*/
#include <stdio.h>
#include <locale.h>

int main ()
{
	setlocale(LC_ALL, "Portuguese");
	
	float P1, P2, M;	
	
	printf ("Este programa irá dizer se o aluno foi aprovado (média 5), senão irá mostrar quantos ponstos falta para ser aprovado. \n\n");
	
	printf ("Digite a nota da primeira prova (P1): ");
	scanf ("%f", &P1);
	printf ("Digite a nota da segunda prova (P2): ");
	scanf ("%f", &P2);
	
	M = (P1 + P2) / 2;
	
	if (M >= 5)
	{
		printf ("Aprovado");
	}
	else
	{	
		M = 5 - M;
		
		if (M != 1)
		{
			printf ("Faltou %.2f pontos para atingir a média 5", M);
		}
		else 
		{
			printf ("Faltou %.2f ponto para atingir a média 5", M);	
		}
		
	}
	
	return 0;
}
