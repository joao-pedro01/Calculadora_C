#include <stdio.h>
#include <locale.h>

int main (void)
{
	setlocale(LC_ALL, "Portuguese");
	
	//1. variables
	int ht, he;
	float total;
	
	//2. print
	printf("Este programa ir� calcular o s�lario com suas horas extras!!! \n");
	
	//3. input
	printf("Digite o tempo trabalhado: ");
	scanf("%i", &ht);
	
	printf("Digite suas horas extras: ");
	scanf("%i", &he);
	
	//4. calc
	total = (ht * 10.00) + (he * 15.00);
	
	//5. output
	printf("Seu sal�rio sera de: %.2f \n", total);

	return 0;
}
