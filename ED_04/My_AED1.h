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
double e_trian_area(int l)
{
    // variaveis
    double area = 0;
    // calculo
    area = l * l * (sqrt(3)) / 4;

    return (area);
}

// ----------------------------------------------------- ED 02 --------------------------------------------------------------------

// ----------------------------------------------------- ED 03 --------------------------------------------------------------------

// ----------------------------------------------------- ED 04 --------------------------------------------------------------------

/*
Mostra quantos caracteres sao maiusculos maiores que L
@param array cadeia de caracteres
*/
int contaoL(char *array)
{
    // variaveis
    int x = 0;

    for (int i = 0; i < strlen(array); i++)
    {
        if ('L' < array[i] && array[i] <= 'Z')
        {
            x = x + 1;
        } // end if

    } // end for
    return x;
} // end contaoL

/*
mostra as letras maiusculas maiores que L
@param array cadeia de caracteres
*/
void fazoL(char *array)
{
    for (int i = 0; i < strlen(array); i++)
    {
        if ('L' < array[i] && array[i] <= 'Z')
        {
            printf("\nA letra %c e maiuscula e maior que L\n", array[i]);
        } // end if
    }     // end for
} // end fazoL

/*
conta quantas letras menores que L ou l
@param array cadeia de caracteres
*/
int contaosL(char *array)
{
    // variaveis
    int x = 0;

    // acoes
    for (int i = 0; i < strlen(array); i++)
    {
        if (('a' <= array[i] && array[i] < 'l') || ('A' <= array[i] && array[i] < 'L'))
        {
            x = x + 1;
        } // end if
    }     // end for

    return x;
} // end contaosL

/*
conta quantas letras menores que L ou k
@param array cadeia de caracteres
*/
void fazoLk(char *array)
{
    // acoes
    for (int i = 0; i < strlen(array); i++)
    {
        if (('a' <= array[i] && array[i] < 'k') || ('A' <= array[i] && array[i] < 'L'))
        {
            printf("\nA letra %c e maiuscula e menor que L ou minuscula e menor que k\n", array[i]);
        } // end if
    }     // end for

} // end fazoLk

/*
conta quantos digitos pares tem na cadeia de caracteres
@param array cadeia de caracteres
*/
int contapares(char *array)
{
    // variaveis
    int x = 0;

    // acoes
    for (int i = 0; i < strlen(array); i++)
    {
        if ('0' <= array[i] && array[i] <= '9')
        {
            if ((int)array[i] % 2 == 0)
            {
                x = x + 1;
            }
        } // end if
    }     // end for

    return x;
} // end contapares

/*
mostra todos os caracteres nao alfanumericos de um array
@param array cadeia de caracteres
*/
void nonAN(char *array)
{
    // acoes
    for (int i = 0; i < strlen(array); i++)
    {
        if (!(('0' <= array[i] && array[i] <= '9') || ('a' <= array[i] && array[i] <= 'z') || ('A' <= array[i] && array[i] <= 'Z')))
        {
            printf("\nO caractere %c nao e alfa-numerico\n ", array[i]);
        } // end if
    }     // end for
} // end nonAN

/*
mostra todos os caracteres nao alfanumericos de um array
@param array cadeia de caracteres
*/
void sicAN(char *array)
{
    // acoes
    for (int i = 0; i < strlen(array); i++)
    {
        if ((('0' <= array[i] && array[i] <= '9') || ('a' <= array[i] && array[i] <= 'z') || ('A' <= array[i] && array[i] <= 'Z')))
        {
            printf("\nO caractere %c e alfa-numerico\n ", array[i]);
        } // end if
    }     // end for
} // end sicAN

/*
mostra todos os caracteres nao alfanumericos de 3 arrays
@param array cadeia de caracteres
@param array1 cadeia de caracteres
@param array2 cadeia de caracteres
*/
void sicANx3(char *array, char *array1, char *array2)
{
    // variaveis
    int x = 0;
    int y = 0;
    int z = 0;

    // acoes
    for (int i = 0; i < strlen(array); i++)
    {
        if ((('0' <= array[i] && array[i] <= '9') || ('a' <= array[i] && array[i] <= 'z') || ('A' <= array[i] && array[i] <= 'Z')))
        {
            printf("\nO caractere %c e alfa-numerico\n ", array[i]);
            x = x + 1;
        } // end if
    }     // end for

    for (int i = 0; i < strlen(array1); i++)
    {
        if ((('0' <= array1[i] && array1[i] <= '9') || ('a' <= array1[i] && array1[i] <= 'z') || ('A' <= array1[i] && array1[i] <= 'Z')))
        {
            printf("\nO caractere %c e alfa-numerico\n ", array1[i]);
            y = y + 1;
        } // end if
    }     // end for

    for (int i = 0; i < strlen(array2); i++)
    {
        if ((('0' <= array2[i] && array2[i] <= '9') || ('a' <= array2[i] && array2[i] <= 'z') || ('A' <= array2[i] && array2[i] <= 'Z')))
        {
            printf("\nO caractere %c e alfa-numerico\n ", array2[i]);
            z = z + 1;
        } // end if
    }     // end for

    printf("\nO numero de caractes alfa-numericos da primeira cadeia e %d", x);
    printf("\nO numero de caractes alfa-numericos da segunda cadeia e %d", y);
    printf("\nO numero de caractes alfa-numericos da terceira cadeia e %d", z);
    printf("\nO total de caractes alfa-numericos e %d", (x + y + z));

} // end sicAN

/*
conta quantos digitos pares tem na cadeia de caracteres
@param array cadeia de caracteres
*/
void contadigitos(char *array, char *array1)
{
    // variaveis
    int x = 0;
    int y = 0;

    // acoes
    for (int i = 0; i < strlen(array); i++)
    {
        if ('0' <= array[i] && array[i] <= '9')
        {
            x = x + 1;
        } // end if
    }     // end for

    for (int i = 0; i < strlen(array1); i++)
    {
        if ('0' <= array1[i] && array1[i] <= '9')
        {
            y = y + 1;
        } // end if
    }     // end for

    if (x > y)
    {
        printf("\nA primeira cadeia de caracteres tem mais digitos\n");
    }
    else if (y > x)
    {
        printf("\nA segunda cadeia de caracteres tem mais digitos\n");
    }
    else
    {
        printf("\nO numero de digitos e igual\n");
    }

} // end contadigitos

// ----------------------------------------------------- ED 05 --------------------------------------------------------------------

// ----------------------------------------------------- ED 06 --------------------------------------------------------------------

// ----------------------------------------------------- ED 07 --------------------------------------------------------------------

// ----------------------------------------------------- ED 08 --------------------------------------------------------------------

// ----------------------------------------------------- ED 09 --------------------------------------------------------------------
