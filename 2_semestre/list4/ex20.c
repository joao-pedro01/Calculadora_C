/* 
    Fa�a um programa que receba 2 notas do aluno. Crie uma fun��o para consistir essas notas (somente aceite nota entre 0 e 10). Crie uma fun��o para calcular a m�dia e outra fun��o para verificar a situa��o do aluno. Se o aluno tiver m�dia menor que 3, deve aparecer a mensagem ?Reprovado?, sen�o, se a m�dia for entre 3 e 7, deve aparecer a mensagem ?Aluno em Exame?. Para os que tiverem m�dia maior ou igual a 7 deve aparecer ?Aprovado?.
*/
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <ctype.h>
// declara��o das functions
float getGrade();
float media(float grade);
void situation(float situation);

int main()
{
    setlocale(LC_ALL, "portuguese");

    float grade, students, soma;

    soma = getGrade();
    soma = media(soma);
    printf("\nA m�dia dos alunos da sala �: %.2f\n", soma);
    situation(soma);

    return 0;
}
/*
    function getGrad : float
    return soma
    function para retorno das notas
*/
float getGrade()
{
    int i;
    float gradeStudent[2], soma = 0;

    for (i = 0; i < 2; i++)
    {
        do
        {
            printf("Digite a %i� nota do aluno: ", i+1);
            scanf("%f", &gradeStudent[i]);
        } while (gradeStudent[i] < 0 || gradeStudent[i] > 10);
        soma += gradeStudent[i];
    }
    
    return soma;
}
/*
    function media : float
    return grade
    function para retorno das medias
*/
float media(float grade)
{
    float media;

    media = grade / 2;

    return media;
}
/*
    function getGrad : void
    return situation
    function para print da situa��o do aluno
*/
void situation(float situation)
{
    if(situation <= 3)
    {
        printf("Reprovado\n");
    }
    else if(situation > 3 && situation < 7)
    {
        printf("Em exame\n");
    }
    else
    {
        printf("Aprovado\n");
    }
}