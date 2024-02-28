// ------------------------------------ EXEMPLO608
// bibliotecas de funcoes auxiliares
#include <stdio.h> // para entradas e saídas
#include <stdlib.h> // para outras funcoes de uso geral
#include <stdbool.h> // para definicoes logicas
#include <string.h> // para strlen()
typedef char STRING30 [30];
bool PROCURAR
 ( char LETRA, STRING30 S, int POSICAO )
{
// DADO :
 bool R = false;
 if ( POSICAO <= strlen( S ) )
 R = ( S [ POSICAO ] == LETRA) || PROCURAR ( LETRA,S,POSICAO+1 );
 else
 R = false;
 return ( R );
} // fim funcao PROCURAR ( )
int main ( void )
{
// PROGRAMA RECURSIVO PARA ACHAR A POSICAO DE UMA LETRA
// DADO :
 char L = '_';
 STRING30 S = "";
 printf ( "EXEMPLO608 - PROCURAR UMA LETRA EM UMA SENTENCA\n" );
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

Exemplo_608.c: In function 'main':
Exemplo_608.c:27:2: warning: call to 'gets' declared with attribute warning: Using gets() is always unsafe - use fgets() instead [-Wattribute-warning]
   27 |  gets ( S );
      |  ^~~~~~~~~~
EXEMPLO608 - PROCURAR UMA LETRA EM UMA SENTENCA

FORNECER UMA SENTENCA COM MENOS DE 30 CARACTERES : sldjfalsjdfas

FORNECER UMA LETRA PARA SER PROCURADA : j

RESPOSTA = 1

PRESSIONAR <Enter> PARA TERMINAR


------------------------------------------ MENSAGEM DE ERRO MAS FUNCIONOU ----------------------------


*/