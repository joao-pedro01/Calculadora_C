/*
    Tarefa 13
    Exercício 5
    
    A prefeitura de uma cidade de 15 habitantes fez uma pesquisa coletando salário e número de filhos de cada um. 
    A prefeitura deseja saber: 
   
    - média do salário da população;(ok)
    - média do número de filhos;(ok)
    - maior salário;(ok)
    - percentual de pessoas com salário até R$ 500,00.(ok)

   Autor: João Pedro
*/
#include <stdio.h>
#include <locale.h>

int main ()
{
	setlocale(LC_ALL, "Portuguese");
	
    int i, Population = 15, QntChild, AveregeChild = 0;
    float Salary, HighestSalary = 0, AveregeSalary = 0, AveregeSalary500;

    for (i = 0; i < Population; i++)
    {
        printf ("\nDigite o seu salario: ");
        scanf ("%f", &Salary);

        printf ("\nTem quantos filhos?\n");
        scanf ("%i", &QntChild);

        AveregeSalary += Salary;
        AveregeChild += QntChild;

        if (Salary > HighestSalary)
        {
            HighestSalary = Salary;
        }
        if (Salary <= 500)
        {
            AveregeSalary500 += 1;
        }
    }

    AveregeSalary /= Population;
    AveregeChild /= Population;
    AveregeSalary500 = (100 * AveregeSalary500) / Population;

    printf ("\nA média salarial da população é: R$ %.2f\n", AveregeSalary);
    printf ("A média de filhos da população é: R$ %i\n", AveregeChild);
    printf ("O percentual de pessoas com salário até R$ 500,00 é: %.2f%%\n", AveregeSalary500);

	return 0;
}