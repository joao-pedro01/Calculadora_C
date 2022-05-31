#include <stdio.h>
#include <string.h>
#include <stdlib.h> // fucntion system
#include <locale.h>
#include <ctype.h>

int main()
{
    setlocale(LC_ALL, "portuguese");

    int count = 3;
    char login[20], passwordUser[20], password[9]="fatec123";

    printf("Digite seu nome: ");
    scanf("%s", &login);
    do
    {
        printf("Digite a senha: ");
        scanf("%s", &passwordUser);

        if(strcmp(passwordUser, password) == 0)
        {
            printf("\nUsuário permitido\n");

            count = 0;
        }
        else
        {
            count --;
            printf("Você tem mais %i tentativas\n", count);
            printf("\n\n");
        }
    } while (count != 0);

    return 0;
}