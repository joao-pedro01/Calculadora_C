#include <stdio.h>
#include <locale.h>

int main ()
{
	setlocale(LC_ALL, "Portuguese");
	
	//1. variables
	float cm = 100;
	float m, convert;
	
	//2. print
	printf("Este programa ir� fazer a convers�o de cent�metros para metros!!! \n\n");
			
	//3. input
	printf("Digite a m�dida em metros: ");
	scanf("%f", &m);
	
	//4. calc
	convert = m * cm;
	
	//5. output
	printf("%.2fm = %.2fcm", m, convert);

	return 0;
}
