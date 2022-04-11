#include <stdio.h>
#include <locale.h>

int main (void)
{
	setlocale(LC_ALL, "Portuguese");
	
	//1. variables
	float area, base, altura;
	
	//2. print
	printf("Este programa irá calcular a área do triângulo!!! \n");
	
	//3. input
	printf("Digite a base do triângulo: ");
	scanf("%f", &base);
	
	printf("Digite a altura do triângulo: ");
	scanf("%f", &altura);
	
	//4. calc
	area = (base * altura)/2;
	
	//5. output
	printf("A a área do triângulo é: %.2f \n", area);

	return 0;
}
