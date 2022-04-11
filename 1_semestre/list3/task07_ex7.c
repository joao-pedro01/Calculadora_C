/*
	Tarefa 07
	Exerc�cio 7

	Um tri�ngulo pode ser classificado de acordo com as medidas de seus lados:

    Um tri�ngulo equil�tero possui todos os lados de mesma medida.
    Um tri�ngulo is�sceles possui dois lados de mesma medida.
    Um tri�ngulo escaleno possui as medidas dos tr�s lados diferentes.
    Receber os tr�s lados de um tri�ngulo em qualquer ordem (chame de lado1, lado2 e lado3) e classific�-lo em equil�tero, is�sceles ou escaleno.

    Autor: Jo�o Pedro
*/
#include <stdio.h>
#include <locale.h>

int main ()
{
	setlocale(LC_ALL, "Portuguese");
	
	int Lado1, Lado2, Lado3;
	
	printf ("Este programa ir� classificar o tri�ngulo de acordo com as medidos dos seus lados. \n\n");

    printf ("Se quer fazer adi��o digite 1, subtra��o digite 2, multiplica��o digite 3 \n");

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
        printf ("Tri�ngulo equil�tero");
    }
    else if (Lado1 == Lado2 || Lado1 == Lado3 || Lado2 == Lado3)
    {
        printf ("Tri�ngulo is�sceles");
    }
    else
    {
        printf ("Tri�ngulo escaleno");
    }
	return 0;
}