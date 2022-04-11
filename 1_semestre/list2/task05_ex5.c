/*
	Tarefa 05
	Exercício 5
	
	Receber dois números e mostrar o maior deles.
*/
#include <stdio.h>
#include <locale.h>

int main ()
{
	setlocale(LC_ALL, "Portuguese");
	
	float  Num1, Num2;
	
	printf ("Este programa irá informar se o maior número digitado!!! \n\n");
	
    printf ("Digite o primeiro número: ");
    scanf ("%f", &Num1);
	printf ("Digite o segundo número: ");
    scanf ("%f", &Num2);

    if (Num1 == Num2)
    {
        printf ("Os números digitado são iguais");
    }
    else if (Num1 > Num2)
    {
        printf ("O maior número digitado é: %.2f \n", Num1);
    }
    else 
    {
        printf ("O maior número digitado é: %.2f \n", Num2);
    }

	return 0;
}
