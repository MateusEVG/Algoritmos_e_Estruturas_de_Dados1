// ------------------------------------ EXEMPLO502
// bibliotecas de funcoes auxiliares
#include <stdio.h> // para entradas e saídas
#include <stdlib.h> // para outras funcoes de uso geral
int X = 0; // VARIAVEL EM CONTEXTO GLOBAL
void P1 ( void )
{
printf ( "\n" );
printf ( "\nCHAMADO O PROCEDIMENTO P1 %d VEZ(ES)", X );
printf ( "\n" );
} // fim procedimento P1( )
int main ( void )
{
// PROGRAMA PARA MOSTRAR PASSAGENS DE PARAMETROS
 printf ( "EXEMPLO0502 - CHAMADA COM VARIAVEL GLOBAL\n" );
 for ( X = 1; X <= 5; X = X + 1 )
 P1 ( ); // chamar 5 vezes
 printf ( "\n" );
 printf ( "\nPRESSIONAR <Enter> PARA TERMINAR." );
 getchar ( ); // para esperar
 return ( EXIT_SUCCESS );
} // fim do programa

/*

saidas 

EXEMPLO0502 - CHAMADA COM VARIAVEL GLOBAL


CHAMADO O PROCEDIMENTO P1 1 VEZ(ES)


CHAMADO O PROCEDIMENTO P1 2 VEZ(ES)


CHAMADO O PROCEDIMENTO P1 3 VEZ(ES)


CHAMADO O PROCEDIMENTO P1 4 VEZ(ES)


CHAMADO O PROCEDIMENTO P1 5 VEZ(ES)


PRESSIONAR <Enter> PARA TERMINAR.

*/