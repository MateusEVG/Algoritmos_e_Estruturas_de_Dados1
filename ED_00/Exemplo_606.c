// ------------------------------------ EXEMPLO606
// bibliotecas de funcoes auxiliares
#include <stdio.h> // para entradas e saídas
#include <stdlib.h> // para outras funcoes de uso geral
int PARES ( int X )
{
// DADO:
 int S = 0;
 if ( X > 0 )
 S = 2*X + PARES( X-1 );
 else
 S = 0;
 return ( S );
} // fim funcao PARES ( )
int main ( void )
{
// PROGRAMA RECURSIVO PARA SOMAR PARES
// DADO :
 int SOMA = 0;
 printf ( "EXEMPLO606 - SOMAR OS 5 PRIMEIROS PARES\n" );
 SOMA = PARES ( 5 );
 printf ( "\nSOMA DOS 5 PRIMEIROS PARES = %d\n", SOMA );
 printf ( "\nPRESSIONAR <Enter> PARA TERMINAR" );
 getchar ( ); // para esperar
 return ( EXIT_SUCCESS );
} // fim do programa


/*

saidas 

EXEMPLO606 - SOMAR OS 5 PRIMEIROS PARES

SOMA DOS 5 PRIMEIROS PARES = 30

PRESSIONAR <Enter> PARA TERMINAR


*/