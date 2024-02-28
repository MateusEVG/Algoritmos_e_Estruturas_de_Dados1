// ------------------------------------ EXEMPLO909
// bibliotecas de funcoes auxiliares
#include <stdio.h> // para entradas e saídas
#include <stdlib.h> // para outras funcoes de uso geral
#include <math.h> // para funcoes matematicas
#include <fcntl.h> // para arquivos
typedef struct SPONTOS { float X,Y,Z; } PONTOS;
int main ( void )
{
// PROGRAMA PARA ALTERAR COORDENADAS DE PONTOS
// DADOS:
 PONTOS P;
 int X = 0;
 FILE* A;
 printf ( "EXEMPLO909 - ALTERAR COORDENADAS DE PONTOS \n" );
 A = fopen( "PONTOS2.DAT", "r+b" );
 for ( X = 1; X <= 2; X++ )
 {
 fseek ( A, (X-1)*sizeof(PONTOS), SEEK_SET ); // o primeiro e' zero
 fread ( &P, sizeof(PONTOS), 1, A );
 printf ( "\nATUAL %d : %6.2f %6.2f %6.2f\n", X, P.X, P.Y, P.Z );
 printf ( "\nENTRE COM AS NOVAS COORDENADAS DO PONTO : \n" );
 scanf ( "%f%f%f", &P.X, &P.Y, &P.Z );
 fseek ( A, (X-1)*sizeof(PONTOS), SEEK_SET );
 fwrite ( &P, sizeof(PONTOS), 1, A );
 } // FIM REPETIR
 fclose(A);
 printf ( "\n\nPRESSIONAR <Enter> PARA TERMINAR" );
 getchar ( ); // para esperar
 return ( EXIT_SUCCESS );
} // fim do programa

/*

saidas 

EXEMPLO909 - ALTERAR COORDENADAS DE PONTOS 

ATUAL 1 :   8.00  23.00   7.00

ENTRE COM AS NOVAS COORDENADAS DO PONTO : 
4
6
7

ATUAL 2 :  12.00 456.00  87.00

ENTRE COM AS NOVAS COORDENADAS DO PONTO : 

PRESSIONAR <Enter> PARA TERMINAR


*/