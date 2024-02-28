// ------------------------------------ EXEMPLO404
// bibliotecas de funcoes auxiliares
#include <stdio.h> // para entradas e saídas
#include <stdlib.h> // para outras funcoes de uso geral
int main ( )
{
// PROGRAMA PARA LER E IMPRIMIR 03 VALORES INTEIROS
// VARIAVEIS :
 int X = 0,
 CONTADOR = 0;
 printf ( "EXEMPLO404 - LER E IMPRIMIR 03 VALORES INTEIROS\n" );
 for ( CONTADOR = 1; CONTADOR <= 3; CONTADOR = CONTADOR+1)
 {
 printf ( "\n%d. FORNECER UM VALOR INTEIRO : ", CONTADOR );
 scanf ( "%d", &X );
 getchar( ); // limpar a entrada de dados
 printf ( "\nO VALOR DIGITADO FOI : %d\n", X );
 } // PARA CONTADOR EM [1:3]
 printf ( "\nPRESSIONAR <Enter> PARA TERMINAR." );
 getchar ( ); // para esperar
 return ( EXIT_SUCCESS );
} // fim do programa

/*

saidas 

EXEMPLO404 - LER E IMPRIMIR 03 VALORES INTEIROS

1. FORNECER UM VALOR INTEIRO : 3

O VALOR DIGITADO FOI : 3

2. FORNECER UM VALOR INTEIRO : 4

O VALOR DIGITADO FOI : 4

3. FORNECER UM VALOR INTEIRO : 5

O VALOR DIGITADO FOI : 5

PRESSIONAR <Enter> PARA TERMINAR.

*/