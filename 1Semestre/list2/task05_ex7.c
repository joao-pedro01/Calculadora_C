/*
    Tarefa 05
	Exerc�cio 7

    Implemente um programa que calcule aumento de sal�rio no ano corrente.
    Se o sal�rio for de at� R$ 1000.00 deve ser calculado o novo sal�rio com aumento de 5%, para um sal�rio maior que R$ 1000.00 o aumento � de 7%.
*/
#include <stdio.h>
#include <locale.h>

int main ()
{
    setlocale(LC_ALL, "Portuguese");
    
    printf ("Este programa ir� calcular o aumento do sal�rio no ano corrente \n\n");

    float Salary, Increase;

    printf ("Digite o seu sal�rio: ");
    scanf ("%f", &Salary);

    if (Salary < 1000)
    {
        Increase = Salary * 0.05;
    }
    else
    {
        Increase = Salary * 0.07;
    }
    Salary = Salary + Increase;

    printf ("\nO seu sal�rio com aumento � de: R$%.2f", Salary);

    return 0;
}