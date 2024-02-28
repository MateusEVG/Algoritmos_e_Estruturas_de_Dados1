// ------------------------------------ EXEMPLO804
// bibliotecas de funcoes auxiliares
#include <stdio.h> // para entradas e saídas
#include <stdlib.h> // para outras funcoes de uso geral
#include <math.h> // para funcoes matematicas
typedef double PONTOS[3]; // X, Y, Z
typedef
 struct SVETOR
 { PONTOS P1, P2; }
VETOR;
int main ( void )
{
// PROGRAMA PARA CALCULAR A DISTANCIA ENTRE PONTOS
// DADOS:
 VETOR V;
 double D = 0.0;
 printf ( "EXEMPLO804 - DISTANCIA ENTRE PONTOS\n" );
 printf ( "\n ENTRE COM O PRIMEIRO PONTO : \n " );
 scanf ( "%lf %lf %lf", &V.P1[0], &V.P1[1], &V.P1[2] );
 getchar( ); // limpar a entrada de dados
 printf ( "\n ENTRE COM O SEGUNDO PONTO : \n " );
 scanf ( "%lf %lf %lf", &V.P2[0], &V.P2[1], &V.P2[2] );
 getchar( ); // limpar a entrada de dados
 D = sqrt ( pow(V.P2[0]-V.P1[0], 2.0)+
 pow(V.P2[1]-V.P1[1], 2.0)+
 pow(V.P2[2]-V.P1[2], 2.0) );
 printf ( "\n DISTANCIA = %lf", D );
 printf ( "\n\nPRESSIONAR <Enter> PARA TERMINAR" );
 getchar ( ); // para esperar
 return ( EXIT_SUCCESS );
} // fim do programa

/*

saidas 

EXEMPLO804 - DISTANCIA ENTRE PONTOS

 ENTRE COM O PRIMEIRO PONTO : 
 2
6
4

 ENTRE COM O SEGUNDO PONTO : 
 9
0
7

 DISTANCIA = 9.695360

PRESSIONAR <Enter> PARA TERMINAR

*/