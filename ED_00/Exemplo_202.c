// ------------------------------------ EXEMPLO202
// bibliotecas de funcoes auxiliares
#include <stdio.h>  // para entradas e saídas
#include <stdlib.h> // para outras funcoes de uso geral
int main() {
  // PROGRAMA PARA LER E IMPRIMIR UM VALOR REAL
  // VARIAVEL:
  double X = 0.0;
  printf("EXEMPLO202 - LER E IMPRIMIR UM VALOR REAL");
  printf("\nFORNECER UM VALOR REAL QUALQUER: ");
  scanf("%lf", &X);
  getchar(); // limpar a entrada de dados
  printf("\nO VALOR DIGITADO FOI: %lf", X);
  printf("\nPRESSIONAR <Enter> PARA TERMINAR.");
  getchar(); // para esperar
  return (EXIT_SUCCESS);
} // fim do programa

/*

saidas

EXEMPLO202 - LER E IMPRIMIR UM VALOR REAL
FORNECER UM VALOR REAL QUALQUER: 2.5

O VALOR DIGITADO FOI: 2.500000
PRESSIONAR <Enter> PARA TERMINAR.

*/