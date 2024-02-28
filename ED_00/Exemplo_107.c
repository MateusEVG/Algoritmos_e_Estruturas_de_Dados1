// ------------------------------------ EXEMPLO107
// bibliotecas de funcoes auxiliares
#include <stdio.h>  // para entradas e saídas
#include <stdlib.h> // para outras funcoes de uso geral
int main() {
  // definicao de constante
  const float PI = 3.14; // com nome e tipo (melhor)
  printf("EXEMPLO107 - PRIMEIRO EXEMPLO EM C");
  printf("\nMATRICULA: ______ ALUNO : __________________");
  printf("\nEXEMPLOS DE VALORES : ");
  printf("\nCARACTERE : %c", 'A'); // letra ou simbolo
  printf("\nINTEIRO : %d", 10);    // valor sem parte fracionaria
  printf("\nREAL : %f", PI);       // constante real
  printf("\nPRESSIONAR <Enter> PARA TERMINAR.");
  getchar(); // para esperar
  return (EXIT_SUCCESS);
} // fim do programa

/*

saidas 

EXEMPLO107 - PRIMEIRO EXEMPLO EM C
MATRICULA: ______ ALUNO : __________________
EXEMPLOS DE VALORES : 
CARACTERE : A
INTEIRO : 10
REAL : 3.140000
PRESSIONAR <Enter> PARA TERMINAR.

*/