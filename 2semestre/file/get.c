#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
 
int main()
{
    setlocale(LC_ALL, "Portuguese");

    int i;

    struct entrada
    {
        char nome[40];
        float salario;
    } funcionario[2];
    
    FILE*fp; // cria a variavel ponteiro
    fp = fopen("cadastro.bin", "rb"); // cria o arquivo
    if(fp == NULL)
    {
        printf("Erro de criar de ler!!!");
        exit("Create file");
    }
    fp = fread(&funcionario, sizeof(funcionario), 1, fp);


    for ( i = 0; i < 2; i++)
    {
        printf("%s\n", funcionario[i].nome);
        printf("%.2f\n", funcionario[i].salario);        
    }
    
    fclose(fp);
    
    system("pause");

    return 0;
}