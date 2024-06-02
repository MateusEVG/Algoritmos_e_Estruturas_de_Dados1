#include "io.h"
#include "My_AED1.h"

void method_01a(int x)
{

    if (x > 0)
    {
        method_01a(x - 1);
        printf("%d\n", 6 * x);
    }
}
void method_01()
{
    int x = 0;

    printf("\nDigite um valor inteiro:\n");
    scanf("%d", &x);
    method_01a(x);
    printf("\n");
}

// -----------------------------

void method_02a(int x)
{

    if (x > 0)
    {
        printf("%d\n", 6 * x);
        method_02a(x - 1);
    }
}
void method_02()
{
    int x = 0;

    printf("\nDigite um valor inteiro:\n");
    scanf("%d", &x);
    method_02a(x);
    printf("\n");
}

// ---------------------------

void method_03a(int x)
{
    if (x > 0)
    {
        method_03a(x - 1);
        printf("1/%d : %lf\n", 6 * x, 1.0 / (6 * x));
    }
    else
    {
        printf("1/1 : %d\n", 1);
    }
}
void method_03()
{
    int x = 0;

    printf("\nDigite um valor inteiro:\n");
    scanf("%d", &x);
    method_03a(x);
    printf("\n");
}

// ---------------------------

void method_04a(int x)
{
    if (x > 0)
    {
        printf("1/%d : %lf\n", 6 * x, 1.0 / (6 * x));
        method_04a(x - 1);
    }
    else
    {
        printf("1/1 : %d\n", 1);
    }
}
void method_04()
{
    int x = 0;

    printf("\nDigite um valor inteiro:\n");
    scanf("%d", &x);
    method_04a(x);
    printf("\n");
}

// --------------------------
int method_05a(int x)
{
    int sum = 0;
    int y = 1;
    if (x >= 0)
    {
        method_05a(x - 1);
        y = y + 1;
        sum = sum + 2 * x * y + 6;

        printf("%d\n", sum);
    }

    return sum;
}
void method_05()
{
    int x = 0;

    printf("\nDigite um valor inteiro:\n");
    scanf("%d", &x);
    x = method_05a(x);
    printf("\n");

    printf("\n%d\n", x);
}

int main()
{
    // definir dado
    int x = 0;
    // repetir até desejar parar
    do
    {
        // identificar
        //  IO_id("EXEMPLO0500 - Programa - v0.0");
        // ler do teclado
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
        // testar valor
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
        } // end switch
    } while (x != 0);
    // encerrar
    // IO_pause("Apertar ENTER para terminar");
    return (0);
} // end main ( )