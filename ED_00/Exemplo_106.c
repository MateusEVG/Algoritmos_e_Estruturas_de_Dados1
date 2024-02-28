// ------------------------------------ EXEMPLO106
// bibliotecas de funcoes auxiliares
#include <stdio.h>  // para entradas e saídas
#include <stdlib.h> // para outras funcoes de uso geral
#define PI 3.1415   // definicao de macro (nome para substituir valor)
int main() {
  printf("EXEMPLO106 - PRIMEIRO EXEMPLO EM C ");
  printf("\nMATRICULA: ______ ALUNO : __________________");
  printf("\nEXEMPLOS DE VALORES : ");
  printf("\nCARACTERE : %c", 'A'); // letra ou simbolo
  printf("\nINTEIRO : %d", 10);    // valor sem parte fracionaria
  printf("\nREAL : %f", PI);       // emprego de macro
  printf("\nPRESSIONAR <Enter> PARA TERMINAR.");
  getchar(); // para esperar
  return (EXIT_SUCCESS);
} // fim do programa

/*

saidas

EXEMPLO106 - PRIMEIRO EXEMPLO EM C
MATRICULA: ______ ALUNO : __________________
EXEMPLOS DE VALORES :
CARACTERE : A
INTEIRO : 10
REAL : 3.141500
PRESSIONAR <Enter> PARA TERMINAR.

*/