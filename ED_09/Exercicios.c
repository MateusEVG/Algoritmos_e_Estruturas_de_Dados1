
#include "io.h"
#include "My_AED1.h"

void method_01()
{
    int x = 0;
    int y = 0;

    printf("\nDigite o numero de linhas : ");
    scanf("%d", &x);

    printf("\nDigite o numero de colunas : ");
    scanf("%d", &y);

    double matriz[x][y];

    readnegativedoublematrix(x, y, matriz);

    printf("\nA matriz escrita foi : \n");

    printdoublematrix(x, y, matriz);
}

void method_02()
{
    int x = 0;
    int y = 0;

    printf("\nDigite o numero de linhas : ");
    scanf("%d", &x);

    printf("\nDigite o numero de colunas : ");
    scanf("%d", &y);

    double matriz[x][y];

    readnegativedoublematrix(x, y, matriz);

    fprintdoublematrix("MATRIZ1.TXT", x, y, matriz);

    printf("\nA matriz escrita foi : \n");

    printdoublematrix(x, y, matriz);
}
/*
Entrar com uma opcao: 2

Digite o numero de linhas : 2

Digite o numero de colunas : 2

Matriz[0][0] : -5

Matriz[0][1] : -3.999

Matriz[1][0] : -4

Matriz[1][1] : -445

A matriz escrita foi :
-5.000000       -3.999000
-4.000000       -445.000000

*/

void method_03()
{
    int x = 0;
    int y = 0;

    printf("\nDigite o numero de linhas : ");
    scanf("%d", &x);

    printf("\nDigite o numero de colunas : ");
    scanf("%d", &y);

    double matriz[x][y];

    readnegativedoublematrix(x, y, matriz);

    printdiagonal(x, y, matriz);
}

void method_04()
{
    int x = 0;
    int y = 0;

    printf("\nDigite o numero de linhas : ");
    scanf("%d", &x);

    printf("\nDigite o numero de colunas : ");
    scanf("%d", &y);

    double matriz[x][y];

    readnegativedoublematrix(x, y, matriz);

    printSdiagonal(x, y, matriz);
}

void method_05()
{
    int x = 0;
    int y = 0;

    printf("\nDigite o numero de linhas : ");
    scanf("%d", &x);

    printf("\nDigite o numero de colunas : ");
    scanf("%d", &y);

    double matriz[x][y];

    readnegativedoublematrix(x, y, matriz);

    printLDTriangleDoubleMatrix(x, y, matriz);
}

void method_06()
{
    int x = 0;
    int y = 0;

    printf("\nDigite o numero de linhas : ");
    scanf("%d", &x);

    printf("\nDigite o numero de colunas : ");
    scanf("%d", &y);

    double matriz[x][y];

    readnegativedoublematrix(x, y, matriz);

    printLUTriangleDoubleMatrix(x, y, matriz);
}

void method_07()
{
    int x = 0;
    int y = 0;

    printf("\nDigite o numero de linhas : ");
    scanf("%d", &x);

    printf("\nDigite o numero de colunas : ");
    scanf("%d", &y);

    double matriz[x][y];

    readnegativedoublematrix(x, y, matriz);

    printSLDTriangleDoubleMatrix(x, y, matriz);
}

void method_08()
{
    int x = 0;
    int y = 0;

    printf("\nDigite o numero de linhas : ");
    scanf("%d", &x);

    printf("\nDigite o numero de colunas : ");
    scanf("%d", &y);

    double matriz[x][y];

    readnegativedoublematrix(x, y, matriz);

    printSLUTriangleDoubleMatrix(x, y, matriz);
}

void method_09()
{
    int x = 0;
    int y = 0;

    printf("\nDigite o numero de linhas : ");
    scanf("%d", &x);

    printf("\nDigite o numero de colunas : ");
    scanf("%d", &y);

    double matriz[x][y];

    readnegativedoublematrix(x, y, matriz);

    bool result = allZerosLTriangleDoubleMatrix(x, y, matriz);

    if (result)
    {
        printf("\nTodos os valores abaixo da diagonal principal sao zeros.\n");
    }
    else
    {
        printf("\nNem todos os valores abaixo da diagonal principal sao zeros.\n");
    }
}

void method_10()
{
    int x = 0;
    int y = 0;

    printf("\nDigite o numero de linhas : ");
    scanf("%d", &x);

    printf("\nDigite o numero de colunas : ");
    scanf("%d", &y);

    double matriz[x][y];

    readnegativedoublematrix(x, y, matriz);

    bool result = allZerosUTriangleDoubleMatrix(x, y, matriz);

    if (result)
    {
        printf("\nTodos os valores acima da diagonal principal sao zeros.\n");
    }
    else
    {
        printf("\nNem todos os valores acima da diagonal principal sao zeros.\n");
    }
}

void method_11()
{
    int x = 0;
    int y = 0;
    double z = 0.0;

    printf("\nDigite o numero de linhas : ");
    scanf("%d", &x);

    printf("\nDigite o numero de colunas : ");
    scanf("%d", &y);

    double matriz[x][y];

    for (int i = 0; i < x; i = i + 1)
    {
        for (int j = 0; j < y; j = j + 1)
        {
            z = z + 1;
            matriz[i][j] = z;
        }
    }

    FILE *arquivo = fopen("MATRIZ1234.TXT", "wt");

    for (int i = 0; i < x; i = i + 1)
    {
        for (int j = 0; j < y; j = j + 1)
        {
            fprintf(arquivo, "%lf\n", matriz[i][j]);
        }
    }

    fclose(arquivo);
}

void method_12()
{
    int x = 0;
    int y = 0;
    double z = 0.0;

    printf("\nDigite o numero de linhas : ");
    scanf("%d", &x);

    printf("\nDigite o numero de colunas : ");
    scanf("%d", &y);

    double matriz[x][y];

    z = x * y;

    for (int i = 0; i < x; i = i + 1)
    {
        for (int j = 0; j < y; j = j + 1)
        {
           
            matriz[i][j] = z;

             z = z - 1;
        }
    }

    FILE *arquivo = fopen("MATRIZ4321.TXT", "wt");

    for (int i = 0; i < x; i = i + 1)
    {
        for (int j = 0; j < y; j = j + 1)
        {
            fprintf(arquivo, "%lf\n", matriz[i][j]);
        }
    }

    fclose(arquivo);
}

/*
 Funcao principal.
 @return codigo de encerramento
*/
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
        IO_println("11 -  method_11");
        IO_println("12 -  method_12");
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
        case 6:
            method_06();
            break;
        case 7:
            method_07();
            break;
        case 8:
            method_08();
            break;
        case 9:
            method_09();
            break;
        case 10:
            method_10();
            break;
        case 11:
            method_11();
            break;
        case 12:
            method_12();
            break;
        } // end switch
    } while (x != 0);
    // encerrar
    // IO_pause("Apertar ENTER para terminar");
    return (0);
} // end main ( )