// ------------------------------------ EXEMPLO801
// bibliotecas de funcoes auxiliares
#include <stdio.h> // para entradas e saídas
#include <stdlib.h> // para outras funcoes de uso geral
#include <math.h> // para funcoes matematicas
typedef
 struct SPONTOS
 {
 double X,Y,Z;
 }
PONTOS;
int main ( void )
{
// PROGRAMA PARA CALCULAR A DISTANCIA ENTRE PONTOS
// DADOS:
 PONTOS P1, P2, P3;
 double D = 0.0;
 printf ( "EXEMPLO801 - DISTANCIA ENTRE PONTOS\n" );
 printf ( "\n ENTRE COM O PRIMEIRO PONTO : \n " );
 scanf ( "%lf %lf %lf", &P1.X, &P1.Y, &P1.Z );
 getchar( ); // limpar a entrada de dados
 printf ( "\n ENTRE COM O SEGUNDO PONTO : \n " );
 scanf ( "%lf %lf %lf", &P2.X, &P2.Y, &P2.Z );
 getchar( ); // limpar a entrada de dados
 P3.X = P2.X - P1.X;
 P3.Y = P2.Y - P1.Y;
 P3.Z = P2.Z - P1.Z;
 D = sqrt ( pow(P3.X, 2.0) +
 pow(P3.Y, 2.0) +
 pow(P3.Z, 2.0) );
 printf ( "\n DISTANCIA = %lf", D );
 printf ( "\n\nPRESSIONAR <Enter> PARA TERMINAR" );
 getchar ( ); // para esperar
 return ( EXIT_SUCCESS );
} // fim do programa

/*

saidas 

EXEMPLO801 - DISTANCIA ENTRE PONTOS

 ENTRE COM O PRIMEIRO PONTO : 
 2
9
5

 ENTRE COM O SEGUNDO PONTO : 
 3
4
5

 DISTANCIA = 5.099020

PRESSIONAR <Enter> PARA TERMINAR

*/