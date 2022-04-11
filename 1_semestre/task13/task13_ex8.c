/*
    Tarefa 13
    Exercício 8
    
    Desenvolver um programa que recebe a quantidade de alunos que estão cursando o 3º semestre.
    Para cada aluno receber a quantidade de disciplinas que cursou no 2º semestre e também a nota final relativa a cada disciplina.
    Calcular e mostrar a média de cada aluno para verificar o aproveitamento do último semestre cursado.

   Autor: João Pedro
*/
#include <stdio.h>
#include <locale.h>

int main ()
{
	setlocale(LC_ALL, "Portuguese");
	
    int i, j, Students, QntMateria;
    float RelativeNote, FinalGrade;

    printf ("Digite a quantidade de alunos que estão cursando o 3º semestre: ");
    scanf ("%i", &Students);

    for (i = 0; i < Students; i++)
    {
        printf ("\nDigite a quantidade de matérias que cursou no 2º semestre: ");
        scanf ("%i", &QntMateria);
        printf ("\n");

        for (j = 0; j < QntMateria; j++)
        {
            printf ("Digite a nota relativa da %i matéria: ", j+1);
            scanf ("%f", &RelativeNote);

            FinalGrade += RelativeNote;
        }
        FinalGrade /= QntMateria;
        
        printf ("\nA média do %i aluno para o aproveitamento do último semestre cursado: %.2f\n", i+1, FinalGrade);
    }

	return 0;
}