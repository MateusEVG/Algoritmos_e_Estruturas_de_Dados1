// ------------------------------------ EXEMPLO907
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
 printf ( "EXEMPLO907 - ACRESCENTAR COORDENADAS DE PONTOS \n" );
 A = fopen ( "PONTOS1.TXT", "at" );
 for( X = 1; X <= 2; X++ )
 {
 printf ( "\nENTRE COM AS COORDENADAS DE OUTRO PONTO : \n" );
 scanf ( "%f%f%f", &P.X, &P.Y, &P.Z );
 getchar( ); // limpar a entrada de dados
 fprintf ( A, "%f %f %f", P.X, P.Y, P.Z );
 fprintf ( A, "%s", "\n" );
 } // FIM REPETIR
 fclose ( A );
 printf ( "\n\nPRESSIONAR <Enter> PARA TERMINAR" );
 getchar ( ); // para esperar
 return ( EXIT_SUCCESS );
} // fim do programa

/*

saidas 

EXEMPLO907 - ACRESCENTAR COORDENADAS DE PONTOS 

ENTRE COM AS COORDENADAS DE OUTRO PONTO : 
3
4
5

ENTRE COM AS COORDENADAS DE OUTRO PONTO : 
8
9
3


PRESSIONAR <Enter> PARA TERMINAR

*/