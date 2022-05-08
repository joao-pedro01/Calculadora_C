/*
    Faça um programa que receba na função main() um número inteiro e o envie para  a  função  calcularQuadrado.  A  função  calcular  Quadrado  fará  a multiplicação do número recebido por ele mesmo e depois retornará o resultado para a função que a chamou.  Ao final deverá ser mostrado o resultado do quadrado do número na função principal. 
*/
#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
int calcularQuadrado(int number);
int main()
{
    setlocale(LC_ALL, "portuguese");

    int number, result;

    printf("Digite um número do tipo inteiro: ");
    scanf("%i", &number);

    result = calcularQuadrado(number);
    printf("O número %i² = %i", number, result);

    return 0;
}
/* 
    CalcularQuadrado : int
    return result = number ^ 2
*/
int calcularQuadrado(int number)
{
    int result;
    result = number * number;
    return result;
}