/*
	Tarefa 07
	Exercício 3

	Calcular o IMC (Índice de Massa Corporal) de uma pessoa através da fórmula IMC = Peso (kg) / (Altura * Altura) (m). 
	Informe a classificação do IMC na tela de acordo com as regras abaixo:

	< 18,5 Abaixo do peso 
	De 18,5 a menor que 25,0 Saudável 
	De 25,0 a menor que 30,0 Sobrepeso
	De 30,0 a menor que 35,0 Obesidade Grau I 
	De 35,0 a menor que 40,0 Obesidade Grau II (severa) 
	De 40,0 em diante Obesidade Grau III (mórbida)

	Autor: João Pedro
*/
#include <stdio.h>
#include <locale.h>

int main ()
{
	setlocale(LC_ALL, "Portuguese");
	
	float Imc, Alt, Kg;	
	
	printf ("Este programa irá calcular seu IMC, e dizer se está dentro ou fora do IMC. \n\n");
	
	// Verificação dos input Alt e Kg
	do
	{
		// Input
		printf ("Digite a sua altura: ");
		scanf ("%f", &Alt);
		printf ("Digite o seu peso: ");
		scanf ("%f", &Kg);
		
		// Mensagem de erro se Kg e Alt < 0
		if (Alt <= 0 || Kg <= 0)
		{
			printf ("\nOs valores digitados são inválido!!!\n\n");
		}
	}while (Alt <= 0 || Kg <= 0);

	// Calc
	Imc = Kg / (Alt * Alt);

	// Processamento e Output
	if (Imc < 18.5)
	{
		printf ("Abaixo do peso");
	}
	else if (Imc < 25.0)
	{	
		printf ("Saúdavel");
	}
	else if (Imc < 30.0)
	{
		printf ("Sobrepeso");
	}
	else if (Imc < 35.0)
	{
		printf ("Obesidade grau I");
	}
	else if (Imc < 40.0)
	{
		printf ("Obesidade Grau II (severa)");
	}
	else if (Imc > 40)
	{
		printf ("Obesidade Grau III (mórbida)");
	}
	
	return 0;
}
