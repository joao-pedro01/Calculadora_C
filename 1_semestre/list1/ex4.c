#include <stdio.h>
#include <locale.h>

int main ()
{
	setlocale(LC_ALL, "Portuguese");
	
	//1. variables
	float f, c, convert;

	//2. print
	printf("Este programa ir� fazer a convers�o de Fahrenheits para Celsius!!! \n\n");
			
	//3. input
	printf("Digite a temperatura em Fahrenheits: ");
	scanf("%f", &f);
	
	//4. calc
	c = (f - 32) / 1.8;
	
	//5. output
	printf("%.2f�F = %.2f�C",f, c);

	return 0;
}
