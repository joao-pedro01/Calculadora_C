/*
    Fa�a um programa que receba na fun��o main() um n�mero inteiro e o envie para  a  fun��o  calcularQuadrado.  A  fun��o  calcular  Quadrado  far�  a multiplica��o do n�mero recebido por ele mesmo e depois retornar� o resultado para a fun��o que a chamou.  Ao final dever� ser mostrado o resultado do quadrado do n�mero na fun��o principal. 
*/
#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
int calcularQuadrado(int number);
int main()
{
    setlocale(LC_ALL, "portuguese");

    int number, result;

    printf("Digite um n�mero do tipo inteiro: ");
    scanf("%i", &number);

    result = calcularQuadrado(number);
    printf("O n�mero %i� = %i", number, result);

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