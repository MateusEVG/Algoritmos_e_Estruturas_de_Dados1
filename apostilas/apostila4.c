#include <stdio.h>
#include <stdlib.h>
#include "io.h"




void method_01()
{
    
}

void method_04()
{
    int x = 0;
    int i = 0;
    int y = 3;

    for (i = 17; i >= 1; i--)
    {
        printf("\n%f", pow(i,2));   
    }
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
        case 4:
            method_04();
            break;
        } // end switch
    } while (x != 0);
    // encerrar
    // IO_pause("Apertar ENTER para terminar");
    return (0);
} // end main ( )