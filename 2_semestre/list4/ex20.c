/* 
    Fa�a um programa que receba 2 notas do aluno. Crie uma fun��o para consistir essas notas (somente aceite nota entre 0 e 10). Crie uma fun��o para calcular a m�dia e outra fun��o para verificar a situa��o do aluno. Se o aluno tiver m�dia menor que 3, deve aparecer a mensagem ?Reprovado?, sen�o, se a m�dia for entre 3 e 7, deve aparecer a mensagem ?Aluno em Exame?. Para os que tiverem m�dia maior ou igual a 7 deve aparecer ?Aprovado?.
*/
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <ctype.h>
float getGrade();


int main()
{
    float grade, students;

    getGrade();
}
float getGrade()
{
    int i;
    float gradeStudent[2];

    for (i = 0; i < 2; i++)
    {
        do
        {
            printf("Digite a nota %i do aluno: ", i+1);
            scanf("%f", &gradeStudent[i]);
        } while ();
        
        
    }
}