/*
    Tarefa 13
    Exerc�cio 8
    
    Desenvolver um programa que recebe a quantidade de alunos que est�o cursando o 3� semestre.
    Para cada aluno receber a quantidade de disciplinas que cursou no 2� semestre e tamb�m a nota final relativa a cada disciplina.
    Calcular e mostrar a m�dia de cada aluno para verificar o aproveitamento do �ltimo semestre cursado.

   Autor: Jo�o Pedro
*/
#include <stdio.h>
#include <locale.h>

int main ()
{
	setlocale(LC_ALL, "Portuguese");
	
    int i, j, Students, QntMateria;
    float RelativeNote, FinalGrade;

    printf ("Digite a quantidade de alunos que est�o cursando o 3� semestre: ");
    scanf ("%i", &Students);

    for (i = 0; i < Students; i++)
    {
        printf ("\nDigite a quantidade de mat�rias que cursou no 2� semestre: ");
        scanf ("%i", &QntMateria);
        printf ("\n");

        for (j = 0; j < QntMateria; j++)
        {
            printf ("Digite a nota relativa da %i mat�ria: ", j+1);
            scanf ("%f", &RelativeNote);

            FinalGrade += RelativeNote;
        }
        FinalGrade /= QntMateria;
        
        printf ("\nA m�dia do %i aluno para o aproveitamento do �ltimo semestre cursado: %.2f\n", i+1, FinalGrade);
    }

	return 0;
}