// ------------------------------------ EXEMPLO110
// bibliotecas de funcoes auxiliares
#include <stdio.h>  // para entradas e saídas
#include <stdlib.h> // para outras funcoes de uso geral
int main() {
  // definicao de constante
  const double PI = 3.14; // com nome e tipo (melhor)
                          // definicao de variavel real
  float X = 10.01;
  // definicao de variavel inteira
  int I = 10;
  // definicao de variavel caractere
  char N = '\n'; // mudar de linha
  printf("EXEMPLO110 - PRIMEIRO EXEMPLO EM C");
  printf("\nMATRICULA: ______ ALUNO : __________________");
  printf("%c%s", N, "EXEMPLOS DE VALORES : ");
  printf("%c%s%i", N, "INTEIRO : ", I);
  printf("%c%s%f", N, "REAL : ", X);
  printf("%c%s%lf", N, "REAL : ", PI);
  printf("\nPRESSIONAR <Enter> PARA TERMINAR.");
  getchar(); // para esperar
  return (EXIT_SUCCESS);
} // fim do programa

/*

saidas

EXEMPLO110 - PRIMEIRO EXEMPLO EM C
MATRICULA: ______ ALUNO : __________________
EXEMPLOS DE VALORES :
INTEIRO : 10
REAL : 10.010000
REAL : 3.140000
PRESSIONAR <Enter> PARA TERMINAR

*/