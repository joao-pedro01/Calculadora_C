/* 
    O programa deverá mostrar na tela a mensagem ?Adivinhe os valores...? . Quando for pressionado um caractere deverão ser mostrados os números parcialmente, após 100milésimos  de  segundos.
    Após  aparecer  todos  os  valores  deixar  mais  1  segundo  detempo e depois  limpe a tela.
    Em seguida deve aparecer a mensagem ?Quais são os números??) e o jogadordeverá digitar os valores na ordem em que forma mostrados.O  programa  irá  comparar  a  cada  entrada  se  o  valor  digitado  está  naquelaposição do vetor.  Ao final mostra a quantidade de acertos do jogador.
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

    printf("Quais são os números na sequência mostrada?\n");
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
        /* gerando valores aleatórios entre zero e 50 */
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