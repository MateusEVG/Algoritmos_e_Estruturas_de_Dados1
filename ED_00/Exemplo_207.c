// ------------------------------------ EXEMPLO207
// bibliotecas de funcoes auxiliares
#include <stdio.h> // para entradas e saídas
#include <stdlib.h> // para outras funcoes de uso geral
#include <stdbool.h> // para valores logicos
int main ( )
{
// PROGRAMA PARA OPERAR VALORES LOGICOS
// VARIAVEIS:
 bool X=false, Y=false, Z=false;
 printf ( "EXEMPLO207 - OPERAR VALORES LOGICOS" );
 X = true;
 Y = false;
 Z = X || Y; // X ou Y
 printf ( "\nA DISJUNCAO ENTRE VERDADEIRO E FALSO = %d", Z );
 Z = X && Y; // X e Y
 printf ( "\nA CONJUNCAO ENTRE VERDADEIRO E FALSO = %d", Z );
 printf ( "\nPRESSIONAR <Enter> PARA TERMINAR." );
 getchar ( ); // para esperar
 return ( EXIT_SUCCESS );
} // fim do programa

/*

saidas 

EXEMPLO207 - OPERAR VALORES LOGICOS
A DISJUNCAO ENTRE VERDADEIRO E FALSO = 1
A CONJUNCAO ENTRE VERDADEIRO E FALSO = 0
PRESSIONAR <Enter> PARA TERMINAR.

*/