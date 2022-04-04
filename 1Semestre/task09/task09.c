/*
    Tarefa 09
  
    Fa�a um programa que:
    Tento como base a hora inicial e final de um jogo, calcule a dura��o do dele, sabendo que o mesmo pode come�ar em um dia e terminar em outro, tendo uma dura��o m�nima de, 60 minutos e m�xima de 24 horas.

    Entrada
    A entrada cont�m dois valores inteiros representando a hora de in�cio e a hora de fim do jogo.

    Sa�da
    Apresente a dura��o do jogo conforme exemplo abaixo.



    Exemplos:
    In�cio: 16
    Fim: 2
    O Jogo Durou 10 Horas


    In�cio: 0
    Fim: 0
    O Jogo Durou 24 Horas


    In�cio: 2
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
        printf ("O tempo est� acima ou abaixo do tempo limite do jogo");
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