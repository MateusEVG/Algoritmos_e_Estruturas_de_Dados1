// ------------------------------------ EXEMPLO507
// bibliotecas de funcoes auxiliares
#include <stdio.h> // para entradas e saídas
#include <stdlib.h> // para outras funcoes de uso geral
void P1 ( int* X )
{
 *X = *X + 1; // AVANCAR O CONTEXTO NA REFERENCIA
 printf ( "\nCHAMADO O PROCEDIMENTO P1 %d VEZ(ES)\n", *X );
 if ( *X < 5 )
 P1 ( X );
 printf ( "\nRETORNANDO AO PROCEDIMENTO P1 PARA A CHAMADA %d", *X );
 *X = *X - 1; // RETORNAR AO CONTEXTO DA REFERENCIA ANTERIOR
 getchar ( ); // para esperar
} // fim procedimento P1( )
int main ( void )
{
// PROGRAMA PARA MOSTRAR PASSAGEM DE PARAMETRO POR REFERENCIA
// VARIAVEL LOCAL
 int X;
 printf ( "EXEMPLO0507 - CHAMADA/RETORNO COM REFERENCIA\n" );
 X = 0;
 P1 ( &X ); // OBSERVAR REPETICAO FINITA !
 printf ( "\n" );
 printf ( "\nPRESSIONAR <Enter> PARA TERMINAR." );
 getchar ( ); // para esperar
 return ( EXIT_SUCCESS );
} // fim do programa

/*

saidas 


EXEMPLO0507 - CHAMADA/RETORNO COM REFERENCIA

CHAMADO O PROCEDIMENTO P1 1 VEZ(ES)

CHAMADO O PROCEDIMENTO P1 2 VEZ(ES)

CHAMADO O PROCEDIMENTO P1 3 VEZ(ES)

CHAMADO O PROCEDIMENTO P1 4 VEZ(ES)

CHAMADO O PROCEDIMENTO P1 5 VEZ(ES)

RETORNANDO AO PROCEDIMENTO P1 PARA A CHAMADA 5

RETORNANDO AO PROCEDIMENTO P1 PARA A CHAMADA 4

RETORNANDO AO PROCEDIMENTO P1 PARA A CHAMADA 3

RETORNANDO AO PROCEDIMENTO P1 PARA A CHAMADA 2

RETORNANDO AO PROCEDIMENTO P1 PARA A CHAMADA 1


PRESSIONAR <Enter> PARA TERMINAR.

*/