#include <stdio.h>
#include <locale.h>

int main (void)
{
	setlocale(LC_ALL, "Portuguese");
	
	//1. variables
	float c, r;
	float pi = 3.14;
	
	//2. print
	printf("Este programa ir� calcular o per�metro de uma circufer�ncia!!! \n");
	
	//3. input
	printf("Digite o raio: ");
	scanf("%f", &r);
	
	//4. calc
	c = 2 * pi * r;
	
	//5. output
	printf("O perimetro da circufer�ncia �: %.2f \n", c);

	return 0;
}
