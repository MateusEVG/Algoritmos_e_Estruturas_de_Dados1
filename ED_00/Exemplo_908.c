// ------------------------------------ EXEMPLO908
// bibliotecas de funcoes auxiliares
#include <stdio.h> // para entradas e saídas
#include <stdlib.h> // para outras funcoes de uso geral
#include <stdbool.h> // para definicoes logicas
#include <math.h> // para funcoes matematicas
#include <fcntl.h> // para arquivos
typedef struct SPONTOS { float X,Y,Z; } PONTOS;
int main ( void )
{
// PROGRAMA PARA PROCURAR COORDENADAS DE PONTOS
// DADOS:
 PONTOS P,
 PROCURADO;
 bool ACHAR = false;
 FILE* A;
 printf ( "EXEMPLO908 - PROCURAR COORDENADAS DE PONTOS \n" );

 printf ( "\nENTRE COM AS COORDENADAS DO PONTO A PROCURAR : \n" );
 scanf ( "%f%f%f", &PROCURADO.X, &PROCURADO.Y, &PROCURADO.Z );
 getchar( ); // limpar a entrada de dados
 ACHAR = false;
 A = fopen ( "PONTOS1.TXT", "rt" );
 fscanf ( A, "%f %f %f", &P.X, &P.Y, &P.Z );
 while ( ! feof( A ) && ! ACHAR )
 {
 if ( P.X==PROCURADO.X && P.Y==PROCURADO.Y && P.Z==PROCURADO.Z )
 ACHAR = true;
 fscanf ( A, "%f%f%f", &P.X, &P.Y, &P.Z );
 } // FIM REPETIR
 fclose ( A );
 if ( ACHAR )
 printf ( "\nCOORDENADAS ENCONTRADAS" );
 else
 printf ( "\nCOORDENADAS NAO ENCONTRADAS" );
 printf ( "\n\nPRESSIONAR <Enter> PARA TERMINAR" );
 getchar ( ); // para esperar
 return ( EXIT_SUCCESS );
} // fim do programa

/*

saidas 

EXEMPLO908 - PROCURAR COORDENADAS DE PONTOS 

ENTRE COM AS COORDENADAS DO PONTO A PROCURAR : 
3
5
6

COORDENADAS NAO ENCONTRADAS

PRESSIONAR <Enter> PARA TERMINAR

*/