/*
    Tarefa 09
  
    Faça um programa que:
    Tento como base a hora inicial e final de um jogo, calcule a duração do dele, sabendo que o mesmo pode começar em um dia e terminar em outro, tendo uma duração mínima de, 60 minutos e máxima de 24 horas.

    Entrada
    A entrada contém dois valores inteiros representando a hora de início e a hora de fim do jogo.

    Saída
    Apresente a duração do jogo conforme exemplo abaixo.



    Exemplos:
    Início: 16
    Fim: 2
    O Jogo Durou 10 Horas


    Início: 0
    Fim: 0
    O Jogo Durou 24 Horas


    Início: 2
    Fim: 16
    O Jogo Durou 14 Horas
*/
#include <stdio.h>
#include <locale.h>

int main ()
{
	setlocale(LC_ALL, "Portuguese");
	
    int HoraInicio, HoraFim, MinutoInicio, HoraFinal, MinutoFim, MinutoFinal;

    printf ("Digite a hora de inicio do jogo: ");
    scanf ("%i", &HoraInicio);
    //printf ("Digite os minutos de inicio do jogo: ");
    //scanf ("%i", &MinutoInicio);
    printf ("Digite a hora do fim do jogo: ");
    scanf ("%i", &HoraFim);
    //printf ("Digite os minutos de fim do jogo: ");
    //scanf ("%i", &MinutoFim);

    HoraFinal = HoraFim - HoraInicio;
    //MinutoFinal = MinutoFim - MinutoInicio;

    if (HoraFinal == 0)
    {
        HoraFinal = 24;
    }

    /*if (MinutoFinal == 60)
    {
        HoraFinal = HoraFinal + 1;
        MinutoFinal = 0;
    }*/
    
    if (HoraFinal > 24 /*|| MinutoFinal > 60*/)
    {
        printf ("O tempo está acima ou abaixo do tempo limite do jogo");
    }
    else if (HoraFinal != 1)
    {
        printf ("o tempo de jogo foi %i horas e %i minutos", HoraFinal, MinutoFinal);
    }
    else
    {
        printf ("o tempo de jogo foi %i hora e %i minutos", HoraFinal, MinutoFinal);
    }

    return 0;
}