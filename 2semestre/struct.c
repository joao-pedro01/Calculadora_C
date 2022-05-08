#include <stdio.h>
#include <stdlib.h> // fucntion system
#include <locale.h>
#include <ctype.h>

int main()
{
    setlocale(LC_ALL, "portuguese");

    int i;

    struct cliente
    {
        char nome[20];
        int date, mounth, year;
    };

    struct cliente clientes;

    for (i = 0; i < 2; i++)
    {
        printf("Digite seu nome: ");
        scanf("%s", clientes.nome);

        printf("Digite o dia do seu nascimento: ");
        scanf("%i", clientes.date);

        printf("Digite o mês do seu nascimento: ");
        scanf("%i", clientes.mounth);

        printf("Digite o ano do seu nascimento: ");
        scanf("%i", clientes.year);
       // printf("%s: ", clientes.nome);
    }
}