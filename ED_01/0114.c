/*
@author : Mateus Evangelista do Nascimento
Data : 02/03/2024
*/

/*
 Fazer um programa (0114) para:
- definir e ler dois valores inteiros do teclado;
- supor que esses dois valores representem lados de um retângulo,
 calcular e mostrar a área e o perímetro de um retângulo com um quarto dos tamanhos dos lados.
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
    printf("\nInsira dois valores inteiros e veja a area e o perimetro de um retangulo com um quarto de seus tamanhos\n\n Primeiro valor:\n");
    scanf("%d", &x); // primeiro valor
    printf("\nSegundo valor:\n");
    scanf("%d", &y); // segundo valor

    // saida
    printf("\nA nova area do retangulo e %lf e o novo perimetro do retangulo e %lf", rect_area(x / 4.0, y / 4.0), rect_perim(x / 4.0, y / 4.0));

    return 0;
}
