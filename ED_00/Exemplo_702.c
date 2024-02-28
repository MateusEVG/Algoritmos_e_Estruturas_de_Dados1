// ------------------------------------ EXEMPLO702
// bibliotecas de funcoes auxiliares
#include <stdio.h> // para entradas e saídas
#include <stdlib.h> // para outras funcoes de uso geral
typedef int TABELA[10];
int main ( void )
{
// PROGRAMA PARA SOMAR UMA TABELA DE INTEIROS
// VARIAVEIS :
 TABELA V;
 int X = 0,
 SOMA = 0;
 printf ( "EXEMPLO702 - SOMAR UM TABELA DE 10 INTEIROS\n" );
// REPETIR PARA CADA POSICAO
 for ( X = 0; X < 10; X++ )
 {
 printf ( "\nFORNECER O %do. INTEIRO : ",(X+1) );
 scanf ( "%d", &V[ X ] );
 getchar( ); // limpar a entrada de dados
 } // FIM REPETIR
 SOMA = 0;
// REPETIR PARA CADA POSICAO
 for ( X = 0; X < 10; X++ )
 SOMA = SOMA + V[ X ];
 printf ( "\nSOMA = %d",SOMA );
 printf ( "\n\nPRESSIONAR <Enter> PARA TERMINAR" );
 getchar ( ); // para esperar
 return ( EXIT_SUCCESS );
} // fim do programa

/*

saida 

EXEMPLO702 - SOMAR UM TABELA DE 10 INTEIROS

FORNECER O 1o. INTEIRO : 5

FORNECER O 2o. INTEIRO : 6

FORNECER O 3o. INTEIRO : 4

FORNECER O 4o. INTEIRO : 8

FORNECER O 5o. INTEIRO : 0

FORNECER O 6o. INTEIRO : 1

FORNECER O 7o. INTEIRO : 2

FORNECER O 8o. INTEIRO : 3

FORNECER O 9o. INTEIRO : 4

FORNECER O 10o. INTEIRO : 5

SOMA = 38

PRESSIONAR <Enter> PARA TERMINAR

*/