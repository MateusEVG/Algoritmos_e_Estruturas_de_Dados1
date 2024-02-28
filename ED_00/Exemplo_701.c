// ------------------------------------ EXEMPLO701
// bibliotecas de funcoes auxiliares
#include <stdio.h> // para entradas e saídas
#include <stdlib.h> // para outras funcoes de uso geral
typedef int TABELA [10];
int main ( void )
{
// PROGRAMA PARA LER UMA TABELA DE INTEIROS
// VARIAVEIS:
 TABELA V;
 int X = 0;
 printf ( "EXEMPLO701 - LER UM TABELA DE 10 INTEIROS\n" );
// REPETIR PARA CADA POSICAO
 for ( X = 0; X < 10; X++ )
 { // a primeira posicao e' zero !
 printf ( "\nFORNECER O %d o. INTEIRO : ",(X+1) );
 scanf ( "%d", &V[ X ] );
 getchar( ); // limpar a entrada de dados
 } // FIM REPETIR
 printf ( "\nVETOR LIDO: \n" );
// REPETIR PARA CADA POSICAO
 for ( X = 0; X < 10; X++ )
 {
 printf ( "%d ", V[ X ] );
 } // FIM REPETIR
 printf ( "\n\nPRESSIONAR <Enter> PARA TERMINAR" );
 getchar ( ); // para esperar
 return ( EXIT_SUCCESS );
} // fim do programa

/*

saidas 

EXEMPLO701 - LER UM TABELA DE 10 INTEIROS

FORNECER O 1 o. INTEIRO : 5

FORNECER O 2 o. INTEIRO : 4

FORNECER O 3 o. INTEIRO : 3

FORNECER O 4 o. INTEIRO : 7

FORNECER O 5 o. INTEIRO : 9

FORNECER O 6 o. INTEIRO : 2

FORNECER O 7 o. INTEIRO : 4

FORNECER O 8 o. INTEIRO : 7

FORNECER O 9 o. INTEIRO : 8

FORNECER O 10 o. INTEIRO : 6

VETOR LIDO:
5 4 3 7 9 2 4 7 8 6

PRESSIONAR <Enter> PARA TERMINAR


*/