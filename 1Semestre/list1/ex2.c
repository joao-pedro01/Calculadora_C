#include <stdio.h>
#include <locale.h>

int main (void)
{
	setlocale(LC_ALL, "Portuguese");
	
	//1. variables
	float area, base, altura;
	
	//2. print
	printf("Este programa ir� calcular a �rea do tri�ngulo!!! \n");
	
	//3. input
	printf("Digite a base do tri�ngulo: ");
	scanf("%f", &base);
	
	printf("Digite a altura do tri�ngulo: ");
	scanf("%f", &altura);
	
	//4. calc
	area = (base * altura)/2;
	
	//5. output
	printf("A a �rea do tri�ngulo �: %.2f \n", area);

	return 0;
}
