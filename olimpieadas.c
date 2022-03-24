#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
#include <ctype.h>
void menu();

int main()
{
    setlocale(LC_ALL, "portuguese");

    menu();

    return 0;
}
void menu()
{
    system("cls");
    printf("*=============================================*\n");
    printf("| P - Total de pontos do país                 |\n");
    printf("| G - Fínal do campeonato de Ginástica solo   |\n");
    printf("| S - Sair                                    |\n");
    printf("*=============================================*\n");
}//end menu