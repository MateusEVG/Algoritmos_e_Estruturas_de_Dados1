// ------------------------------------ EXEMPLO402
// bibliotecas de funcoes auxiliares
#include <stdio.h> // para entradas e saídas
#include <stdlib.h> // para outras funcoes de uso geral
int main ( )
{
// PROGRAMA PARA LER E IMPRIMIR (N) VALORES INTEIROS
// VARIAVEIS :
 int X = 0, N = 0, CONTADOR = 0;
 printf ( "EXEMPLO402 - LER E IMPRIMIR (N) VALORES INTEIROS\n" );
 printf ( "\nFORNECER O NUMERO DE VEZES (N) : " );
 scanf ( "%d", &N );
 getchar( ); // limpar a entrada de dados
 CONTADOR = 1;
 while ( CONTADOR <= N )
 {
 printf ( "\n%d", CONTADOR );
 printf ( " FORNECER UM VALOR INTEIRO QUALQUER : " );
 scanf ( "%d", &X );
 getchar( ); // limpar a entrada de dados
 printf ( "\nO VALOR DIGITADO FOI : %d\n", X );
 CONTADOR = CONTADOR + 1;
 } // ENQUANTO ( CONTADOR <= N )
 printf ( "\nPRESSIONAR <Enter> PARA TERMINAR." );
 getchar ( ); // para esperar
 return ( EXIT_SUCCESS );
} // fim do programa

/*

saidas 

EXEMPLO402 - LER E IMPRIMIR (N) VALORES INTEIROS

FORNECER O NUMERO DE VEZES (N) : 5

1 FORNECER UM VALOR INTEIRO QUALQUER : 2

O VALOR DIGITADO FOI : 2

2 FORNECER UM VALOR INTEIRO QUALQUER : 4

O VALOR DIGITADO FOI : 4

3 FORNECER UM VALOR INTEIRO QUALQUER : 6

O VALOR DIGITADO FOI : 6

4 FORNECER UM VALOR INTEIRO QUALQUER : 7

O VALOR DIGITADO FOI : 7

5 FORNECER UM VALOR INTEIRO QUALQUER : 2

O VALOR DIGITADO FOI : 2

PRESSIONAR <Enter> PARA TERMINAR.

*/