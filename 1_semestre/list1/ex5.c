#include <stdio.h>
#include <locale.h>

int main () 
{
	setlocale(LC_ALL, "Portuguese");
	
	float ds, dt, vm;
	
	//1. prinf
	printf("Este programa ir� calcular a velocidade m�dia de um percurso \n\n");
	
	//2. input
	printf("Informe a dist�ncia percorrida: ");
	scanf("%f", &ds);
	printf("Informe o tempo que levou no percurso: ");
	scanf("%f", &dt);
	
	//3. calc
	vm = ds / dt;
	
	//4. output
	printf("A velocidade m�dia levada no percuso foi: %.2f", vm);
	
	return 0;
}
