// ------------------------------------ EXEMPLO707
// bibliotecas de funcoes auxiliares
#include <stdio.h> // para entradas e saídas
#include <stdlib.h> // para outras funcoes de uso geral
#include <math.h>
typedef int VETOR[3]; // X,Y,Z
int main ( void )
{
// PROGRAMA PARA AVALIAR O COMPRIMENTO DE UM VETOR
// VARIAVEIS :
 VETOR V;
 int X = 0 ;
 float SOMA = 0.0;
 printf ( "EXEMPLO707 - COMPRIMENTO DE UM VETOR\n" );
 printf ( "\nFORNECER O VALOR DE X : " );
 scanf ( "%d", &V[0] );
 getchar( ); // limpar a entrada de dados
 printf ( "\nFORNECER O VALOR DE Y : " );
 scanf ( "%d", &V[1] );
 getchar( ); // limpar a entrada de dados
 printf ( "\nFORNECER O VALOR DE Z : " );
 scanf ( "%d", &V[2] );
 getchar( ); // limpar a entrada de dados
 SOMA = 0.0;
// REPETIR PARA CADA POSICAO
 for( X = 0; X < 3; X++ )
 SOMA = SOMA + V[ X ]*V[ X ];
 printf ( "\nCOMPRIMENTO = %f", sqrt( SOMA ) );
 printf ( "\n\nPRESSIONAR <Enter> PARA TERMINAR" );
 getchar ( ); // para esperar
 return ( EXIT_SUCCESS );
} // fim do programa

/*

saidas 

EXEMPLO707 - COMPRIMENTO DE UM VETOR

FORNECER O VALOR DE X : 4

FORNECER O VALOR DE Y : 6

FORNECER O VALOR DE Z : 7

COMPRIMENTO = 10.049876

PRESSIONAR <Enter> PARA TERMINAR

*/