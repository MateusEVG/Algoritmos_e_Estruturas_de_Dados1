// ------------------------------------ EXEMPLO103
// bibliotecas de funcoes auxiliares
#include <stdio.h>                 // para entradas e saídas
#include <stdlib.h>                // para outras funcoes de uso geral
void clrscr() { system("clear"); } // para Windows
// void clrscr ( ) { system ( "clear" ); } // para Linux
int main() {
  clrscr(); // funcao para limpar a tela
  printf("EXEMPLO103 - PRIMEIRO EXEMPLO EM C");
  printf("\n"); // para mudar de linha
  printf("MATRICULA: ______ ALUNO : __________________");
  printf("\nPRESSIONAR <Enter> PARA TERMINAR.");
  getchar(); // para esperar
  return (EXIT_SUCCESS);
} // fim do programa

/*

saidas em linux com clear corrigido

EXEMPLO103 - PRIMEIRO EXEMPLO EM C
MATRICULA: ______ ALUNO : __________________
PRESSIONAR <Enter> PARA TERMINAR.


*/