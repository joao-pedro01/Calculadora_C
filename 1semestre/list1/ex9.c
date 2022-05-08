#include <stdio.h>
#include <locale.h>

int main (void)
{
	setlocale(LC_ALL, "Portuguese");
	
	//1. variables
	float SalarioLiquido, SalarioBruto;
	
	//2. print
	printf("Este programa irá calcular o sálario bruto e líquido!!! \n");
	
	//3. input
	printf("Digite o salário bruto: ");
	scanf("%f", &SalarioBruto);
	
	//4. calc
	SalarioLiquido = SalarioBruto * 0.37;
	SalarioLiquido = SalarioBruto - SalarioLiquido;
	
	//5. output
	printf("Seu salário bruto será de: R$ %.2f \n", SalarioBruto);
	printf("Seu salário liquido será de: R$ %.2f \n", SalarioLiquido);

	return 0;
}
