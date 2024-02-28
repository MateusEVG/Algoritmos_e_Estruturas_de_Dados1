/*
 Exemplo0002 - v1.0. - 19/02/2024
 Author: Mateus Evangelista do Nascimento

*/

// dependencias
#include <stdio.h> // para as entradas e saídas
#include <stdlib.h> // para outras funcoes de uso geral 

/*
 Função principal.
 @return codigo de encerramento
 @param argc - quantidade de parametros na linha de comandos
 @param argv - arranjo com o grupo de parametros na linha de comando
*/
int main(int argc, char *argv[])
{

    // deninir dados / resultados
    int opcao = 0;

    // identificar
    printf("%s\n", "Exemplo0002 - Programa = v1.0");
    printf("%s\n", "Autor: Mateus Evangelista do Nascimento");
    printf("\n"); // mudar de linha

    // acoes 
    // ler a opcao do teclado 
    printf("\n%s", "opcao = ");
    scanf("%d", &opcao);
    getchar(); // para limpar a entrada de dados 

    // para mostrar a opcao lida 
    printf("\n%s%d", "opcao = ", opcao);


    // encerrar 
    printf("\n\n Apertar ENTER para terminar.");
    getchar(); // aguardar por ENTER
    return(0); // voltar ao SO (sem erros)

} // end main()

/*

saidas 

Exemplo0002 - Programa = v1.0
Autor: Mateus Evangelista do Nascimento


opcao = 2

opcao = 2

 Apertar ENTER para terminar.

*/