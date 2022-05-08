/*
	Tarefa 07
	Exercício 7

	Um triângulo pode ser classificado de acordo com as medidas de seus lados:

    Um triângulo equilátero possui todos os lados de mesma medida.
    Um triângulo isósceles possui dois lados de mesma medida.
    Um triângulo escaleno possui as medidas dos três lados diferentes.
    Receber os três lados de um triângulo em qualquer ordem (chame de lado1, lado2 e lado3) e classificá-lo em equilátero, isósceles ou escaleno.

    Autor: João Pedro
*/
#include <stdio.h>
#include <locale.h>

int main ()
{
	setlocale(LC_ALL, "Portuguese");
	
	int Lado1, Lado2, Lado3;
	
	printf ("Este programa irá classificar o triângulo de acordo com as medidos dos seus lados. \n\n");

    printf ("Se quer fazer adição digite 1, subtração digite 2, multiplicação digite 3 \n");

    // Input
    printf ("Lado 1: ");
    scanf ("%i", &Lado1);
    printf ("Lado 2: ");
    scanf ("%i", &Lado2);
    printf ("Lado 3: ");
    scanf ("%i", &Lado3);

    // Processamento e Output
    if (Lado1 == Lado2 && Lado1 == Lado3)
    {
        printf ("Triângulo equilátero");
    }
    else if (Lado1 == Lado2 || Lado1 == Lado3 || Lado2 == Lado3)
    {
        printf ("Triângulo isósceles");
    }
    else
    {
        printf ("Triângulo escaleno");
    }
	return 0;
}