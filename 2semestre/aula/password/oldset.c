#include <stdio.h>
int setFile()
{
    int i, j, returnPassword;
    char confirmPassword[25];
    struct entrada
    {
        char username[40];
        char password[25];
    } user[2];
    for ( i = 0; i < 2; i++)
    {
        printf("Digite o nome de usuário: ");
        fflush(stdin); gets(user[i].username);
        do
        {
            printf("Digite a sua senha: ");
            for ( j = 0; j < 25; j++)
            {
                user[i].password[j] = getch();
                if (user[i].password[j] == 13)
                {
                    break;
                }
                else
                {
                    printf("*");
                }
            }

            printf("Confirme a sua senha: ");
            for ( j = 0; j < 25; j++)
            {
                confirmPassword[j] = getch();
                if (confirmPassword[j] == 13)
                {
                    break;
                }
                else
                {
                    printf("*");
                }
            }

            if (strcmp(user[i].password, confirmPassword) == 0)
            {
                printf("\nAs senhas são iguais");

                returnPassword = 1;
            }
            else
            {
                printf("\nAs senhas são diferentes");
            }
        } while (returnPassword == 1);
        
        
    }

    FILE*fp; // cria a variavel ponteiro
    fp = fopen("cadastro.bin", "w"); // cria o arquivo
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