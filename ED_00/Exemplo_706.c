// ------------------------------------ EXEMPLO706
// bibliotecas de funcoes auxiliares
#include <stdio.h> // para entradas e saídas
#include <stdlib.h> // para outras funcoes de uso geral
typedef float POLINOMIO[10+1]; // posicoes de 0:10
int main ( void )
{
// PROGRAMA PARA AVALIAR UM POLINOMIO
// VARIAVEIS :
 POLINOMIO P;
 int Y = 0 , N = 0 ;
 float X = 0.0, PX = 0.0;
 printf ( "EXEMPLO706 - LER COEFICIENTES DE UM POLINOMIO\n" );
 printf ( "\nFORNECER O GRAU DO POLINOMIO : " );
 scanf ( "%d", &N );
 getchar( ); // limpar a entrada de dados
// REPETIR PARA CADA POSICAO
 for ( Y = 0; Y <= N; Y++ )
 {
 printf ( "\nFORNECER O %do. COEFICIENTE : ", (Y+1) );
 scanf ( "%f", &P[ Y ] );
 getchar( ); // limpar a entrada de dados
 } // FIM REPETIR
 printf ( "\nFORNECER O PONTO DE AVALIACAO : " );
 scanf ( "%f", &X );
 getchar( ); // limpar a entrada de dados
 PX = 0.0;
// REPETIR PARA CADA POSICAO
// DA ULTIMA ATE' A PRIMEIRA
 for ( Y = N; Y >= 0; Y-- )
 PX = PX * X + P[ Y ];
 printf ( "\nP%d = %f", X, PX );
 printf ( "\n\nPRESSIONAR <Enter> PARA TERMINAR" );
 getchar ( ); // para esperar
 return ( EXIT_SUCCESS );
} // fim do programa

/*

saidas 

EXEMPLO706 - LER COEFICIENTES DE UM POLINOMIO

FORNECER O GRAU DO POLINOMIO : 3

FORNECER O 1o. COEFICIENTE : 5

FORNECER O 2o. COEFICIENTE : 3

FORNECER O 3o. COEFICIENTE : 2

FORNECER O 4o. COEFICIENTE : 5

FORNECER O PONTO DE AVALIACAO : 6

P0 = 1175.000000

PRESSIONAR <Enter> PARA TERMINAR


*/