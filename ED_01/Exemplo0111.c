/*
Autor: Mateus Evangelista do Nascimento
ED_01 - Exemplo0111
*/

/*
Resolver:  Fazer um programa (0111) para:
- definir e ler um valor inteiro do teclado;
- supor que esse valor represente o lado de um quadrado, calcular e mostrar a área de outro quadrado com o lado três vezes maior.
 DICA: Usar constantes reais em expressões que envolvam valores reais.
*/

// Biblioteca para AED1
#include "My_AED1.h" // Biblioteca criada para funções de AED1 cursado no primeiro semestre de 2024

// função principal
/*
 Lê um valor inteiro do teclado, supõe que representa um lado de um quadrado
 e calcula uma área de outro quadrado com 3x o lado do valor lido
*/
int main(void)
{

    // variaveis
    int x = 0;
    int y = 0;

    // identificação
    printf("\n\n Le um valor inteiro do teclado, supoe que representa um lado de um quadrado e calcula uma area de outro quadrado com 3x o lado do valor lido\n");

    // ler o valor do teclado
    printf("\nInsira um valor inteiro :\n"); // saída
    scanf("%d", &x);                         // lê o valor (entrada)
    getchar();                               // consertar entrada

    // procedimento
    y = Area_quadrado_3x(x); // consultar na biblioteca My_AED1.h

    // saida
    printf("\nA area do novo quadrado e: %d metros quadrados", y);

    return 0;
}
