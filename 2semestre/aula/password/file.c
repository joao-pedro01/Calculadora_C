#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
#include "set.c"
#include "get.c"

int main()
{
    setlocale(LC_ALL, "Portuguese");

    int op;

    system ("cls");
    printf("    *================ MENU PRINCIPAL ================*\n");
    printf("    |                                                |\n");
    printf("    |                                                |\n");
    printf("    |          1 - Armazenar dados                   |\n");
    printf("    |                                                |\n");
    printf("    |          2 - Ler os dados armazenados          |\n");
    printf("    |                                                |\n");
    printf("    |                                                |\n");
    printf("    ==================================================\n");

    printf("Digite uma op��o: ");
    scanf("%i", &op);

    switch (op)
    {
    case 1:
        setFile();
        break;
    
    case 2:
        getFile();
        break;
    default:
        printf("Digite uma op��o certa!!!");
        break;
    }
}