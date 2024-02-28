// ------------------------------------ EXEMPLO808
// bibliotecas de funcoes auxiliares
#include <stdio.h> // para entradas e saídas
#include <stdlib.h> // para outras funcoes de uso geral
#include <math.h> // para funcoes matematicas
typedef double VETOR1[3];// X, Y, Z
typedef VETOR1 VETOR [2];
int main ( void )
{
// PROGRAMA PARA CALCULAR A DISTANCIA ENTRE PONTOS
// DADOS:
 VETOR P;
 double D = 0.0;
 printf ( "EXEMPLO808 - DISTANCIA ENTRE PONTOS\n" );
 printf ( "\n ENTRE COM O PRIMEIRO PONTO : \n " );
 scanf ( "%lf %lf %lf", &P[0][0], &P[0][1], &P[0][2] );
 getchar( ); // limpar a entrada de dados
 printf ( "\n ENTRE COM O SEGUNDO PONTO : \n " );
 scanf ( "%lf %lf %lf", &P[1][0], &P[1][1], &P[1][2] );
 getchar( ); // limpar a entrada de dados
 D = sqrt( pow(P[1][0]-P[0][0], 2.0) +
 pow(P[1][1]-P[0][1], 2.0) +
 pow(P[1][2]-P[0][2], 2.0) );
 printf ( "\n DISTANCIA = %lf", D );
 printf ( "\n\nPRESSIONAR <Enter> PARA TERMINAR" );
 getchar ( ); // para esperar
 return ( EXIT_SUCCESS );
} // fim do programa

/*

saidas 

EXEMPLO808 - DISTANCIA ENTRE PONTOS

 ENTRE COM O PRIMEIRO PONTO : 
 3
4
5

 ENTRE COM O SEGUNDO PONTO : 
 9
8
7

 DISTANCIA = 7.483315

PRESSIONAR <Enter> PARA TERMINAR

*/