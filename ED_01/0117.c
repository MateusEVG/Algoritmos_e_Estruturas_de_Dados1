/*
@author : Mateus Evangelista do Nascimento
Data : 02/03/2024
*/

/*
Fazer um programa (0117) para:
- definir e ler um valor real do teclado;
- supor que esse valor represente a medida de lados de um cubo,
 calcular e mostrar o volume do sólido com cinco vezes a medida do lado.
 DICA: Usar constantes reais em expressões que envolvam valores reais.
Exemplo: valor = 5.0
*/

// bibliotecas
#include "My_AED1.h"

/*
funcao principal
*/
int main()
{
    // variaveis
    double x = 0;
    double y = 0;

    // identificacao e entrada de dados
    printf("\nInsira um valor real para o lado de um cubo e veja a area 5x o lado:\n");
    scanf("%lf", &x);

    // saida
    printf("\nA area do cubo com 5x o lado inserido e %lf", (x * 5) * (x * 5) * (x * 5));

    return 0;
}
