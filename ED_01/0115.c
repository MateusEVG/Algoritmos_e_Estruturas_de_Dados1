/*
@author : Mateus Evangelista do Nascimento
Data : 02/03/2024
*/

/*
Fazer um programa (0115) para:
- definir e ler dois valores reais do teclado;
- supor que esses dois valores representem base e altura de um triângulo,
 calcular e mostrar a área de um triângulo com o dobro da altura do mesmo.
 DICA: Usar constantes reais em expressões que envolvam valores reais.
Exemplo: valores = 3 e 4
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
    printf("\nInsira dois valores reais para base e altura de um triangulo e veja a area com o doblo da altura\n\n Primeiro valor:\n");
    scanf("%lf", &x); // primeiro valor
    printf("\nSegundo valor:\n");
    scanf("%lf", &y); // segundo valor

    printf("\nA area do triangulo com o dobro da altura e %lf", rect_area(2 * x, y) / 2);

    return 0;
}
