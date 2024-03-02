/*
@author : Mateus Evangelista do Nascimento
Data : 02/03/2024
*/

/*
Fazer um programa (0120) para:
- definir e ler um valor real do teclado;
- supor que esse valor represente o raio de uma esfera,
 calcular e mostrar o volume de uma esfera com três quartos do raio.
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

    // identificacao e entrada de dados
    printf("\nInsira um valor real para o raio de uma esfera e veja o volume com 3/4 do raio:\n");
    scanf("%lf", &x);

    // saida
    printf("\nO volume da esfera com 3/4 do raio e : \n%lf", (pow(x * 3 / 4, 3) * 3.14159265358979323846) * 4 / 3);

    return 0;
}