/*
 Exemplo0400 - v0.0. - 22/03/2024
 Author: Mateus Evangelista do Nascimento
*/
// dependencias
#include "io.h"      // para definicoes proprias
#include "My_AED1.h" // biblioteca para funcoes usadas nos metodos

/*
method_01
*/
void method_01()
{
    // variaveis
    int x = 0;
    int y = 0;
    int z = 0;
    int count = 0;
    int array[80];

    // input data
    printf("\nDigite dois valores para ser um intervalo fechado:\n");
    scanf("%d", &y);
    getchar();
    printf("\nDigite o outro:\n");
    scanf("%d", &z);
    getchar();
    // tamanho
    printf("\nDigite uma quantidade:\n");
    scanf("%d", &x);
    getchar();
    printf("\nInsira os numeros na quantidade que foi escolhida");

    // ler valor
    for (int i = 0; i < x; i++)
    {
        int value = 0;
        printf("\nValor para a posicao: %d :", i);
        scanf("%d", &value);
        getchar();
        array[i] = value;
    } // end for
    array[x] = '\0';

    // mostrar valor
    for (int i = 0; i < x; i++)
    {
        if ((y <= array[i] && array[i] <= z) || (z <= array[i] && array[i] <= y))
        {
            printf("\nO array na posicao [%d] : %d esta no intervalo", i, array[i]);
            count = count + 1;
        } // end if
    }     // end for
    printf("\nO array tem %d numeros dentro do intervalo e %d fora do intervalo", count, x - count);
} // end method_01

/*
method_02
*/
void method_02()
{
    // variaveis
    int x = 0;
    int y = 0;
    int z = 0;
    char array[80];

    // acoes
    printf("\nDigite uma sequencia de caracteres:\n");
    scanf("%s", array);
    getchar();

    for (int i = 0; i < strlen(array); i++)
    {
        if ('L' < array[i] && array[i] <= 'Z')
        {
            printf("\nO caractere digitado : %c e letra maiuscula maior que L \n", array[i]);
            z = z + 1;
        } // end if
    }     // end for
    printf("\nO total de caracteres maiusculos maiores que L foram : %d", z);
}

/*
method_03
*/
void method_03()
{
    // variaveis
    int x = 0;
    char array[80];

    // acoes
    printf("\nDigite uma sequencia de caracteres\n");
    scanf("%s", array);
    getchar();
    // chamada da funcao
    x = contaoL(array); // ver definicao na biblioteca "My_AED1.h"
    printf("\nA quantidade de caracteres maiusculos maiores que L sao %d", x);
} // end method_03

/*
method_04
*/
void method_04()
{
    // variaveis
    int x = 0;
    char array[80];

    // acoes
    printf("\nDigite uma sequencia de caracteres\n");
    scanf("%s", array);
    getchar();
    // chamada da funcao
    fazoL(array); // ver definicao na biblioteca "My_AED1.h"
} // end method_04

/*
method_05
*/
void method_05()
{
    // variaveis
    int x = 0;
    char array[80];

    // acoes
    printf("\nDigite uma sequencia de caracteres\n");
    scanf("%s", array);
    getchar();
    // chamada da funcao
    x = contaosL(array); // ver definicao na biblioteca "My_AED1.h"
    printf("\nA quantidade de letras minusculas ou maiusculas menores que l e : %d\n", x);
} // end method_05

/*
method_06
*/
void method_06()
{
    // variaveis
    int x = 0;
    char array[80];

    // acoes
    printf("\nDigite uma sequencia de caracteres\n");
    scanf("%s", array);
    getchar();
    // chamada da funcao
    fazoLk(array); // ver definicao na biblioteca "My_AED1.h"
} // end method_06

/*
method_07
*/
void method_07()
{
    // variaveis
    int x = 0;
    char array[80];

    // acoes
    printf("\nDigite uma sequencia de caracteres\n");
    scanf("%s", array);
    getchar();
    // chamada da funcao
    x = (contapares(array)); // ver definicao na biblioteca "My_AED1.h"
    printf("\nA cadeia tem %d numeros pares\n", x);
} // end method_07

/*
method_08
*/
void method_08()
{
    // variaveis
    int x = 0;
    char array[80];

    // acoes
    printf("\nDigite uma sequencia de caracteres\n");
    scanf("%s", array);
    getchar();
    // chamada da funcao
    nonAN(array); // ver definicao na biblioteca "My_AED1.h"
} // end method_08

