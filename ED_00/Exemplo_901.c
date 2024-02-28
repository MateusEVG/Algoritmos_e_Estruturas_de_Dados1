// ------------------------------------ EXEMPLO901
// bibliotecas de funcoes auxiliares
#include <stdio.h> // para entradas e saídas
#include <stdlib.h> // para outras funcoes de uso geral
#include <math.h> // para funcoes matematicas
#include <fcntl.h> // para arquivos
typedef struct SPONTOS { float X,Y,Z; } PONTOS;
int main ( void )
{
// PROGRAMA PARA GRAVAR COORDENADAS DE PONTOS
// DADOS:
 PONTOS P;
 int X = 0;
 FILE* A;
 printf ( "EXEMPLO901 - GRAVAR COORDENADAS DE PONTOS \n" );
 A = fopen ( "PONTOS1.TXT", "wt" );
 for ( X = 1; X <= 2; X++ )
 {
 printf ( "\nENTRE COM AS COORDENADAS DE UM PONTO : \n" );
 scanf ( "%f%f%f", &P.X, &P.Y, &P.Z );
 getchar( ); // limpar a entrada de dados
 fprintf( A, "%f %f %f\n", P.X, P.Y, P.Z );
 } // FIM REPETIR
 fclose ( A );
 printf ( "\nPRESSIONAR <Enter> PARA TERMINAR" );
 getchar ( ); // para esperar
 return ( EXIT_SUCCESS );
} // fim do programa

/*

saidas 

EXEMPLO901 - GRAVAR COORDENADAS DE PONTOS 

ENTRE COM AS COORDENADAS DE UM PONTO : 
9
3
7

ENTRE COM AS COORDENADAS DE UM PONTO : 
2
6
9

PRESSIONAR <Enter> PARA TERMINAR

*/