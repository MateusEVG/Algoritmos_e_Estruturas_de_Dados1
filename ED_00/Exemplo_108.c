// ------------------------------------ EXEMPLO108
// bibliotecas de funcoes auxiliares
#include <stdio.h>  // para entradas e saídas
#include <stdlib.h> // para outras funcoes de uso geral
int main() {
  // definicao de constante
  const float PI = 3.14; // com nome e tipo (melhor)
                         // definicao de variavel real
  float X = 10.01;       // com atribuicao de valor inicial
  printf("EXEMPLO108 - PRIMEIRO EXEMPLO EM C");
  printf("\nMATRICULA: ______ ALUNO : __________________");
  printf("\nEXEMPLOS DE VALORES : ");
  printf("\nCARACTERE : %c", 'A'); // letra ou simbolo
  printf("\nINTEIRO : %d", 10);    // valor sem parte fracionaria
  printf("\nREAL : %f", PI);       // constante real
  printf("\nREAL : %f", X);        // variavel real
  printf("\nPRESSIONAR <Enter> PARA TERMINAR.");
  getchar(); // para esperar
  return (EXIT_SUCCESS);
} // fim do programa

/*

saidas

EXEMPLO108 - PRIMEIRO EXEMPLO EM C
MATRICULA: ______ ALUNO : __________________
EXEMPLOS DE VALORES :
CARACTERE : A
INTEIRO : 10
REAL : 3.140000
REAL : 10.010000
PRESSIONAR <Enter> PARA TERMINAR.

*/