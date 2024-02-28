// ------------------------------------ EXEMPLO903
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
 printf ( "EXEMPLO903 - GRAVAR COORDENADAS DE PONTOS \n" );
 A = fopen ( "PONTOS2.DAT", "wb" );
 for ( X = 1; X <= 2; X++ )
 {
 printf ( "\nENTRE COM AS COORDENADAS DE UM PONTO : \n" );
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

EXEMPLO903 - GRAVAR COORDENADAS DE PONTOS 

ENTRE COM AS COORDENADAS DE UM PONTO : 
8
23
7

ENTRE COM AS COORDENADAS DE UM PONTO : 
12
456
87


PRESSIONAR <Enter> PARA TERMINAR


*/