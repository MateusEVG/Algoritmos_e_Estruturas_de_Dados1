// ------------------------------------ EXEMPLO605
// bibliotecas de funcoes auxiliares
#include <stdio.h> // para entradas e saídas
#include <stdlib.h> // para outras funcoes de uso geral
void PARES ( int X, int* S )
{
 if( X > 0 )
 { PARES ( X-1, S ); *S = *S + 2*X; }
 else
 S = 0;
} // fim procedimento PARES ( )
int main ( void )
{
// PROGRAMA RECURSIVO PARA SOMAR PARES
// DADO:
 int SOMA = 0;
 printf ( "EXEMPLO605 - SOMAR OS 5 PRIMEIROS PARES\n" );
 PARES ( 5, &SOMA );
 printf ( "\nSOMA DOS 5 PRIMEIROS PARES = %d\n", SOMA );
 printf ( "\nPRESSIONAR <Enter> PARA TERMINAR" );
 getchar ( ); // para esperar
 return ( EXIT_SUCCESS );
} // fim do programa

/*

saidas 

EXEMPLO605 - SOMAR OS 5 PRIMEIROS PARES

SOMA DOS 5 PRIMEIROS PARES = 30

PRESSIONAR <Enter> PARA TERMINAR

*/