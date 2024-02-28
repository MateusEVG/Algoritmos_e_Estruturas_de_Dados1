// ------------------------------------ EXEMPLO407
// bibliotecas de funcoes auxiliares
#include <stdio.h> // para entradas e saídas
#include <stdlib.h> // para outras funcoes de uso geral
int main ( )
{
// PROGRAMA PARA LER E IMPRIMIR (N) VALORES INTEIROS
// VARIAVEIS :
 int X = 0,
 CONTADOR = 0;
 printf ( "EXEMPLO407 - LER E IMPRIMIR (N) VALORES INTEIROS\n" );
 printf ( "\nFORNECER O NUMERO DE VEZES (N) : " );
 scanf ( "%d", &CONTADOR );
 getchar( ); // limpar a entrada de dados
 do // REPETIR
 {
 printf ( "\n%d. FORNECER UM VALOR INTEIRO : ", CONTADOR );
 scanf ( "%d", &X );
 getchar( ); // limpar a entrada de dados
 printf ( "\nO VALOR DIGITADO FOI : %d\n", X );
 CONTADOR = CONTADOR - 1;
 }
 while ( CONTADOR > 0 ); // ATE' ( CONTADOR <= 3 )
 printf ( "\nPRESSIONAR <Enter> PARA TERMINAR." );
 getchar ( ); // para esperar
 return ( EXIT_SUCCESS );
} // fim do programa

/*

saidas 

EXEMPLO407 - LER E IMPRIMIR (N) VALORES INTEIROS

FORNECER O NUMERO DE VEZES (N) : 3

3. FORNECER UM VALOR INTEIRO : 2

O VALOR DIGITADO FOI : 2

2. FORNECER UM VALOR INTEIRO : 1

O VALOR DIGITADO FOI : 1

1. FORNECER UM VALOR INTEIRO : 5

O VALOR DIGITADO FOI : 5

PRESSIONAR <Enter> PARA TERMINAR.

*/