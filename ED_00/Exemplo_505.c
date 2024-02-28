// ------------------------------------ EXEMPLO505
// bibliotecas de funcoes auxiliares
#include <stdio.h> // para entradas e saídas
#include <stdlib.h> // para outras funcoes de uso geral
void P1 ( int X )
{
 printf ( "\nCHAMADO O PROCEDIMENTO P1 %d VEZ(ES)\n", X );
 if ( X > 1 )
 P1 ( X - 1 );
 printf ( "\nRETORNANDO AO PROCEDIMENTO P1 PARA A CHAMADA %d", X );
 getchar ( ); // para esperar
} // fim procedimento P1( )
int main ( void )
{
// PROGRAMA PARA MOSTRAR PASSAGEM DE PARAMETRO POR VALOR
 printf ( "EXEMPLO0505 - CHAMADA/RETORNO COM PARAMETRO\n" );
 P1 ( 5 ); // OBSERVAR REPETICAO FINITA, SEM VARIAVEL GLOBAL !
 printf ( "\n" );
 printf ( "\nPRESSIONAR <Enter> PARA TERMINAR." );
 getchar ( ); // para esperar
 return ( EXIT_SUCCESS );
} // fim do programa

/*

saidas 


EXEMPLO0505 - CHAMADA/RETORNO COM PARAMETRO

CHAMADO O PROCEDIMENTO P1 5 VEZ(ES)

CHAMADO O PROCEDIMENTO P1 4 VEZ(ES)

CHAMADO O PROCEDIMENTO P1 3 VEZ(ES)

CHAMADO O PROCEDIMENTO P1 2 VEZ(ES)

CHAMADO O PROCEDIMENTO P1 1 VEZ(ES)

RETORNANDO AO PROCEDIMENTO P1 PARA A CHAMADA 1

RETORNANDO AO PROCEDIMENTO P1 PARA A CHAMADA 2

RETORNANDO AO PROCEDIMENTO P1 PARA A CHAMADA 3

RETORNANDO AO PROCEDIMENTO P1 PARA A CHAMADA 4

RETORNANDO AO PROCEDIMENTO P1 PARA A CHAMADA 5


PRESSIONAR <Enter> PARA TERMINAR.


*/