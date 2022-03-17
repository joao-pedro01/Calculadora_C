#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <ctype.h>
void menu(); //protótipo da função
float receber();
float somar(float x, float y);
float subtrair(float x, float y);
float multiplicar(float x, float y);
float dividir(float x, float y);

int main()
{
    setlocale(LC_ALL, "portuguese");

    char Op;
    float N1, N2, Result;
    //system("mspaint");
    //systen("c:\local_do_arquivo")
    //system("calc");

    do
    {
        

        do
        {
            menu();
            Op = getch();

            if(Op != '+' && Op != '-' && Op != '*' && Op != '/')
            {
                printf("\n\nOperador digitado é inválido!!!\n");
                printf("Digite operador válido: ");
                _sleep(1000);
                system("cls");
            }
        } while (Op != '+' && Op != '-' && Op != '*' && Op != '/');
        
        
        N1 = receber();
        N2 = receber();
        
        if(Op == '/')
        {
            if (N1 == 0 ||N2 == 0)
            {
                do
                {
                    if(N1 == 0)
                    {
                        N1 = receber();
                    }else 
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
            default:
                printf("test");
                break;
        }

        printf("\n\n");

        printf("Deseja fazer outra operação? (S/N)");
        Op = getch();
        Op = toupper(Op); //Converte a tecla para maiuscula       
    } while (Op == 'S');
    
    system("pause");
    return 0;
}//end function main
void menu()
{
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
        printf("\nInforme o valor: ");
        scanf("%f", &Num);

        if(Num <= 0 || Num > 10)
        {
            printf("Número digitado é inválido!!!\n");
            printf("Digite novamente");
        }
    } while (Num <= 0 || Num > 10);

    return Num;
}//end function receber
float somar(float x, float y)
{
    float Result;

    Result = x + y;

    //printf("O resultado da de %.2f + %.2f = %.2f", x, y, Result);

    return Result;
}//end function somar
float subtrair(float x, float y)
{
    float Result;

    Result = x - y;

    //printf("O resultado da de %.2f - %.2f = %.2f", x, y, Result);

    return Result;
}//end function subtrair
float multiplicar(float x, float y)
{
    float Result;

    Result = x + y;

    printf("O resultado da de %.2f * %.2f = %.2f", x, y, Result);
}//end function multiplicar
float dividir(float x, float y)
{
    float Result;

    Result = x / y;

    printf("O resultado da de %.2f - %.2f = %.2f", x, y, Result);
}//end function dividir
/*
    printf("O valor digitado %.2f", receber());
    Result = receber() + receber();
    printf("\n A soma é %.2f", Result);
*/