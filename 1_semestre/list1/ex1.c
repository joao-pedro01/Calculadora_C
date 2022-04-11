#include <stdio.h>
#include <locale.h>

int main ()
{
	setlocale(LC_ALL, "Portuguese");
	
	//1. variables
	float num1, num2, sum, med;
	
	//2. print
	printf("Este programa irá fazer a média dos números informado pelo usúarios \n\n");
	
	//3. input
	printf("Digite o primeiro número: ");
	scanf("%f", &num1);
	
	printf("Digite o segundo número: ");
	scanf("%f", &num2);
							
	//4. calc
	sum = (num1 + num2) / 2;
	
	//5. output
	printf("A média dos números informado é: %.2f", sum);

	return 0;
}
