// ------------------------------------ EXEMPLO610
// bibliotecas de funcoes auxiliares
#include <stdio.h> // para entradas e saídas
#include <stdlib.h> // para outras funcoes de uso geral
#include <string.h> // para strlen()
typedef char STRING30[30];
int PROCURAR
 ( char LETRA, STRING30 S, int POSICAO )
{
// DADO :
 int R = 0;
 if ( POSICAO <= strlen(S) )
 if ( S [ POSICAO ] == LETRA )
 R = 1 + PROCURAR ( LETRA, S, POSICAO+1 );
 else
 R = PROCURAR ( LETRA,S,POSICAO+1 );
 else
 R = 0;
 return ( R );
} // fim funcao PROCURAR ( )
int main ( void )
{
// PROGRAMA RECURSIVO PARA PROCURAR OCORRENCIAS DE UMA LETRA
// DADO :
 char L = '_';
 STRING30 S = "";
 printf ( "EXEMPLO610 - PROCURAR OCORRENCIAS DE UMA LETRA\n" );
 printf ( "\nFORNECER UMA SENTENCA COM MENOS DE 30 CARACTERES : " );
 gets ( S );
 printf ( "\nFORNECER UMA LETRA PARA SER PROCURADA : " );
 L = getchar ( );
 getchar( ); // limpar a entrada de dados
 printf ( "\nRESPOSTA = %d\n", PROCURAR( L,S,0 ) );
 printf ( "\nPRESSIONAR <Enter> PARA TERMINAR" );
 getchar ( ); // para esperar
 return ( EXIT_SUCCESS );
} // fim do programa

/*

saida 

Exemplo_610.c: In function 'main':
Exemplo_610.c:29:2: warning: call to 'gets' declared with attribute warning: Using gets() is always unsafe - use fgets() instead [-Wattribute-warning]
   29 |  gets ( S );
      |  ^~~~~~~~~~
EXEMPLO610 - PROCURAR OCORRENCIAS DE UMA LETRA

FORNECER UMA SENTENCA COM MENOS DE 30 CARACTERES : qwoeurqoweur

FORNECER UMA LETRA PARA SER PROCURADA : i

RESPOSTA = 0

PRESSIONAR <Enter> PARA TERMINAR


*/