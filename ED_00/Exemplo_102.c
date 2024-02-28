// ------------------------------------ EXEMPLO102
// bibliotecas de funcoes auxiliares
#include <stdio.h>  // para entradas e saídas
#include <stdlib.h> // para outras funcoes de uso geral
int main() {
  system("clear"); // (Windows) para limpar a tela
                   // system ( "clear" ); // (Linux ) para limpar a tela
  // (dependente do sistema operacional)
  printf("EXEMPLO102 - PRIMEIRO EXEMPLO EM C\n");
  system("pause"); // (Windows) para esperar
                   // getchar( ); // para esperar
  // (dependente do sistema operacional)
  return (EXIT_SUCCESS);
} // fim do programa

/*

saidas ambiente linux usando system ( "clear" );

EXEMPLO102 - PRIMEIRO EXEMPLO EM C
sh: 1: pause: not found

*/  
