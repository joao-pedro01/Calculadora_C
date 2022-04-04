/*
	Tarefa 07
	Exercício 8
	
    Faça um programa para calcular o peso ideal de uma pessoa. Ao iniciar o programa, peça a idade da pessoa, pois o índice não é preciso para crianças e pessoas idosas.
	Assim, não calcule para pessoas maiores que 65 anos e menores que 12 anos. 
	Através do sexo (1 para masculino, 2 para feminino) e da altura, calcular o peso ideal de uma pessoa.
	Receber também o peso atual dela e indicar se a mesma está no peso ideal (margem de erro de +- 5%), acima ou abaixo, conforme o cálculo:
	
    Fórmula do peso ideal do homem: (72.7 * altura) ? 62 
    Fórmula do peso ideal da mulher: (62.1 * altura) ? 48.7
    
    Autor: João Pedro
*/
#include <stdio.h>
#include <locale.h>

int main ()
{
	setlocale(LC_ALL, "Portuguese");
	
	int Op, Age;
    float Alt, KgIdealMin, KgIdeal, KgIdealMax, KgAtual;
	
	printf ("Este programa irá calcular o peso ideal. \n\n");

    // Input
    printf ("Digite a sua idade (De 12 a 65 anos): ");
    scanf ("%i", &Age);

    // Se tem -12 ou +65 encerra programa
    if (Age < 12 || Age > 65)
    {
        printf ("\nO programa não calcula o peso de crinças (-12 anos) e idosos (+65)");
    }
    else 
    {
    	// Verificação de operador
	    do
	    {
	        printf ("Digite 1 para Masculino, 2 para Feminino: ");
	        scanf ("%i", &Op);
	        
	        // Mensagem de erro se operador ser inválido
	        if (Op != 1 && Op != 2)
	        {
	            printf ("\nOpção Inválida\n\n");
	        }     
	    }while (Op != 1 && Op != 2);
	
	    // Verificação dos dados (Alt e Kg) se > 0
	    do
	    {
	        // Input
	        printf ("Digite a sua altura: ");
	        scanf ("%f", &Alt);
			printf ("Digite o seu peso atual (Kg): ");
			scanf ("%f", &KgAtual);
			
	        // Mensagem de erro
	        if (Alt <= 0 || KgAtual <= 0)
	        {
	            printf ("\nDados inválidos\n\n");
	        }
	    }while (Alt <= 0 || KgAtual <= 0);
	
	    // Operação
	    if (Op == 1)
	    {   
	        KgIdeal = (72.7 * Alt) - 62;
	    }
	    else
	    {
	        KgIdeal = (62.1 * Alt) - 62;
	    }
	
		KgIdealMax = KgIdeal * 1.05;
		KgIdealMin = KgIdeal * 0.95;
	
	    // Output
	    printf ("\nO peso ideal é: %.2f\n", KgIdeal);
	    printf ("O peso ideal mínimo é: %.2f\n", KgIdealMin);
	    printf ("O peso ideal máximo é: %.2f\n", KgIdealMax);
	    
	    if (KgAtual < KgIdealMin)
		{
			printf ("Você está abaixo do peso ideal");	
		}
		else if (KgAtual > KgIdealMax)
		{
			printf ("Você está acima do peso ideal");
		}
		else 
		{
			printf ("Você está no peso ideal");
		}
	}

	return 0;
}
