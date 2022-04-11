/* 	
	Quantidade de homens.
	Quantidade de mulheres.
	Quantidade de crianças.
	Quantidade de horas de duração de um churrasco.
	
	Calcular e mostrar uma lista de compra de 10 itens para um churrasco, considerando a quantidade de pessoas e a duração do churrasco.
	A lista de compras deverá constar:
	- Quantidade de cada item (se for o caso, como quantidade de pão, latas de refrigerante, pacotes, etc..
	- Quilos de cada item (se for o caso), como carne, linguiça, etc...
*/
#include <stdio.h>
#include <locale.h>

int main ()
{
	setlocale(LC_ALL, "Portuguese");
	
	// input
	int QntKid, QntWoman, QntMen;
	float Hours;
	//itens
	int Beer, Bread, GarlicBread, Cheese;
	float RumpSteak, Sausage, Soda, Juice, Chuck, Chicken;
	
	printf ("Quantidade de homens: ");
	scanf ("%i", &QntMen);
	printf ("Quantidade de mulheres: ");
	scanf ("%i", &QntWoman);
	printf ("Quantidades de crianças: ");
	scanf ("%i", &QntKid);
	printf ("Quantas horas irá durar seu churrasco: ");
	scanf ("%f", &Hours);
	
	RumpSteak = 0.500;
	RumpSteak = ((QntMen * RumpSteak) + ((QntWoman * RumpSteak) / 1.5) + ((QntKid * RumpSteak) / 2)) * Hours;

	Chuck = 0.350;
	Chuck = ((QntMen *  Chuck)) + ((QntWoman * Chuck) / 1.5) + ((QntKid * Chuck) / 2) * Hours;
	
	Chicken = 0.120;
	Chicken = ((QntMen * Chicken) + ((QntWoman * Chicken) / 1.5) + ((QntWoman * Chicken) / 2)) * Hours;
	
	Sausage = 0.630;
	Sausage = ((QntMen * Sausage) + ((QntWoman * Sausage) / 1.5) + ((QntKid * Sausage) / 2)) * Hours;
	
	Cheese = 2;
	Cheese = ((QntMen * Cheese) + ((QntWoman * Cheese) / 2) + ((QntKid * Cheese) / 2)) * Hours;
	
	GarlicBread = 1;
	GarlicBread = ((QntMen * GarlicBread) + (QntWoman * GarlicBread) + (QntKid * GarlicBread)) * Hours;
	
	Bread = 2;
	Bread = ((QntMen * Bread) + ((QntWoman * Bread) / 2) + ((QntKid * Bread) / 2)) * Hours;
	
	Beer = 3;
	Beer = ((QntMen * Beer) + (QntWoman * Beer / 1.5)) * Hours;
	
	Soda = 2;
	Soda = ((QntMen * Soda) + (QntWoman * Soda) + ((QntKid * Soda) / 2)) * Hours;
	
	Juice = 1;
	Juice = (((QntMen * Juice) / 2) + ((QntWoman * Juice) / 2) + (QntKid * Juice)) * Hours;
	
	printf ("\nQuantidade de picanha: %.3fKg \n", RumpSteak);
	printf ("Quantidade de ácem: %.3fKg \n", Chuck);
	printf ("Quantidade de linguiça: %.3fkg \n", Sausage);
	printf ("Quantidade de frango: %.3fKg \n", Chicken);
	printf ("Quantidade de queijo coalho: %i pacote(s) \n", Cheese);
	printf ("Quantidade de pão de alho pacote(s): %i \n", GarlicBread);
	printf ("Quantidade de Pão: %i \n", Bread);
	printf ("Quantidade de cerveja: %i latas \n", Beer);
	printf ("Quantidade de refrigerante: %.2fL \n", Soda);
	printf ("Quantidade de Suco: %.2fL \n", Juice);

	system ("pause");

	return 0;
}
