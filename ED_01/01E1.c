/*
Autor: Mateus Evangelista do Nascimento
ED_01 - 01E1
*/

/*
 Fazer um programa (01E1) para:
- definir e ler um valor real do teclado;
- supor que esse valor informe a área de uma circunferência,
- calcular e mostrar o raio um sétimo dessa área.
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

    // identificacao e entrada de dados
    printf("\nInsira um valor real para a area de uma circunferencia e veja o raio de 1/7 dessa area:\n");
    scanf("%lf", &x);

    // saida
    printf("\nO raio de 1/7 dessa area e %lf: ", sqrt(x / 7 / PI));
    return 0;
}
