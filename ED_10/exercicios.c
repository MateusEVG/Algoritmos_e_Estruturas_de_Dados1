
#include "My_AED1.h"
#include "io.h"

void method_01()
{
    int n = 0;
    int inferior = 0;
    int superior = 0;

    printf("\nDigite um numero para ser o tamanho do array : ");
    scanf("%d", &n);
    getchar();

    intstringptr chain = NewIntString(n);

    printf("\nDigite um numero : ");
    scanf("%d", &inferior);
    getchar();

    printf("\nDigite um numero : ");
    scanf("%d", &superior);
    getchar();

    chain = randIntString(inferior, superior, chain);

    printIntString(chain);

    fprintIntString("DADOS.TXT", chain);
}

/*

Entrar com uma opcao: 1

Digite um numero para ser o tamanho do array : 9

Digite um numero : 300

Digite um numero : 1000

intstring[0] = 341
intstring[1] = 541
intstring[2] = 325
intstring[3] = 863
intstring[4] = 542
intstring[5] = 602
intstring[6] = 562
intstring[7] = 917
intstring[8] = 624
*/

void method_02()
{
    bool response = false;
    int number = 602;

    intstringptr chain;
    chain = freadIntString("DADOS.TXT", chain);
    response = searchIntString(number, chain);

    if (response == true)
    {
        printf("\nO numero %d esta no array\n", number);
    }
    else
    {
        printf("\nO numero %d NAO esta no array ", number);
    }
}
/*
Entrar com uma opcao: 2

O numero 602 esta no array

*/

void method_03()
{
    intstringptr chain1 = freadIntString("DADOS1.TXT", chain1);
    intstringptr chain2 = freadIntString("DADOS2.TXT", chain2);

    bool response = intstringCompare(chain1, chain2);
    if (response)
    {
      printf("\nOs dois arranjos sao iguais "); 
    }
    else
    {
        printf("\nOs dois arranjos sao diferentes");
    }
    
}
/*


Entrar com uma opcao: 3

Os dois arranjos sao iguais 


*/

void method_04()
{
    intstringptr chain1 = freadIntString("DADOS1.TXT", chain1);
    intstringptr chain2 = freadIntString("DADOS2.TXT", chain2);

    int sum = intstringSum(chain1, 3 , chain2);
    
    printf("\nA soma dos arranjos com o segundo escalado por 3 e : %d", sum);
}
/*
Entrar com uma opcao: 4

A soma dos arranjos com o segundo escalado por 3 e : 60
*/

void method_05()
{
    intstringptr chain1 = freadIntString("DADOS1.TXT", chain1);
    bool response = intstringisDecrescent(chain1);
    
    if (response)
    {
       printf("\nO array e decrescente ");
    }
    else
    printf("\nO array nao e decrescente");
    
    
}
/*
Entrar com uma opcao: 5

O array nao e decrescente
*/




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
        } // end switch
    } while (x != 0);
    // encerrar
    // IO_pause("Apertar ENTER para terminar");
    return (0);
} // end main ( )
