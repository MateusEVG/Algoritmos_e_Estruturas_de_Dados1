// ------------------------------------ EXEMPLO203
// bibliotecas de funcoes auxiliares
#include <stdio.h>  // para entradas e saídas
#include <stdlib.h> // para outras funcoes de uso geral
int main() {
  // PROGRAMA PARA LER E IMPRIMIR UM CARACTERE
  // VARIAVEL:
  char X = '0';
  printf("EXEMPLO203 - LER E IMPRIMIR UM CARACTERE");
  printf("\nFORNECER UM CARACTERE QUALQUER: ");
  scanf("%c", &X);
  getchar(); // limpar a entrada de dados
  printf("\nO VALOR DIGITADO FOI: %c", X);
  printf("\nPRESSIONAR <Enter> PARA TERMINAR.");
  getchar(); // para esperar
  return (EXIT_SUCCESS);
} // fim do programa

/*

saidas

EXEMPLO203 - LER E IMPRIMIR UM CARACTERE
FORNECER UM CARACTERE QUALQUER: a

O VALOR DIGITADO FOI: a
PRESSIONAR <Enter> PARA TERMINAR.

*/