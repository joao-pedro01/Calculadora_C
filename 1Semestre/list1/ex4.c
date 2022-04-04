#include <stdio.h>
#include <locale.h>

int main ()
{
	setlocale(LC_ALL, "Portuguese");
	
	//1. variables
	float f, c, convert;

	//2. print
	printf("Este programa irá fazer a conversão de Fahrenheits para Celsius!!! \n\n");
			
	//3. input
	printf("Digite a temperatura em Fahrenheits: ");
	scanf("%f", &f);
	
	//4. calc
	c = (f - 32) / 1.8;
	
	//5. output
	printf("%.2fºF = %.2fºC",f, c);

	return 0;
}
