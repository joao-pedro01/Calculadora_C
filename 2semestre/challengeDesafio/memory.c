/* 
    O programa dever� mostrar na tela a mensagem ?Adivinhe os valores...? . Quando for pressionado um caractere dever�o ser mostrados os n�meros parcialmente, ap�s 100mil�simos  de  segundos.
    Ap�s  aparecer  todos  os  valores  deixar  mais  1  segundo  detempo e depois  limpe a tela.
    Em seguida deve aparecer a mensagem ?Quais s�o os n�meros??) e o jogadordever� digitar os valores na ordem em que forma mostrados.O  programa  ir�  comparar  a  cada  entrada  se  o  valor  digitado  est�  naquelaposi��o do vetor.  Ao final mostra a quantidade de acertos do jogador.
*/
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <ctype.h>
void menu();
int numbers();
int scanfUser();
int result(int number[], int numberUser[]);

int main()
{
    setlocale(LC_ALL, "portuguese");
    system("color A");
    
    int* number;
    int* numberUsers;
    int  i, count;

    menu();

    number = numbers();

    printf("Quais s�o os n�meros na sequ�ncia mostrada?\n");
    numberUsers = scanfUser();
    count = result(number, numberUsers);

    printf("Total de acertos: %i\n", count);

    system("pause");

    return 0;
}
/* 
    functio menu : void
    print menu principal
*/
void menu()
{
    int button;
    system("cls");
    system("date /t");
    system("time /t");

    printf("Advinhe os valores...\n\n");
    printf("Se estiver pronto pressione alguma tecla\n\n");

    button = getch();
}
/* 
    function numbers : int
    return numbers
    function para gerar numeros aleatorios
*/
int numbers()
{
    int i;
    static int numbers[5];

    srand(time(NULL));
    for (i = 0; i < 5; i++)
    {
        if(i == 3)
        {
            _sleep(100);
        }
        /* gerando valores aleat�rios entre zero e 50 */
        numbers[i] = rand() % 50;
        printf("%i ", numbers[i]);
    }
    _sleep(1000);
    system("cls");

    return numbers;
}
int scanfUser()
{
    int i;
    static int number[5];

    for (i = 0; i < 5; i++)
    {
        scanf("%i ", &number[i]);
    }

    return number;
}
int result(int number[], int numberUser[])
{
    int i, count = 0;

    for (i = 0; i < 5; i++)
    {
        if(number[i] == numberUser[i])
        {
            count++;
        }
    }

    return count;
}