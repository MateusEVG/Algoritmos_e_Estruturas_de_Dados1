// ------------------------------------ EXEMPLO401
// bibliotecas de funcoes auxiliares
#include <stdio.h> // para entradas e saídas
#include <stdlib.h> // para outras funcoes de uso geral
int main ( )
{
// PROGRAMA PARA LER E IMPRIMIR 03 VALORES INTEIROS
// VARIAVEIS :
 int X = 0,
 CONTADOR = 0;
 printf ( "EXEMPLO401 - LER E IMPRIMIR 03 VALORES INTEIROS" );
 printf ( "\n" ); // mudar de linha
 CONTADOR = 1;
 while ( CONTADOR <= 3 ) // REPETIR
 {
 printf ( "\n" ); // mudar de linha
 printf ( "%d. FORNECER UM VALOR INTEIRO : ", CONTADOR );
 scanf( "%d", &X );
 getchar( ); // limpar a entrada de dados
 printf ( "\nO VALOR DIGITADO FOI : %d\n", X );
 CONTADOR = CONTADOR + 1;
 } // ENQUANTO ( CONTADOR <= 3 )
 printf ( "\nPRESSIONAR <Enter> PARA TERMINAR." );
 getchar ( ); // para esperar
 return ( EXIT_SUCCESS );
} // fim do programa

/*

saidas 

EXEMPLO401 - LER E IMPRIMIR 03 VALORES INTEIROS

1. FORNECER UM VALOR INTEIRO : 9

O VALOR DIGITADO FOI : 9

2. FORNECER UM VALOR INTEIRO : 3

O VALOR DIGITADO FOI : 3

3. FORNECER UM VALOR INTEIRO : 5

O VALOR DIGITADO FOI : 5

PRESSIONAR <Enter> PARA TERMINAR.

*/