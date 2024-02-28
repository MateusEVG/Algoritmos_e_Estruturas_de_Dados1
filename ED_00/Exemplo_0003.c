/*
 Exemplo0003 - v1.0. - 19/02/2024
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
    printf("%s\n", "Exemplo0003 - Programa = v1.0");
    printf("%s\n", "Autor: Mateus Evangelista do Nascimento");
    printf("\n"); // mudar de linha

    // acoes 

    //para mostrar acoes 
    printf("\n%s\n", "opcoes:");
    printf("\n%s", "Terminar");
    printf("\n");


    // ler a opcao do teclado 
    printf("\n%s", "opcao = ");
    scanf("%d", &opcao);
    getchar(); // para limpar a entrada de dados 

    // para mostrar a opcao lida 
    printf("\n%s%d", "opcao = ", opcao);

    // escolher acao dependente da opcao 
    switch (opcao)
    {
    case 0: // nao fazer nada
        break;
    
    default: // comportamento padrao 
             printf("\nERRO: opcao invalida.\n");
        break;
    } // end switch


    // encerrar 
    printf("\n\n Apertar ENTER para terminar.");
    getchar(); // aguardar por ENTER
    return(0); // voltar ao SO (sem erros)

} // end main()

/*

saidas 

Exemplo0003 - Programa = v1.0
Autor: Mateus Evangelista do Nascimento


opcoes:

Terminar

opcao = 0

opcao = 0

 Apertar ENTER para terminar.

--------------------------------- OUTRO CASO ------------------------------------


opcoes:

Terminar

opcao = 2

opcao = 2
ERRO: opcao invalida.


 Apertar ENTER para terminar.

*/