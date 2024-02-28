// ------------------------------------ EXEMPLO408
// bibliotecas de funcoes auxiliares
#include <stdio.h> // para entradas e saídas
#include <stdlib.h> // para outras funcoes de uso geral
int main ( )
{
// PROGRAMA PARA LER E IMPRIMIR INTEIROS DIFERENTES DE ZERO
// VARIAVEL :
 int X = 0;
 printf ( "EXEMPLO408 - LER E IMPRIMIR INTEIROS NAO NULOS\n" );
 printf ( "\nFORNECER UM VALOR INTEIRO (0 = PARAR) : " );
 scanf ( "%d", &X );
 getchar( ); // limpar a entrada de dados
 while ( X != 0 ) // REPETIR
 {
 printf ( "\nO VALOR DIGITADO FOI : %d\n", X );
 printf ( "\nDIGITE UM VALOR INTEIRO QUALQUER : " );
 scanf ( "%d", &X );
 getchar( ); // limpar a entrada de dados
 } // ENQUANTO X DIFERENTE DE ZERO
 printf ( "\nPRESSIONAR <Enter> PARA TERMINAR." );
 getchar ( ); // para esperar
 return ( EXIT_SUCCESS );
} // fim do programa

/*

saidas 

EXEMPLO408 - LER E IMPRIMIR INTEIROS NAO NULOS

FORNECER UM VALOR INTEIRO (0 = PARAR) : 3

O VALOR DIGITADO FOI : 3

DIGITE UM VALOR INTEIRO QUALQUER : 2

O VALOR DIGITADO FOI : 2

DIGITE UM VALOR INTEIRO QUALQUER : 5

O VALOR DIGITADO FOI : 5

DIGITE UM VALOR INTEIRO QUALQUER : 0

PRESSIONAR <Enter> PARA TERMINAR.


*/