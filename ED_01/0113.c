/*
@author Mateus Evangelista do Nascimento
Data: 02/03/2024
*/

/*
Fazer um programa (0113) para:
- definir e ler dois valores inteiros do teclado;
- supor que esses dois valores representem lados de um retângulo,
 calcular e mostrar a área seis vezes maior.
 DICA: Usar constantes reais em expressões que envolvam valores reais.
Exemplo: valores = 3 e 5
*/

// bibliotecas
#include "My_AED1.h"

/*
funcao principal
*/
int main()
{
    // variaveis
    int x = 0;
    int y = 0;

    // identificacao e entrada de dados
    printf("\nInsira dois valores inteiros para representarem dois lados de um retangulo e veja sua area 6x maior\n \nPrimeiro valor:\n");
    scanf("%d", &x); // primeiro valor
    printf("\nSegundo valor:\n");
    scanf("%d", &y); // segundo valor
    

    // saida 
    printf("\nA area 6x maior de um retangulo com esses lados e %lf", (6 * rect_area((x*1.0),(y*1.0))));

    return 0;
}
/*
saidas 

Insira dois valores inteiros para representarem dois lados de um retangulo e veja sua area 6x maior
 
Primeiro valor:
10

Segundo valor:
20

A area 6x maior de um retangulo com esses lados e 1200 
*/