/*
 @author Mateus Evangelista do Nascimento
 Data: 02/03/2024
*/

/*
 Fazer um programa (0112) para:
- definir e ler um valor inteiro do teclado;
- supor que esse valor represente o lado de um quadrado,
 calcular e mostrar a área e o perímetro de um quadrado com a metade do tamanho do lado.
Exemplo: valor = 5
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
    double metade = 0;
    double area_nova = 0;
    double perimetro_novo = 0;

    // identificacao e entrada de dados
    printf("\nInsira um valor para representar o lado de um quadrado e veja a area e o perimetro com a metade do tamanho do lado\n");
    scanf("%d", &x); // le e armazena na variavel indicada

    // procedimentos
    metade = x / 2.0;
    area_nova = square_area(metade);
    perimetro_novo = square_perim(metade);

    // saida
    printf("\nA nova area do quadrado e %lf e o novo perimetro e %lf\n", area_nova, perimetro_novo);

    return (0);
}
/*

saidas 

Insira um valor para representar o lado de um quadrado e veja a area e o perimetro com a metade do tamanho do lado
5

A nova area do quadrado e 6.250000 e o novo perimetro e 10.000000

*/