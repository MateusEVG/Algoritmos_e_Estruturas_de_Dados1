// ------------------------------------ EXEMPLO303
// bibliotecas de funcoes auxiliares
#include <stdio.h> // para entradas e saídas
#include <stdlib.h> // para outras funcoes de uso geral
int main ( )
{
// PROGRAMA PARA LER CARACTERE E VERIFICAR SE E' UM ALGARISMO
// VARIAVEL:
 char X = '0';
 printf ( "EXEMPLO303 - LER E TESTAR UM CARACTERE" );
 printf ( "\nFORNECER UM ALGARISMO QUALQUER: " );
 scanf ( "%c", &X );
 getchar( ); // limpar a entrada de dados
 if( X >= '0' && X <= '9' )
 {
 printf ( "\nO VALOR DIGITADO FOI UM ALGARISMO" );
 printf ( "\nO ALGARISMO DIGITADO FOI: %c", X );
 } // if ALGARISMO
 printf ( "\nPRESSIONAR <Enter> PARA TERMINAR." );
 getchar( ); // para esperar
 return ( EXIT_SUCCESS );
} // fim do programa

/*

saidas 

EXEMPLO303 - LER E TESTAR UM CARACTERE
FORNECER UM ALGARISMO QUALQUER: 3

O VALOR DIGITADO FOI UM ALGARISMO
O ALGARISMO DIGITADO FOI: 3
PRESSIONAR <Enter> PARA TERMINAR.

*/