/*
	Tarefa 4
	
	Faça um programa que receba a quantidade de horas trabalhadas e o valor da hora trabalhada de um funcionário.
	Calcular e mostrar o salário base (horas trabalhada * valor hora).
	
	Se o funcionário tiver um salário base menor que R$ 1500,00, dar uma bonificação de 15%, caso contrário dar uma bonificação de 5%.
	
	Mostrar o salário base, bonificação e o salário final.
	
	O salário final é igual ao salário base mais o valor da bonificação.
	
	
	Exemplo:
	
	horas trabalhadas =  80
	valor hora              = 10
	
	salário base              =  R$ 800,00
	bonificação de 15% =  R$ 120,00
	salário final              =  R$ 920,00
*/
#include <stdio.h>
#include <locale.h>

int main ()
{
	setlocale(LC_ALL, "Portuguese");
	
	float HoursWorked, ValueHour, BaseSalary, FinalSalary, Bonus;
	
	printf ("Digite as horas trabalhada: ");
	scanf ("%f", &HoursWorked);
	printf ("Digite o valor da hora: ");
	scanf ("%f", &ValueHour);
	
	BaseSalary = HoursWorked * ValueHour;

	if (BaseSalary <= 1500)
	{
		Bonus = 0.15;
	}
	else
	{
		Bonus = 0.05;
	}
	
	Bonus = BaseSalary * bonus;
	FinalSalary = BaseSalary + bonus;
	
	printf ("Seu salário base é de R$%.2f \n", BaseSalary);
	printf ("A bonificação do salário é de R$%.2f \n", Bonus);
	printf ("Seu salário com bonificação é de R$%.2f", FinalSalary);
	
	return 0;
}
