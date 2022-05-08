/*
    Receber o nome de uma fruta e mostre quantas vogais tem. 
*/
#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

int main()
{
    setlocale(LC_ALL, "portuguese");

    int i;

    char fruit[20], letter;

    printf("Digite o nome de uma fruta: ");
    scanf("%s", fruit); 

    for ( i = 0; i < 20; i++)
    {
        letter = toupper(fruit[i]);
        if(letter == 'S')
        {
            printf("test");
        }


    }

    return 0;
}