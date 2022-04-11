/*
    19/11/2021

    Prova

    O dono de uma loja precisa saber a margem de lucro que ele tem dos produtos vendidos durante o dia.
    Ele usa a seguinte estratégia para definir o preço de um produto.

    Se o preço custo do produto for menor que R$ 10,00,  a margem de lucro é de 5%.
    Por exemplo: Se o custo de um produto for de R$ 2,00, o produto é vendido por R$ 2,10


    Se o preço custo do produto for de R$ 10,00 até R$ 100,00 (inclusive), a margem de lucro é de 10%.
    Por exemplo: Se o custo de um produto for de R$ 42,00, o produto é vendido por R$ 46,20.

    Se o preço custo do produto for maior do que R$ 100,00, a margem de lucro é de 15%.
    Por exemplo: Se o custo de um produto for de R$ 123,00, o produto é vendido por R$ 141,45.


    Nesse programa o dono da loja insere os preços de cada venda e o programa finaliza quando o preço de venda for 0.

    No final, quando o dono da loja digitar 0 (zero), mostrar:

    Lucro dos produtos com margem de 5%.
    Lucro dos produtos com margem de 10%.
    Lucro dos produtos com margem de 15%.
    Lucro Total


    Exemplo de execução:

    Digite o valor da venda ou zero para sair:  2.10
    Digite o valor da venda ou zero para sair:  46.20
    Digite o valor da venda ou zero para sair:  141.45
    Digite o valor da venda ou zero para sair:  0

    Lucro 5%:        R$ 0.10
    Lucro 10%:      R$ 4.20
    Lucro 15%       R$ 18.45
    Lucro Total:     R$ 22.75

    Autor: João Pedro
*/
#include <stdio.h>
#include <locale.h>
#define ProfitMargin1 10
#define ProfitMargin2 100

int main ()
{
	setlocale(LC_ALL, "Portuguese");
	
    float ProductCost, Profit, ProfitFinal1, ProfitFinal2, ProfitFinal3, Total;

    do
    {
        printf ("Digite o valor da venda ou zero para sair: ");
        scanf ("%f", &ProductCost);
        
        if (ProductCost < ProfitMargin1)
        {
            Profit = ProductCost - (ProductCost / 1.05);
            ProfitFinal1 += Profit;
        }
        else if (ProductCost < ProfitMargin2)
        {
            Profit = ProductCost - (ProductCost / 1.1);
            ProfitFinal2 += Profit;
        }
        else
        {
            Profit = ProductCost - (ProductCost / 1.15);
            ProfitFinal3 += Profit;
        }        
        
    }while (ProductCost != 0);
    
    Total = ProfitFinal1 + ProfitFinal2 + ProfitFinal3;

    printf ("\nLucro 5%%: R$ %.2f\n", ProfitFinal1);
    printf ("Lucro 10%%: R$ %.2f\n", ProfitFinal2);
    printf ("Lucro 15%%: R$ %.2f\n", ProfitFinal3);
    printf ("Lucro Total: R$ %.2f\n", Total);

	return 0;
}