#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <ctype.h>
void menu(); //protótipo da função
float receber();
void error();
float somar(float x, float y);
float subtrair(float x, float y);
float multiplicar(float x, float y);
float dividir(float x, float y);

int main()
{
    setlocale(LC_ALL, "portuguese");

    char Op;
    float N1, N2, Result;

    do
    {
        do
        {
            menu();
            Op = getch();

            if(Op != '+' && Op != '-' && Op != '*' && Op != '/')
            {
                error();
            }
        } while (Op != '+' && Op != '-' && Op != '*' && Op != '/');
        
        N1 = receber();
        N2 = receber();
        
        if(Op == '/')
        {
            if (N1 == 0 || N2 == 0)
            {
                do
                {
                    error();

                    if(N1 == 0)
                    {
                        N1 = receber();
                    }
                    else 
                    {
                        N2 = receber();
                    }
                } while (N1 == 0 || N2 == 0);
            }
        }

        switch (Op)
        {
            case '+':
                Result = somar(N1,N2);
                printf("%.2f",Result);
                break;
            case '-':
                subtrair(N1,N2);
                break;
            case '*':
                multiplicar(N1,N2);
                break;
            case '/':
                dividir(N1,N2);
                break;
        }

        printf("\n\n");

        do
        {
            printf("Deseja fazer outra operação? (S/N)\n");
            Op = getch();
            Op = toupper(Op); //Converte a tecla para maiuscula

            if(Op != 'S' && Op != 'N')
            {
                error();
            }
            
            _sleep(500);
        } while (Op != 'S' && Op != 'N');
    } while (Op == 'S');
    
    system("pause");
    return 0;
}//end function main
void menu()
{
    system("cls");
    system("date /t");
    system("time /t");
    printf("\n-------Calculadora-------\n");
    printf("+ - * /\n");
    printf("Escolha a operação: ");
}//end function menu
float receber()
{
    float Num; //Variavel local, só executa enquanto a função estiver sendo executada

    do
    {
        printf("\nInforme o valor entre 0 à 10: ");
        scanf("%f", &Num);

        if(Num < 0 || Num > 10)
        {
            printf("\nNúmero digitado é inválido!!!\n");
            printf("Digite novamente");
        }
    } while (Num < 0 || Num > 10);

    return Num;
}//end function receber
void error()
{
    printf("\n\nOperador digitado é inválido!!!\n");
    printf("Digite operador válido");
    _sleep(1500);
    system("cls");
}//end function error
float somar(float x, float y)
{
    float Result;

    Result = x + y;

    return Result;
}//end function somar
float subtrair(float x, float y)
{
    float Result;

    Result = x - y;

    return Result;
}//end function subtrair
float multiplicar(float x, float y)
{
    float Result;

    Result = x * y;

    printf("O resultado da de %.2f * %.2f = %.2f", x, y, Result);
}//end function multiplicar
float dividir(float x, float y)
{
    float Result;

    Result = x / y;

    printf("O resultado da de %.2f - %.2f = %.2f", x, y, Result);
}//end function dividir