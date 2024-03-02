/*
@author : Mateus Evangelista do Nascimento
Data : 02/03/2024
*/

/*
 Fazer um programa (0119) para:
- definir e ler um valor real do teclado;
- supor que esse valor represente o raio de um círculo,
 calcular e mostrar a área de um semicírculo com um sexto do raio.
 DICA: Na biblioteca <math.h> há definição da constante equivalente a PI (M_PI).
 Para certos compiladores será necessário incluir essa biblioteca na compilação:
 gcc -o programa program.c -lm
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
    printf("\nInsira um valor real para o raio de um semicirculo e veja a area com 1/6 do raio:\n");
    scanf("%lf", &x);

    // saida
    printf("\nA area do semicirculo com 1/6 do raio e :%lf", x/6*x/6* 3.14159265358979323846 /2 );

    return 0;
}