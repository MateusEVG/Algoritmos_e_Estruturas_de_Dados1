/*
Autor: Mateus Evangelista do Nascimento
ED_01 - 01E2
*/

/*
Fazer um programa (01E2) para:
- definir e ler um valor real do teclado;
- supor que esse valor represente o volume de uma esfera;
- calcular e mostrar o raio de cinco oitavos do volume da esfera e a área de sua superfície.
 DICA: Usar constantes reais em expressões que envolvam valores reais.
Exemplo: valor = 5.0
*/

// Biblioteca para AED1
#include "My_AED1.h" // Biblioteca criada para funções de AED1 cursado no primeiro semestre de 2024

// definicoes
#define PI 3.14159265358979323846

/*
função principal
*/
int main(void)
{

    // variaveis
    double x = 0;
    double raio = 0;
    double area = 0;

    // identificacao e entrada de dados
    printf("\nInsira um valor real para o volume de uma esfera e veja o raio de 5/8 do volume e sua area:\n");
    scanf("%lf", &x);

    raio = pow(x * 5 / 8 / PI / 4 / 3, 1.0 / 3.0);
    area = raio * raio * 4 * PI;

    // saida
    printf("\nO raio de 5/8 desse volume e %lf e sua area e %lf ", raio, area );
    return 0;
}
