#include <stdio.h>
#include <stdlib.h>
#include <ctype.h> //Para usar com o towpper
#include <locale.h>
/*
    Fa�a um programa que receba um c�digo e conforme este c�digo oriente a conduta m�dica conforme a tabela abaixo:
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
            printf("    |               1 - Dor de Cabe�a                |\n");
            printf("    |                                                |\n");
            printf("    |               2 OU 3 - Gripe                   |\n");
            printf("    |                                                |\n");
            printf("    |               5 OU 7 - V�rose                  |\n");
            printf("    |                                                |\n");
            printf("    ==================================================\n");

            printf ("\nDigite o c�digo da doen�a: ");
            scanf ("%i", &Cod);

            if (Cod < 0 || Cod > 7 || Cod == 6)
            {
                printf ("\nC�digo inv�lido!!!\n");
                printf ("Digite novamente\n\n");

                _sleep (1500); //Pausa de 1.5seg
                for (ContSeg = 0; ContSeg <= 3; ContSeg++)
                {
                    Cont -= 1.0;
                    system("cls");
                    printf ("O sistema ir� reiniciar em: %.2f segundos\n", Cont);
                    _sleep (1000);
                }
                system ("cls"); //Limpa tela (CLEAR)
            }
        } while (Cod < 0 || Cod > 7 || Cod == 4 || Cod == 6);

        switch (Cod)
        {
            case 1:
                printf ("\nDescri��o: Dor de cabe�a\n");
                printf ("Orienta��o: Analg�sico e descan�o");
            break;

            case 2:
            case 3:
                printf ("\nDescri��o: Gripe\n");
                printf ("Orienta��o: Acompanhar a evolu��o e sintomas\n");
            break;

            case 5:
            case 7:
                printf ("\nDescri��o: V�rose\n");
                printf ("Orienta��o: Descanso e boa alimenta��o\n");
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
                printf ("\n tecla digitada � inv�lida!!!\n");
                printf ("Digite novamente\n\n");
            }
        } while (Op != 78 && Op != 83);
    } while (Op == 83);
}