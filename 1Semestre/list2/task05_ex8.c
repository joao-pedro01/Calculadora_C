/*
    Tarefa 05
	Exerc�cio 8

    Voc� assina um plano de 50 minutos no celular que custa R$ 50.00 por m�s, independente de utiliz�-los integralmente ou n�o.
    Por�m, se voc� utilizar mais do que 50 minutos, � cobrado mais R$ 1.50 por cada minuto que passar dos 50 do seu plano.
    Receber quantos minutos foram gastos no m�s e calcular o valor da conta.
*/
#include <stdio.h>
#include <locale.h>

int main ()
{
    setlocale(LC_ALL, "Portuguese");
    
    int Minute, Time;
    float Value;

    printf ("Esta programa ir� calcular o valor da sua conta, sendo R$ 1,50 cada minuto acima de 50 minutos!!! \n\n");

    printf ("Digite quantos minutos usou no m�s: ");
    scanf ("%i", &Minute);

    if (Minute <= 50)
    {
        Value = 50;
    }
    else
    {
        Time = Minute - 50;
        Value = Time * 1.50 + 50;
    }
    
    printf ("O valor da sua conta �: R$%.2f\n", Value);
    
    if (Minute <= 1)
    {
        printf ("Tempo de uso: %i minuto", Minute);
    }
    else
    {
        printf ("Tempo de uso: %i minutos", Minute);
    }

    return 0;
}