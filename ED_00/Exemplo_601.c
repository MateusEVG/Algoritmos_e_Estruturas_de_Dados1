// ------------------------------------ EXEMPLO601
// bibliotecas de funcoes auxiliares
#include <stdio.h> // para entradas e saídas
#include <stdlib.h> // para outras funcoes de uso geral
void CONTAR ( int X )
{
 if ( X > 0 )
 {
 CONTAR ( X-1 );
 printf ( "\n%d\n", X );
 }
} // fim procedimento CONTAR( )
int main ( void )
{
// PROGRAMA PARA CONTAR DE 1 ATE' 5, RECURSIVAMENTE
 printf ( "EXEMPLO601 - CONTAR DE 1 A 5 RECURSIVAMENTE\n" );
 CONTAR ( 5 );
 printf ( "\nPRESSIONAR <Enter> PARA TERMINAR" );
 getchar ( ); // para esperar
 return ( EXIT_SUCCESS );
} // fim do programa

/*

saidas 

EXEMPLO601 - CONTAR DE 1 A 5 RECURSIVAMENTE

1

2

3

4

5

PRESSIONAR <Enter> PARA TERMINAR


*/