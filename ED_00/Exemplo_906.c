// ------------------------------------ EXEMPLO906
// bibliotecas de funcoes auxiliares
#include <stdio.h> // para entradas e saídas
#include <stdlib.h> // para outras funcoes de uso geral
#include <math.h> // para funcoes matematicas
#include <fcntl.h> // para arquivos
typedef struct SPONTOS { float X,Y,Z; } PONTOS;
int main ( void )
{
// PROGRAMA PARA ACRESCENTAR COORDENADAS DE PONTOS
// DADOS:
 PONTOS P;
 int X = 0;
 FILE* A;
 printf ( "EXEMPLO906 - ACRESCENTAR COORDENADAS DE PONTOS \n" );
 A = fopen ( "PONTOS2.DAT", "r+b" );
 while( ! feof(A) )
 fread ( &P, sizeof(PONTOS), 1, A );// LER ATE' O FIM DE ARQUIVO
 fseek ( A, 0L, SEEK_CUR ); // MARCAR A POSICAO
 for ( X = 1; X <= 2; X++ )
 {
 printf ( "\nENTRE COM AS COORDENADAS DE OUTRO PONTO : \n" );
 scanf ( "%f%f%f", &P.X, &P.Y, &P.Z );
 getchar( ); // limpar a entrada de dados
 fwrite ( &P, sizeof(PONTOS), 1, A );
 } // FIM REPETIR
 fclose ( A );
 printf ( "\n\nPRESSIONAR <Enter> PARA TERMINAR" );
 getchar ( ); // para esperar
 return ( EXIT_SUCCESS );
} // fim do programa

/*

saidas 

EXEMPLO906 - ACRESCENTAR COORDENADAS DE PONTOS 

ENTRE COM AS COORDENADAS DE OUTRO PONTO : 
3
7
4

ENTRE COM AS COORDENADAS DE OUTRO PONTO : 
1
7
4


PRESSIONAR <Enter> PARA TERMINAR

*/