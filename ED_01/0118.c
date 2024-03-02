/*
@author : Mateus Evangelista do Nascimento
Data : 02/03/2024
*/

/*
Fazer um programa (0118) para:
- definir e ler três valores reais do teclado;
- supor que esses valores correspondam ao comprimento, à largura e à altura
 de um paralelepípedo, respectivamente,
- calcular e mostrar o volume do sólido com um oitavo desses valores.
Exemplo: valores = 3.0, 4.0 e 5.0
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
    double z = 0;

    // identificacao e entrada de dados
    printf("\nInsira tres valores reais para lados de um paralelepipedo e veja a area com 1/8 do lado:\n Primeiro valor:\n");
    scanf("%lf", &x); // primeiro valor
    printf("\nSegundo valor : \n");
    scanf("%lf", &y); // segundo valor
    printf("\nTerceiro valor: \n");
    scanf("%lf", &z); // terceiro valor

    // saida
    printf("\nA area do paralelepipedo com 1/8 do lado inserido e :%lf", (x / 8) * (y / 8) * (z / 8));

    return 0;
}
/*
saidas 

Insira tres valores reais para lados de um paralelepipedo e veja a area com 1/8 do lado:
 Primeiro valor:
5

Segundo valor : 
6

Terceiro valor: 
7

A area do paralelepipedo com 1/8 do lado inserido e :0.410156
*/