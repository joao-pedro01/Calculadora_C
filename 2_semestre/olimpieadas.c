#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
#include <ctype.h>
void menu();
void LacarPontos();
int Ginasta();

int main()
{
    setlocale(LC_ALL, "portuguese");

    int Op, QntPaises, i;
    
    menu();

    Op = getch();
    towlower(Op);

    switch (Op)
    {
    case 'p':
        printf("Quantos pa�ses est�o participando?");
        scanf("%i", &QntPaises);
        for(i=0; i < QntPaises; i++)
        {
            LancarPontos();
        }
        break;
    
    default:
        break;
    }

    return 0;
}
void menu()
{
    system("cls");
    printf("*===============================================*\n");
    printf("|   P - Total de pontos do pa�s                 |\n");
    printf("|   G - F�nal do campeonato de Gin�stica solo   |\n");
    printf("|   S - Sair                                    |\n");
    printf("|   Digite uma op��o:___                        |\n");
    printf("*===============================================*\n");
}//end menu
void LancarPontos()
{
   int Ouro, Prata, Bronze, Total;

    printf("\n\nQuantas medalhas de Ouro o pa�s recebeu?");
    scanf("%i", &Ouro);
    printf("Quantas medalhas de Prata o pa�s recebeu?");
    scanf("%i", &Prata);
    printf("Quantas medalhas de Bronze o pa�s recebeu?");
    scanf("%i", &Bronze);

    Total = ((Ouro * 3) + (Prata * 2) + (Bronze * 1));

    printf("\n\nPa�s %i recebeu %i pontos\n", Total);
}
int Ginasta()
{
    int Ginasta[1], Juiz[1];

    
}