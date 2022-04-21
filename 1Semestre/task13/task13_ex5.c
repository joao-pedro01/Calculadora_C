/*
    Tarefa 13
    Exerc�cio 5
    
    A prefeitura de uma cidade de 15 habitantes fez uma pesquisa coletando sal�rio e n�mero de filhos de cada um. 
    A prefeitura deseja saber: 
   
    - m�dia do sal�rio da popula��o;(ok)
    - m�dia do n�mero de filhos;(ok)
    - maior sal�rio;(ok)
    - percentual de pessoas com sal�rio at� R$ 500,00.(ok)

   Autor: Jo�o Pedro
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

    printf ("\nA m�dia salarial da popula��o �: R$ %.2f\n", AveregeSalary);
    printf ("A m�dia de filhos da popula��o �: R$ %i\n", AveregeChild);
    printf ("O percentual de pessoas com sal�rio at� R$ 500,00 �: %.2f%%\n", AveregeSalary500);

	return 0;
}