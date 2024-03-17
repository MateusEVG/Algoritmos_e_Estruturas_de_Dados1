/*
Autor: Mateus Evangelista do Nascimento
Criado em 26/02/2024
Biblioteca criada para funções de AED1 cursado no primeiro semestre de 2024
*/

// Bibliotecas dependentes
#include <stdio.h>   // para entradas e saidas
#include <stddef.h>  // para definicoes basicas
#include <stdlib.h>  // para a biblioteca padrao
#include <string.h>  // para cadeias de caracteres
#include <stdarg.h>  // para tratar argumentos
#include <stdbool.h> // para definicoes logicas
#include <ctype.h>   // para tipos padroes
#include <math.h>    // para definicoes matematicas
#include <time.h>    // para medir tempo
#include <wchar.h>   // para 16-bit characters
#include <iso646.h>  // para and, or, xor, not alternatives

// ----------------------------------------------------- ED 01 --------------------------------------------------------------------

// ------------------------ funcoes de natureza geometrica e aritmetica

/*
multiplica o valor do lado do quadrado por 3 e mostra sua nova area
@param x lado de um quadrado
*/
int square_area_3x(int x)
{

    // dados
    const int b = 3;
    int y = 0;

    // procedimento
    y = (x * b) * (x * b);

    // retorno
    return (y);
}

/*
calcula a area de um quadrado
@param x lado de um quadrado
*/
double square_area(double x)
{

    // variaveis
    double area = 0;

    // calculo da area
    area = ((x * x));

    return area;
}

/*
calcula o perimetro de um quadrado
@param x lado de um quadrado
*/
double square_perim(double x)
{
    // variaveis
    double perim = 0;

    // procedimento
    perim = (4.0 * x);

    return (perim);
}

/*
funcao que retorna uma area de um retangulo
@param x lado de um retangulo
@param y outro lado de um retangulo
*/
double rect_area(double x, double y)
{
    // variaveis
    double area = 0;

    // procedimentos
    area = (x * y);

    return (area);
}

/*
funcao que calcula o perimetro de um retangulo
@param x lado de um retangulo
@param y outro lado de um retangulo
*/
double rect_perim(double x, double y)
{

    // variaveis
    double perimetro = 0;

    // procedimento
    perimetro = ((2 * x) + (2 * y));

    return (perimetro);
}

/*
- funcao que calcula a hipotenusa, cateto oposto ou adjacente faltante
- Insira 0 para o valor que se quer descobrir
- Só funciona se os outros dois valores estiverem corretos
@param h hipotenusa do triangulo retangulo
@param c1 cateto oposto ou adjacente
@param c2 cateto oposto ou adjacente
*/
double tri_rect_miss_side(double h, double c1, double c2)
{
    // variaveis
    double miss_h = 0.0;
    double miss_c1 = 0.0;
    double miss_c2 = 0.0;
    double real_return = 0.0;

    // calcula hipotenusa
    if (h == 0)
    {
        miss_h = sqrt((c1 * c1 + c2 * c2));
        real_return = miss_h;
    }
    // calcula cateto
    else if (c1 == 0)
    {
        miss_c1 = sqrt(h * h - c2 * c2);
        real_return = miss_c1;
    }
    // calcula cateto
    else if (c2 == 0)
    {
        miss_c2 = sqrt(h * h - c1 * c1);
        real_return = miss_c2;
    }

    return (real_return);
}

/*
funcao que calcula a area do triangulo equilatero
@param L lado do triangulo equilatero
*/
double e_trian_area(int l){
    // variaveis 
    double area = 0;
    // calculo 
    area =  l*l *(sqrt(3))/4 ;

    return (area);

}

// ----------------------------------------------------- ED 02 --------------------------------------------------------------------

// ----------------------------------------------------- ED 03 --------------------------------------------------------------------

// ----------------------------------------------------- ED 04 --------------------------------------------------------------------

// ----------------------------------------------------- ED 05 --------------------------------------------------------------------

// ----------------------------------------------------- ED 06 --------------------------------------------------------------------

// ----------------------------------------------------- ED 07 --------------------------------------------------------------------

// ----------------------------------------------------- ED 08 --------------------------------------------------------------------

// ----------------------------------------------------- ED 09 --------------------------------------------------------------------