/*
method_09
*/
void method_09()
{
    // variaveis
    int x = 0;
    char array[80];

    // acoes
    printf("\nDigite uma sequencia de caracteres\n");
    scanf("%s", array);
    getchar();
    // chamada da funcao
    sicAN(array); // ver definicao na biblioteca "My_AED1.h"
} // end method_09

/*
method_10
*/
void method_10()
{
    // variaveis
    int x = 0;
    char array[80];
    char array1[80];
    char array2[80];

    // acoes
    printf("\nDigite uma sequencia de caracteres\n");
    scanf("%s", array);
    getchar();
    printf("\nDigite uma sequencia de caracteres\n");
    scanf("%s", array1);
    getchar();
    printf("\nDigite uma sequencia de caracteres\n");
    scanf("%s", array2);
    getchar();

    // chamada da funcao
    sicANx3(array, array1, array2); // ver definicao na biblioteca "My_AED1.h"
} // end method_10

/*
method_11 - NAO FUNCIONA COM MAIS DE UM ESPAÇO
*/
void method_11()
{
    // variaveis
    int x = 0;
    chars array;
    chars array1;
    chars array2;

    // acoes
    array = IO_readln("\nDigite uma sequencia de caracteres\n");
    array1 = IO_readln("\nDigite uma sequencia de caracteres\n");
    array2 = IO_readln("\nDigite uma sequencia de caracteres\n");

    // chamada da funcao
    bettersic(array, array1, array2); // ver definicao na biblioteca "My_AED1.h"
} // end method_11

/*
method_12
*/
void method_12()
{
    // variaveis
    int x = 0;
    chars array;
    chars array1;

    // acoes
    array = IO_readln("\nDigite uma sequencia de caracteres\n");
    array1 = IO_readln("\nDigite uma sequencia de caracteres\n");

    // chamada da funcao
    contadigitos(array, array1); // ver definicao na biblioteca "My_AED1.h"
} // end method_12

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
        //  IO_id("EXEMPLO0300 - Programa - v0.0");
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
        default:

        } // end switch
    } while (x != 0);
    // encerrar
    // IO_pause("Apertar ENTER para terminar");
    return (0);
} // end main ( )

/*
mostra todos os caracteres nao alfanumericos de 3 arrays
@param array cadeia de caracteres
@param array1 cadeia de caracteres
@param array2 cadeia de caracteres
*/
void bettersic(chars array, chars array1, chars array2)
{
    // variaveis
    int x = 0;
    int y = 0;
    int z = 0;

    // acoes
    for (int i = 0; i < strlen(array); i++)
    {
        if ((('0' <= array[i] && array[i] <= '9') || ('a' <= array[i] && array[i] <= 'z') || ('A' <= array[i] && array[i] <= 'Z' || (array = " "))))
        {
            printf("\nO caractere %c e alfa-numerico\n ", array[i]);
            x = x + 1;
        } // end if
    }     // end for

    for (int i = 0; i < strlen(array1); i++)
    {
        if ((('0' <= array1[i] && array1[i] <= '9') || ('a' <= array1[i] && array1[i] <= 'z') || ('A' <= array1[i] && array1[i] <= 'Z') || (array1 = " ")))
        {
            printf("\nO caractere %c e alfa-numerico\n ", array1[i]);
            y = y + 1;
        } // end if
    }     // end for

    for (int i = 0; i < strlen(array2); i++)
    {
        if ((('0' <= array2[i] && array2[i] <= '9') || ('a' <= array2[i] && array2[i] <= 'z') || ('A' <= array2[i] && array2[i] <= 'Z') || (array2 = " ")))
        {
            printf("\nO caractere %c e alfa-numerico\n ", array2[i]);
            z = z + 1;
        } // end if
    }     // end for

    printf("\nO numero de caractes alfa-numericos da primeira cadeia e %d", x);
    printf("\nO numero de caractes alfa-numericos da segunda cadeia e %d", y);
    printf("\nO numero de caractes alfa-numericos da terceira cadeia e %d", z);
    printf("\nO total de caractes alfa-numericos e %d", (x + y + z));

} // end bettersic