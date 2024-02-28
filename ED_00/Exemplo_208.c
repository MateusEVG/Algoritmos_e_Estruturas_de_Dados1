// ------------------------------------ EXEMPLO208
// bibliotecas de funcoes auxiliares
#include <stdio.h> // para entradas e saídas
#include <stdlib.h> // para outras funcoes de uso geral
int main ( )
{
// PROGRAMA PARA CALCULAR A VELOCIDADE DE UM VEICULO
// VARIAVEIS:
 double D = 0.0, // Distancia
 T = 0.0, // Tempo
 V = 0.0; // Velocidade
 printf ( "EXEMPLO208 - CALCULAR A VELOCIDADE DE UM VEICULO" );
 printf ( "\nFORNECER UMA DISTANCIA QUALQUER EM METROS: " );
 scanf ( "%lf", &D );
 getchar( ); // limpar a entrada de dados
 printf ( "\nFORNECER O TEMPO PARA PERCORRE-LA EM SEGUNDOS: " );
 scanf ( "%lf", &T );
 getchar( ); // limpar a entrada de dados
 V = D / T;
 printf ( "\nV = D / T = %lf%s", V, " m/s " );
 printf ( "\nPRESSIONAR <Enter> PARA TERMINAR." );
 getchar( ); // para esperar
 return ( EXIT_SUCCESS );
} // fim do programa

/*

saidas 


EXEMPLO208 - CALCULAR A VELOCIDADE DE UM VEICULO
FORNECER UMA DISTANCIA QUALQUER EM METROS: 6

FORNECER O TEMPO PARA PERCORRE-LA EM SEGUNDOS: 3

V = D / T = 2.000000 m/s 
PRESSIONAR <Enter> PARA TERMINAR.

*/
