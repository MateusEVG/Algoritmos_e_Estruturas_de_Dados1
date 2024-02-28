// ------------------------------------ EXEMPLO201
// bibliotecas de funcoes auxiliares
#include <stdio.h>  // para entradas e saídas
#include <stdlib.h> // para outras funcoes de uso geral
int main() {
  // PROGRAMA PARA LER E IMPRIMIR UM VALOR INTEIRO
  // VARIAVEL:
  int X = 0;
  printf("EXEMPLO201 - LER E IMPRIMIR UM VALOR INTEIRO");
  printf("\nFORNECER UM VALOR INTEIRO QUALQUER: ");
  scanf("%d", &X);
  getchar(); // limpar a entrada de dados
  printf("\nO VALOR DIGITADO FOI: %d", X);
  printf("\nPRESSIONAR <Enter> PARA TERMINAR.");
  getchar(); // para esperar
  return (EXIT_SUCCESS);
} // fim do programa

/*

saidas

EXEMPLO201 - LER E IMPRIMIR UM VALOR INTEIRO
FORNECER UM VALOR INTEIRO QUALQUER: 5

O VALOR DIGITADO FOI: 5
PRESSIONAR <Enter> PARA TERMINAR.

*/