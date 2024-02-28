// ------------------------------------ EXEMPLO603
// bibliotecas de funcoes auxiliares
#include <stdio.h> // para entradas e saídas
#include <stdlib.h> // para outras funcoes de uso geral
void PARES ( int X )
{
 if ( X > 0 )
 if ( X % 2 == 0 )
 {
 PARES ( X-2 );
 printf ( "\n%d\n", X );
 }
 else
 PARES ( X-1 );
} // fim procedimento PARES ( )
int main ( void )
{
// PROGRAMA RECURSIVO PARA MOSTRAR PARES
 printf ( "EXEMPLO603 - MOSTRAR OS PARES <= 10\n" );
 PARES ( 10 );
 printf ( "\nPRESSIONAR <Enter> PARA TERMINAR" );
 getchar ( ); // para esperar
 return ( EXIT_SUCCESS );
} // fim do programa

/*

saidas 


EXEMPLO603 - MOSTRAR OS PARES <= 10

2

4

6

8

10

PRESSIONAR <Enter> PARA TERMINAR


*/