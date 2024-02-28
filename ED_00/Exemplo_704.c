// ------------------------------------ EXEMPLO704
// bibliotecas de funcoes auxiliares
#include <stdio.h> // para entradas e saídas
#include <stdlib.h> // para outras funcoes de uso geral
#include <string.h> // para strlen()
typedef char STRING10[10];
int main ( void )
{
// PROGRAMA PARA LER UMA PALAVRA
// VARIAVEIS :
 STRING10 PALAVRA;
 int X = 0;
 printf ( "EXEMPLO704 - LER UMA PALAVRA\n" );
 printf ( "\nFORNECER UMA PALAVRA (NO MAXIMO 09 LETRAS) : " );
 gets ( PALAVRA );
 printf ( "\nLETRAS DA PALAVRA LIDA : " );
// REPETIR PARA CADA POSICAO
 for ( X = 0; X < strlen( PALAVRA ); X++ )
 printf ( "%c ", PALAVRA[ X ] );
 printf ( "\n\nPRESSIONAR <Enter> PARA TERMINAR" );
 getchar ( ); // para esperar
 return ( EXIT_SUCCESS );
} // fim do programa

/*

saidas 

Exemplo_704.c: In function 'main':
Exemplo_704.c:15:2: warning: call to 'gets' declared with attribute warning: Using gets() is always unsafe - use fgets() instead [-Wattribute-warning]
   15 |  gets ( PALAVRA );
      |  ^~~~~~~~~~~~~~~~
EXEMPLO704 - LER UMA PALAVRA

FORNECER UMA PALAVRA (NO MAXIMO 09 LETRAS) : palavra

LETRAS DA PALAVRA LIDA : p a l a v r a 

PRESSIONAR <Enter> PARA TERMINAR


*/
