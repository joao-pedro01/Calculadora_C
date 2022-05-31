#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

int main()
{
    int i, result, number = 5;

    FILE*fp; // cria a variavel ponteiro
    fp = fopen("tabuada.xls", "wt"); // cria o arquivo
    if(fp == NULL)
    {
        printf("Erro de criar de arquivo!!!");
        exit("Create file");
    }
    
    
    for ( i = 1; i <= 10; i++)
    {
        result = number * i;
        fprintf(fp, "%i * %i = %i\n", number, i, result);
        printf("%i * %i = %i\n", number, i, result);
    }
    printf("Arquivo excel gerado com sucesso\n");

    fclose(fp);
    system("pause");


    return 0;
}