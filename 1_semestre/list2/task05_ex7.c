/*
    Tarefa 05
	Exercício 7

    Implemente um programa que calcule aumento de salário no ano corrente.
    Se o salário for de até R$ 1000.00 deve ser calculado o novo salário com aumento de 5%, para um salário maior que R$ 1000.00 o aumento é de 7%.
*/
#include <stdio.h>
#include <locale.h>

int main ()
{
    setlocale(LC_ALL, "Portuguese");
    
    printf ("Este programa irá calcular o aumento do salário no ano corrente \n\n");

    float Salary, Increase;

    printf ("Digite o seu salário: ");
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

    printf ("\nO seu salário com aumento é de: R$%.2f", Salary);

    return 0;
}