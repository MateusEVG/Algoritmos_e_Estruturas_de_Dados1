// bibliotecas de funcoes auxiliares
#include <stdio.h>  // para entradas e saídas
#include <stdlib.h> // para outras funcoes de uso geral
int main() {
  // definicao de constante
  const float PI = 3.14; // com nome e tipo (melhor)
                         // definicao de variavel real
  float X = 10.01;
  // definicao de variavel inteira
  int I = 10;
  printf("EXEMPLO109 - PRIMEIRO EXEMPLO EM C");
  printf("\nMATRICULA: ______ ALUNO : __________________");
  printf("\nEXEMPLOS DE VALORES : ");
  printf("\nINTEIRO : %i", I);
  printf("\nREAL : %f", X);
  printf("\nREAL : %f", PI);
  printf("\nPRESSIONAR <Enter> PARA TERMINAR.");
  getchar(); // para esperar
  return (EXIT_SUCCESS);
} // fim do programa

/*

saidas

EXEMPLO109 - PRIMEIRO EXEMPLO EM C
MATRICULA: ______ ALUNO : __________________
EXEMPLOS DE VALORES : 
INTEIRO : 10
REAL : 10.010000
REAL : 3.140000
PRESSIONAR <Enter> PARA TERMINAR.

*/

