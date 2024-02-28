// ------------------------------------ EXEMPLO805
// bibliotecas de funcoes auxiliares
#include <stdio.h> // para entradas e saídas
#include <stdlib.h> // para outras funcoes de uso geral
#include <math.h> // para funcoes matematicas
typedef struct SPONTO { double X,Y,Z; } PONTO ;
typedef struct SPONTOS { PONTO P1,P2; } PONTOS;
int main ( void )
{
// PROGRAMA PARA CALCULAR A DISTANCIA ENTRE PONTOS
// DADOS:
 PONTOS P;
 double D = 0.0;
 printf ( "EXEMPLO805 - DISTANCIA ENTRE PONTOS\n" );
 printf ( "\n ENTRE COM O PRIMEIRO PONTO : \n " );
 scanf ( "%lf %lf %lf", &P.P1.X, &P.P1.Y, &P.P1.Z );
 getchar( ); // limpar a entrada de dados
 printf ( "\n ENTRE COM O SEGUNDO PONTO : \n " );
 scanf ( "%lf %lf %lf", &P.P2.X, &P.P2.Y, &P.P2.Z );
 getchar( ); // limpar a entrada de dados
 D = sqrt ( pow(P.P2.X-P.P1.X, 2.0) +
 pow(P.P2.Y-P.P1.Y, 2.0) +
 pow(P.P2.Z-P.P1.Z, 2.0) );
 printf ( "\n DISTANCIA = %lf", D );
 printf ( "\n\nPRESSIONAR <Enter> PARA TERMINAR" );
 getchar ( ); // para esperar
 return ( EXIT_SUCCESS );
} // fim do programa

/*

saidas 

EXEMPLO805 - DISTANCIA ENTRE PONTOS

 ENTRE COM O PRIMEIRO PONTO : 
 2
5
6

 ENTRE COM O SEGUNDO PONTO : 
 9
8
7

 DISTANCIA = 7.681146

PRESSIONAR <Enter> PARA TERMINAR

*/