/*
 Exemplo0500 - v0.0. - 06/04/2024
 Author: Mateus Evangelista do Nascimento
*/
// dependencias
#include "io.h"      // para definicoes proprias
#include "My_AED1.h" // biblioteca para funcoes usadas nos metodos

void method_01()
{
    int x = 0;

    printf("\nDigite um numero e veja todos os multiplos de 6 ate essa quantidade: ");
    scanf("%d", &x);
    getchar();

    show6Multiples(x);
}

void method_02()
{
    int x = 0;

    printf("\nDigite um numero e veja todos os multiplos de 3 e 5 ate essa quantidade: ");
    scanf("%d", &x);
    getchar();

    show3and5Multiples(x);
}

void method_03()
{
    int x = 0;

    printf("\nDigite um numero e veja todos as potencias de 4 ate essa quantidade: ");
    scanf("%d", &x);
    getchar();

    show4powers(x);
}

void method_04()
{
    int x = 0;

    printf("\nDigite um numero e veja todos os multiplos de 7 no denominador ate essa quantidade: ");
    scanf("%d", &x);
    getchar();

    show7denominador(x);
}

void method_05()
{
    int x = 0;
    double y = 0;

    printf("\nDigite um numero e veja  as potencias pares de x ate essa quantidade: ");
    scanf("%d", &x);
    getchar();

    printf("\nDigite um valor real: ");
    scanf("%lf", &y);
    getchar();

   showPairPowers(x,y);
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
        default:

        } // end switch
    } while (x != 0);
    // encerrar
    // IO_pause("Apertar ENTER para terminar");
    return (0);
} // end main ( )