// ------------------------------------ EXEMPLO902
// bibliotecas de funcoes auxiliares
#include <stdio.h> // para entradas e saídas
#include <stdlib.h> // para outras funcoes de uso geral
#include <math.h> // para funcoes matematicas
#include <fcntl.h> // para arquivos
typedef struct SPONTOS { float X,Y,Z; } PONTOS;
int main ( void )
{
// PROGRAMA PARA LER ARQUIVO DE PONTOS
// VARIAVEIS :
 PONTOS P;
 int X = 0;
 FILE* A;
 printf ( "EXEMPLO902 - LER ARQUIVO DE PONTOS \n" );
 A = fopen ( "PONTOS1.TXT", "rt" );
 for ( X = 1; X <= 2; X++ )
 {
 fscanf ( A, "%f%f%f", &P.X, &P.Y, &P.Z );
 printf ( "\nPONTO %d : %f %f %f", X, P.X, P.Y, P.Z );
 } // FIM REPETIR
 fclose ( A );
 printf ( "\n\nPRESSIONAR <Enter> PARA TERMINAR" );
 getchar ( ); // para esperar
 return ( EXIT_SUCCESS );
} // fim do programa

/*

saidas 

EXEMPLO902 - LER ARQUIVO DE PONTOS 

PONTO 1 : 9.000000 3.000000 7.000000
PONTO 2 : 2.000000 6.000000 9.000000

PRESSIONAR <Enter> PARA TERMINAR


*/