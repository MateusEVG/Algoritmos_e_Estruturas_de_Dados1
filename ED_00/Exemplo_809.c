// ------------------------------------ EXEMPLO809
// bibliotecas de funcoes auxiliares
#include <stdio.h> // para entradas e saídas
#include <stdlib.h> // para outras funcoes de uso geral
#include <math.h> // para funcoes matematicas
typedef struct SPONTO { double X,Y,Z; } PONTO ;
typedef PONTO VETOR[2];// X, Y, Z
int main ( void )
{
// PROGRAMA PARA CALCULAR A DISTANCIA ENTRE PONTOS
// DADOS:
 VETOR P;
 double D = 0.0;
 printf ( "EXEMPLO809 - DISTANCIA ENTRE PONTOS\n" );
 printf ( "\n ENTRE COM O PRIMEIRO PONTO : \n " );
 scanf ( "%lf%lf%lf", &(P[0].X), &(P[0].Y), &(P[0].Z));
 getchar( ); // limpar a entrada de dados
 printf ( "\n ENTRE COM O SEGUNDO PONTO : \n " );
 scanf ( "%lf%lf%lf", &(P[1].X), &(P[1].Y), &(P[1].Z));
 getchar( ); // limpar a entrada de dados
 D = sqrt ( pow(P[1].X-P[0].X, 2.0) +
 pow(P[1].Y-P[0].Y, 2.0) +
 pow(P[1].Z-P[0].Z, 2.0) );
 printf ( "\n DISTANCIA = %lf", D );
 printf ( "\n\nPRESSIONAR <Enter> PARA TERMINAR" );
 getchar ( ); // para esperar
 return ( EXIT_SUCCESS );
} // fim do programa

/*

saidas 

EXEMPLO809 - DISTANCIA ENTRE PONTOS

 ENTRE COM O PRIMEIRO PONTO : 
 5
9
3

 ENTRE COM O SEGUNDO PONTO : 
 7
3
7

 DISTANCIA = 7.483315

PRESSIONAR <Enter> PARA TERMINAR


*/