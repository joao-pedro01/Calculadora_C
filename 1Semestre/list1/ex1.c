#include <stdio.h>
#include <locale.h>

int main ()
{
	setlocale(LC_ALL, "Portuguese");
	
	//1. variables
	float num1, num2, sum, med;
	
	//2. print
	printf("Este programa ir� fazer a m�dia dos n�meros informado pelo us�arios \n\n");
	
	//3. input
	printf("Digite o primeiro n�mero: ");
	scanf("%f", &num1);
	
	printf("Digite o segundo n�mero: ");
	scanf("%f", &num2);
							
	//4. calc
	sum = (num1 + num2) / 2;
	
	//5. output
	printf("A m�dia dos n�meros informado �: %.2f", sum);

	return 0;
}
