/*
    Faça um programa que seja capaz de corrigir a prova teste que foi aplicada aos
    20 alunos da disciplina de programação.
    Nessa prova há 5 questões valendo 2 pontos cada.
    O programa deve receber inicialmente uma lista com as respostas
    corretas (gabarito), que será uma letra (podendo ser ?a?,?b?,?c?,?d?). 
    Depois o programa irá receber as respostas de cada aluno e mostrará
    sua respectiva nota (exemplo: se o aluno acertar 3 questões- cada uma
    vale 2 pontos- então, ele terá nota 6).
    Esse programa também mostrará a mensagem ?Precisa estudar um
    pouco mais!? para os que tiveram nota abaixo de 6. 
*/
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <ctype.h>
#define aluno 20
void nota(char gabarito[]);

int main()
{
    setlocale(LC_ALL, "portuguese");

    char gab[5] = { 'A', 'B', 'C', 'D', 'E' };

    nota(gab);

    return 0;
}
void nota(char gabarito[])
{
    int i, j, resp, grade;

    for (i = 0; i < aluno; i++)
    {
        grade = 0;
        for ( j = 0; j < 5; j++)
        {
            printf("\nInforme a resposta da pergunta %i do aluno %i: ", j+1, i+1);
            resp = getche(resp);
            resp = toupper(resp);

            if(resp == gabarito[j])
            {
                grade++;
            }
        }
        printf("\n\nA nota do aluno %i foi: %i\n\n", i+1, grade);   
    }   
}