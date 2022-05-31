#include <stdio.h>
int setFile()
{
    int i, j;
    char confirmPassword[25];
    struct entrada
    {
        char username[40];
        char password[25];
    } user[2];
    for ( i = 0; i < 2; i++)
    {
        int returnPassword = 0;

        printf("Digite o nome de usuário: ");
        fflush(stdin); gets(user[i].username);
        do
        {
            printf("Digite a sua senha: "); gets(user[i].password);
            printf("Confirme a sua senha: "); gets(confirmPassword);

            if (strcmp(user[i].password, confirmPassword) == 0)
            {
                printf("\nAs senhas são iguais");

                returnPassword = 1;
            }
            else
            {
                printf("\nAs senhas são diferentes");
            }
        } while (returnPassword != 1); 
    }

    FILE*fp; // cria a variavel ponteiro
    fp = fopen("cadastro.txt", "w"); // cria o arquivo
    if(fp == NULL)
    {
        printf("Erro de criar de arquivo!!!");
        exit("Create file");
    }
    fwrite(&user, sizeof(user), 1, fp);
    fclose(fp);
    system("pause");

    return 0;
}