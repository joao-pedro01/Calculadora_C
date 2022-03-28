#include <stdio.h>
#include <stdlib.h>
#include <ctype.h> //Para usar com o towpper
#include <locale.h>
/*
    Faça um programa que receba um código e conforme este código oriente a conduta médica conforme a tabela abaixo:
*/

int main()
{
    setlocale (LC_ALL, "Portuguese");
    int Cod;
    char Op;
    
    do
    {
        do
        {
            float Cont = 4.0, ContSeg;
            
            system ("cls");
            printf("    *================ MENU PRINCIPAL ================*\n");
            printf("    |                                                |\n");
            printf("    |                                                |\n");
            printf("    |               1 - Dor de Cabeça                |\n");
            printf("    |                                                |\n");
            printf("    |               2 OU 3 - Gripe                   |\n");
            printf("    |                                                |\n");
            printf("    |               5 OU 7 - Vírose                  |\n");
            printf("    |                                                |\n");
            printf("    ==================================================\n");

            printf ("\nDigite o código da doença: ");
            scanf ("%i", &Cod);

            if (Cod < 0 || Cod > 7 || Cod == 6)
            {
                printf ("\nCódigo inválido!!!\n");
                printf ("Digite novamente\n\n");

                _sleep (1500); //Pausa de 1.5seg
                for (ContSeg = 0; ContSeg <= 3; ContSeg++)
                {
                    Cont -= 1.0;
                    system("cls");
                    printf ("O sistema irá reiniciar em: %.2f segundos\n", Cont);
                    _sleep (1000);
                }
                system ("cls"); //Limpa tela (CLEAR)
            }
        } while (Cod < 0 || Cod > 7 || Cod == 4 || Cod == 6);

        switch (Cod)
        {
            case 1:
                printf ("\nDescrição: Dor de cabeça\n");
                printf ("Orientação: Analgésico e descanço");
            break;

            case 2:
            case 3:
                printf ("\nDescrição: Gripe\n");
                printf ("Orientação: Acompanhar a evolução e sintomas\n");
            break;

            case 5:
            case 7:
                printf ("\nDescrição: Vírose\n");
                printf ("Orientação: Descanso e boa alimentação\n");
            break;
        }

        do
        {
            printf ("Tem mais pacientes? (S/N)\n");
            Op = getche(); //Obtem a tecla apertada
            Op = toupper(Op); //Converte a tecla para maiuscula
            _sleep (1000);

            if (Op != 78 && Op != 83)
            {
                printf ("\n tecla digitada é inválida!!!\n");
                printf ("Digite novamente\n\n");
            }
        } while (Op != 78 && Op != 83);
    } while (Op == 83);
}