// ------------------------------------ EXEMPLO204
// bibliotecas de funcoes auxiliares
#include <stdio.h> // para entradas e saídas
#include <stdlib.h> // para outras funcoes de uso geral
int main ( )
{
// PROGRAMA PARA LER E IMPRIMIR, NO MAXIMO, 10 CARACTERES
// VARIAVEL:
 char X [10];
 printf ( "EXEMPLO204 - LER E IMPRIMIR, NO MAXIMO, 09 CARACTERES" );
 printf ( "\nDIGITE, NO MAXIMO, 09 CARACTERES QUAISQUER: " );
 scanf ( "%s", X ); // OBS.: NAO usar o (&) para caracteres !
 getchar( ); // limpar a entrada de dados
 printf ( "\nFOI DIGITADO: %s", X );
 printf ( "\nPRESSIONAR <Enter> PARA TERMINAR." );
 getchar( ); // para esperar
 return ( EXIT_SUCCESS );
} // fim do programa

/*

saidas 

EXEMPLO204 - LER E IMPRIMIR, NO MAXIMO, 09 CARACTERES
DIGITE, NO MAXIMO, 09 CARACTERES QUAISQUER: iwehw2975

FOI DIGITADO: iwehw2975
PRESSIONAR <Enter> PARA TERMINAR.

*/