// ------------------------------------ EXEMPLO910
// bibliotecas de funcoes auxiliares
#include <stdio.h> // para entradas e saídas
#include <stdlib.h> // para outras funcoes de uso geral
#include <math.h> // para funcoes matematicas
#include <fcntl.h> // para arquivos
typedef struct SPONTOS { float X,Y,Z; } PONTOS;
int main ( void )
{
// PROGRAMA PARA LER ARQUIVO DE PONTOS DIRETAMENTE
// DADOS:
 PONTOS P;
 int X = 0;
 FILE* A;
 printf ( "EXEMPLO910 - LER ARQUIVO DE PONTOS DIRETAMENTE \n" );
 A = fopen ( "PONTOS2.DAT", "r" );
 for ( X = 2; X > 0; X-- )
 {
 fseek ( A, (X-1) * sizeof (PONTOS), SEEK_SET ); // o primeiro e' zero
 fread ( &P, sizeof(PONTOS), 1, A );
 printf ( "\nPONTO %d : %6.2f %6.2f %6.2f\n", X, P.X, P.Y, P.Z );
 } // FIM REPETIR
 fclose( A );
 printf ( "\n\nPRESSIONAR <Enter> PARA TERMINAR" );
 getchar ( ); // para esperar
 return ( EXIT_SUCCESS );
} // fim do programa

/*

saidas 


EXEMPLO910 - LER ARQUIVO DE PONTOS DIRETAMENTE 

PONTO 2 :  12.00 456.00  87.00

PONTO 1 :   8.00  23.00   7.00


PRESSIONAR <Enter> PARA TERMINAR



*/
