#include <stdio.h>
#include <locale.h>

int main ()
{
	setlocale(LC_ALL, "Portuguese");
	
	//1. variables
	int anos, mes, dias, horas;
	
	//2. print
	printf("Este programa irá dizer aproximadamento o tempo de vida!!! \n\n");
			
	//3. input
	printf("Digite a sua idade? \n");
	scanf("%i", &anos);
	
	//4. calc
	mes = anos * 12;
    	dias = mes * 30;
	horas = dias * 24;
	
	//5. output
	printf("Você tem %i anos, %i meses, %i dias, %i horas de vida.", anos, mes, dias, horas);

	return 0;
}
