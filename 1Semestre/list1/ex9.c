#include <stdio.h>
#include <locale.h>

int main (void)
{
	setlocale(LC_ALL, "Portuguese");
	
	//1. variables
	float SalarioLiquido, SalarioBruto;
	
	//2. print
	printf("Este programa ir� calcular o s�lario bruto e l�quido!!! \n");
	
	//3. input
	printf("Digite o sal�rio bruto: ");
	scanf("%f", &SalarioBruto);
	
	//4. calc
	SalarioLiquido = SalarioBruto * 0.37;
	SalarioLiquido = SalarioBruto - SalarioLiquido;
	
	//5. output
	printf("Seu sal�rio bruto ser� de: R$ %.2f \n", SalarioBruto);
	printf("Seu sal�rio liquido ser� de: R$ %.2f \n", SalarioLiquido);

	return 0;
}
