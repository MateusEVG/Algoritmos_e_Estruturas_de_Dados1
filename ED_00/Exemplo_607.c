// ------------------------------------ EXEMPLO607
// bibliotecas de funcoes auxiliares
#include <stdio.h> // para entradas e saídas
#include <stdlib.h> // para outras funcoes de uso geral
int PARES ( int X )
{
// DADO :
 int S = 0;
 if ( X > 0 )
 if ( X % 2 == 0 )
 S = 1 + PARES ( X-2 );
 else
 S = PARES ( X-1 );
 else
 S = 0;
 return ( S );
} // fim funcao PARES ( )
int main ( void )
{
// PROGRAMA RECURSIVO PARA CONTAR PARES
 printf ( "EXEMPLO607 - CONTAR OS PARES <= 10\n" );
 printf ( "\nPARES <= 10 = %d\n", PARES( 10 ) );
 printf ( "\nFORNECER <Enter> PARA TERMINAR" );
 getchar ( ); // para esperar
 return ( EXIT_SUCCESS );
} // fim do programa

/*

saida 

EXEMPLO607 - CONTAR OS PARES <= 10

PARES <= 10 = 5

FORNECER <Enter> PARA TERMINAR


*/
