// ------------------------------------ EXEMPLO905
// bibliotecas de funcoes auxiliares
#include <stdio.h> // para entradas e saídas
#include <stdlib.h> // para outras funcoes de uso geral
#include <math.h> // para funcoes matematicas
#include <fcntl.h> // para arquivos
typedef struct SPONTOS { float X,Y,Z; } PONTOS;
int main ( void )
{
// PROGRAMA PARA COPIAR O ARQUIVO COM COORDENADAS DE PONTOS
// DADOS:
 PONTOS P;
 int X = 0;
 FILE *A1, *A2;
 printf ( "EXEMPLO905 - COPIAR COORDENADAS DE PONTOS \n" );
 A1 = fopen ( "PONTOS1.TXT", "rt" );
 A2 = fopen ( "NOVO1.DAT" , "wb" );
 for ( X = 1; X <= 2; X++ )
 {
 fscanf ( A1, "%f%f%f\n", &P.X, &P.Y, &P.Z );
 fwrite ( &P, sizeof(PONTOS), 1, A2 );
 printf ( "\nCOPIADO %d : %6.2f %6.2f %6.2f\n", X, P.X, P.Y, P.Z );
 } // FIM REPETIR
 fclose ( A1 );
 fclose ( A2 );
 printf ( "\nPRESSIONAR <Enter> PARA TERMINAR" );
 getchar ( ); // para esperar
 return ( EXIT_SUCCESS );
} // fim do programa

/*

saidas 

EXEMPLO905 - COPIAR COORDENADAS DE PONTOS 

COPIADO 1 :   9.00   3.00   7.00

COPIADO 2 :   2.00   6.00   9.00

PRESSIONAR <Enter> PARA TERMINAR


*/