#include "io.h"
#include "My_AED1.h"

/*
method_01
*/
void method_01()
{
    // data
    int x = 0;
    FILE *arquivo = fopen("DATA1.TXT", "wt");
    // reading
    printf("\nEscreva um numero :");
    scanf("%d", &x);
    getchar();
    // for loop
    for (int i = 1; i <= x; i++)
    {
        fprintf(arquivo, "%d\n", i * 4);
    }
    // fclose
    fclose(arquivo);
}

/*
method_02
*/
void method_02()
{
    // data
    FILE *arquivo = fopen("DATA2.TXT", "wt");
    int n = 0;
    printf("\nEscreva um numero :");
    scanf("%d", &n);
    getchar();

    int y = (n - 1) * 10 + 25;

    for (int i = y; 25 <= i; i = i - 10)
    {
        fprintf(arquivo, "%d\n", i);
    }

    fclose(arquivo);
}

/*
method_03
*/
void method_03()
{
    // data
    int x = 0;
    FILE *arquivo = fopen("DATA3.TXT", "wt");
    // reading
    printf("\nEscreva um numero :");
    scanf("%d", &x);
    getchar();
    // for loop
    for (int i = 0; i < x; i++)
    {
        fprintf(arquivo, "%lf\n", pow(5, i));
    }
    // fclose
    fclose(arquivo);
}

/*
method_04
*/
void method_04()
{
    // data
    int x = 0;
    FILE *arquivo = fopen("DATA4.TXT", "wt");
    // reading
    printf("\nEscreva um numero :");
    scanf("%d", &x);
    getchar();
    // for loop
    for (int i = x - 1; 0 <= i; i--)
    {
        fprintf(arquivo, " %lf\n", 1.0 / pow(5, i));
    }
    // fclose
    fclose(arquivo);
}

/*
method_05
*/
void method_05()
{
    // data
    int x = 0;
    double y = 0.0;
    FILE *arquivo = fopen("DATA5.TXT", "wt");
    // reading
    printf("\nEscreva um numero inteiro:");
    scanf("%d", &x);
    getchar();
    printf("\nEscreva um numero real:");
    scanf("%lf", &y);
    getchar();
    // for loop
    for (int i = 0; i < 2 * x; i = i + 2)
    {
        fprintf(arquivo, "%lf\n", 1.0 / pow(y, i));

        if (i == 0)
        {
            i = 1;
        }
    }
    // fclose
    fclose(arquivo);
}

/*
method_06
*/
void method_06()
{
    FILE *arquivo = fopen("DATA5.TXT", "rt");

    int x = 0;
    printf("\nDigite um numero inteiro: ");
    scanf("%d", &x);
    getchar();

    fsum(x, "DATA5.TXT" );
}

void method_07(){
    
}

/*
main
*/
int main()
{
    int x = 0;

    do
    {
        IO_println("\nOpcoes");
        IO_println("0 - parar");
        IO_println("1 -  method_01");
        IO_println("2 -  method_02");
        IO_println("3 -  method_03");
        IO_println("4 -  method_04");
        IO_println("5 -  method_05");
        IO_println("6 -  method_06");
        IO_println("7 -  method_07");
        IO_println("8 -  method_08");
        IO_println("9 -  method_09");
        IO_println("10 -  method_10");
        IO_println("");
        x = IO_readint("Entrar com uma opcao: ");

        switch (x)
        {
        case 1:
            method_01();
            break;
        case 2:
            method_02();
            break;
        case 3:
            method_03();
            break;
        case 4:
            method_04();
            break;
        case 5:
            method_05();
            break;
        case 6:
            method_06();
            break;
        }
    } while (x != 0);

    return (0);
}