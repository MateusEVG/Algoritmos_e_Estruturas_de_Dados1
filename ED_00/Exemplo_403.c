// ------------------------------------ EXEMPLO403
// bibliotecas de funcoes auxiliares
#include <stdio.h> // para entradas e saídas
#include <stdlib.h> // para outras funcoes de uso geral
int main ( )
{
// PROGRAMA PARA LER E IMPRIMIR (N) VALORES INTEIROS
// VARIAVEIS :
 int X = 0, N = 0;
 printf ( "EXEMPLO403 - LER E IMPRIMIR (N) VALORES INTEIROS\n" );
 printf ( "\nFORNECER O NUMERO DE VEZES (N) : " );
 scanf ( "%d", &N );
 getchar( ); // limpar a entrada de dados
 while ( N > 0 ) // REPETIR
 {
 printf ( "\n%d", N );
 printf ( " FORNECER UM VALOR INTEIRO QUALQUER : " );
 scanf ( "%d", &X );
 getchar( ); // limpar a entrada de dados
 printf ( "\nO VALOR DIGITADO FOI : %d\n", X );
 N = N - 1;
 } // ENQUANTO N > 0
 printf ( "\nPRESSIONAR <Enter> PARA TERMINAR." );
 getchar ( ); // para esperar
 return ( EXIT_SUCCESS );
} // fim do programa

/*

saidas 

EXEMPLO403 - LER E IMPRIMIR (N) VALORES INTEIROS

FORNECER O NUMERO DE VEZES (N) : 4

4 FORNECER UM VALOR INTEIRO QUALQUER : 3

O VALOR DIGITADO FOI : 3

3 FORNECER UM VALOR INTEIRO QUALQUER : 2

O VALOR DIGITADO FOI : 2

2 FORNECER UM VALOR INTEIRO QUALQUER : 4

O VALOR DIGITADO FOI : 4

1 FORNECER UM VALOR INTEIRO QUALQUER : 5

O VALOR DIGITADO FOI : 5

PRESSIONAR <Enter> PARA TERMINAR.

*/