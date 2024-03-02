/*
@author : Mateus Evangelista do Nascimento
Data : 02/03/2024
*/

/*
Fazer um programa (0116) para:
- definir e ler um valor real do teclado;
- supor que esse valor represente o lado de um triângulo equilátero,
 calcular e mostrar a altura, área e o perímetro do triângulo com o triplo do lado.
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
    printf("\nInsira um valor real para o lado de um triangulo equilatero e veja a area , altura e o perimetro com o triplo do lado:\n");
    scanf("%lf", &x);

    // saida 
    printf("\nA area do triangulo com o triplo do lado e %lf, a altura e %lf e o perimetro e %lf", e_trian_area(3*x), tri_rect_miss_side(x*3,x*1.5,0), 3*3*x);



    return 0;
}

/*
saida 

Insira um valor real para o lado de um triangulo equilatero e veja a area , altura e o perimetro com o triplo do lado:
5

A area do triangulo com o triplo do lado e 97.427858, a altura e 12.990381 e o perimetro e 45.000000
*/


