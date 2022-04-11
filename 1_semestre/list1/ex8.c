#include <stdio.h>
#include <locale.h>
#include <math.h>

int main ()
{
	setlocale(LC_ALL, "Portuguese");
	
	//1. variables
	float  pt1, pt2, pp1, pp2, ResultT, ResultP, media;
	//float port = 10%;
	
	//2. print
	printf("Este programa irá calcular a nota da disciplina Algoritomos e Programação!!! \n\n");
			
	//3. input
	printf("Digite a nota da primeira prova prática: ");
	scanf("%f", &pp1);
	printf("Digite a nota da segunda prova prática: ");
	scanf("%f", &pp2);
	
	printf("Digite a nota da primeira prova teórica: ");
	scanf("%f", &pt1);
	printf("Digite a nota da segunda prova teórica: ");
	scanf("%f", &pt2);
	
	//4. calc
	ResultT = ((pt1 + pt2) / 2) / 0.6;
	ResultP = ((pp1 + pp2) / 2) / 0.4;
	media = ((ResultT + ResultP) / 2);
	
	//5. output
	printf("A média das provas teórica é: %.2f \n", ResultT);
	printf("A média das provas prática é: %.2f \n", ResultP);
	printf("A média final é: %.2f", media);

	return 0;
}
