/*
    Faça um programa que leia 3 nomes(matriz) com suas respectivas idades (vetor) e depois mostre qual o nome da pessoa que tem a maior idade. 
*/
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "portuguese");

    int i, j, higherAge, age[3];
    char name[3];

    for (i = 0; i < 3; i++)
    {
        for ( j = 0; j < 3; j++)
        {
            printf("Digite o seu nome: ");
            scanf("%s", name[i]);

            if(HigherAge > age[i])
            {
                Higherage = age[i];
            }
        }
    }
    




    return 0;
}