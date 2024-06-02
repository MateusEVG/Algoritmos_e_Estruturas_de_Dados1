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
    } // end for
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
    } // end for

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
    } // end for

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
    } // end for

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
    } // end for
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
    } // end for
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
    } // end for

    for (int i = 0; i < strlen(array1); i++)
    {
        if ((('0' <= array1[i] && array1[i] <= '9') || ('a' <= array1[i] && array1[i] <= 'z') || ('A' <= array1[i] && array1[i] <= 'Z')))
        {
            printf("\nO caractere %c e alfa-numerico\n ", array1[i]);
            y = y + 1;
        } // end if
    } // end for

    for (int i = 0; i < strlen(array2); i++)
    {
        if ((('0' <= array2[i] && array2[i] <= '9') || ('a' <= array2[i] && array2[i] <= 'z') || ('A' <= array2[i] && array2[i] <= 'Z')))
        {
            printf("\nO caractere %c e alfa-numerico\n ", array2[i]);
            z = z + 1;
        } // end if
    } // end for

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
    } // end for

    for (int i = 0; i < strlen(array1); i++)
    {
        if ('0' <= array1[i] && array1[i] <= '9')
        {
            y = y + 1;
        } // end if
    } // end for

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

/*
mostra os multiplos de 6 de acordo com o numero inserido
@param n numero inteiro qualquer
*/
void show6Multiples(int n)
{

    for (int i = 1; i <= n; i++)
    {
        printf("\n%d posicao : %d\n", i, i * 6);
    }
}

/*
mostra os multiplos de 3 e 5 de acordo com o numero inserido
@param n numero inteiro qualquer
*/
void show3and5Multiples(int n)
{

    for (int i = 1; i <= n; i++)
    {
        printf("\n%d posicao : %d\n", i, i * 3 * 5);
    }
}

/*
mostra as potencias de 4 em ordem decrescente
@param n numero inteiro qualquer
*/
void show4powers(int n)
{

    for (int i = n; i >= 1; i--)
    {
        printf("\n 4 elevado a %d : %lf\n", i, pow(4, i));
    }
}

/*
mostra os multiplos de 7 no denominador
@param n numero inteiro qualquer
*/
void show7denominador(int n)
{

    for (int i = 1; i <= n; i++)
    {
        printf("\n 1/%d : %lf\n", i * 7, pow(7 * i, -1));
    }
}

/*
mostra as potencias pares de x
@param n numero inteiro qualquer
@param x numero real qualquer
*/
void showPairPowers(int n, double x)
{

    for (int i = 0; i < n * 2; i = i + 2)
    {
        printf("\n 1/%lf ^ %d : %lf\n", x, i, pow(pow(x, i), -1));
    }
}

// ----------------------------------------------------- ED 06 --------------------------------------------------------------------

// ----------------------------------------------------- ED 07 --------------------------------------------------------------------

/*
fsum - soma x numeros double de um arquivo e guarda em outro chamado "RESULTADO06.TXT"
@param x numero inteiro qualquer
@param filename nome do arquivo
*/
void fsum(int x, char *filename)
{
    double y = 0.0;
    double sum = 0.0;

    FILE *arquivo = fopen(filename, "rt");

    for (int i = 0; i < x; i++)
    {
        fscanf(arquivo, "%lf", &y);
        sum = sum + y;
    }

    fclose(arquivo);

    FILE *arquivo2 = fopen("RESULTADO06.TXT", "wt");
    fprintf(arquivo2, "%lf", sum);

    fclose(arquivo2);
}

// ----------------------------------------------------- ED 08 --------------------------------------------------------------------

// ----------------------------------------------------- R  01 --------------------------------------------------------------------

/*
soma div impar - soma divisores impares de qualquer numero inteiro
@param valor numero inteiro qualquer
*/
int somadivimpar(int valor)
{
    int soma = 0;

    for (int i = 0; i < valor; i = i + 1)
    {
        if (i % 2 != 0 && valor % i == 0)
        {
            soma = soma + i;
        }
    }
    return soma;
}

/*
primo verifica se um numero e primo
return 1 e primo
return 0 nao e primo
@param valor numero inteiro qualquer
*/
int primo(int valor)
{
    int x = 0;

    for (int i = 2; i <= valor; i++)
    {
        if (valor % i == 0)
        {
            x = x + 1;
        }
    }

    if (x > 1)
    {
        return 0;
    }
    else
    {
        return 1;
    }
}

// ----------------------------------------------------- ED 09 --------------------------------------------------------------------
/*
void readnegativedoublematrix(int x, int y, double matriz[][y])
{

    if (0 >= x || 0 >= y)
    {
        printf("\nERRO: linhas e/ou colunas nulas ou negativas");
    }
    else
    {
        for (int i = 0; i < x; i = i + 1)
        {
            for (int j = 0; j < y; j = j + 1)
            {
                double z = 0;

                do
                {
                    printf("\nMatriz[%d][%d] : ", i, j);
                    scanf("%lf", &z);
                } while (z >= 0);
                matriz[i][j] = z;
            }
        }
    }
}

void printdoublematrix(int x, int y, double matriz[][y])
{
    for (int i = 0; i < x; i++)
    {
        for (int j = 0; j < y; j++)
        {
            printf("%f\t", matriz[i][j]);
        }
        printf("\n");
    }
}

void fprintdoublematrix(char *filename, int x, int y, double matriz[][y])
{
    FILE *arquivo = fopen(filename, "wt");

    for (int i = 0; i < x; i++)
    {
        for (int j = 0; j < y; j++)
        {
            fprintf(arquivo, "%f\n", matriz[i][j]);
        }
    }
    fclose(arquivo);
}

void printdiagonal(int x, int y, double matriz[][y])
{

    if (x == y)
    {
        printf("\nA diagonal principal da matriz e :\n");

        for (int i = 0; i < y; i++)
        {
            printf("%lf\t", matriz[i][i]);
        }
    }
    else
    {
        printf("\nMatriz nao quadrada");
    }
}

void printSdiagonal(int x, int y, double matriz[][y])
{
    if (x == y)
    {
        printf("\nA diagonal secundaria da matriz e :\n");

        for (int i = 0; i < x; i++)
        {
            printf("%lf\t", matriz[i][x - 1 - i]);
        }
        printf("\n");
    }
    else
    {
        printf("\nMatriz nao quadrada\n");
    }
}

void printLDTriangleDoubleMatrix(int x, int y, double matriz[][y])
{
    if (x == y)
    {
        printf("\nValores abaixo e na diagonal principal da matriz %d x %d:\n", x, y);
        for (int i = 0; i < x; i++)
        {
            for (int j = 0; j <= i; j++)
            {
                printf("%lf\t", matriz[i][j]);
            }
            printf("\n");
        }
    }
    else
    {
        printf("\nA matriz nao e quadrada.\n");
    }
}

void printLUTriangleDoubleMatrix(int x, int y, double matriz[][y])
{
    if (x == y)
    {
        printf("\nValores da diagonal principal e acima dela da matriz %d x %d:\n", x, y);
        for (int i = 0; i < x; i++)
        {
            for (int j = 0; j < y; j++)
            {
                if (i <= j)
                {
                    printf("%lf\t", matriz[i][j]);
                }
            }
        }
    }
    else
    {
        printf("\nA matriz nao e quadrada.\n");
    }
}

void printSLDTriangleDoubleMatrix(int x, int y, double matriz[][y])
{
    if (x == y)
    {
        printf("\nValores abaixo e na diagonal secundaria da matriz %d x %d:\n", x, y);
        for (int i = 0; i < x; i++)
        {
            for (int j = 0; j < y; j++)
            {
                if ((i + j) >= x - 1)
                {
                    printf("%lf\t", matriz[i][j]);
                }
            }
            printf("\n");
        }
    }
    else
    {
        printf("\nA matriz não é quadrada.\n");
    }
}

void printSLUTriangleDoubleMatrix(int x, int y, double matriz[][y])
{
    if (x == y)
    {
        printf("\nValores abaixo e na diagonal secundaria da matriz %d x %d:\n", x, y);
        for (int i = 0; i < x; i++)
        {
            for (int j = 0; j < y; j++)
            {
                if ((i + j) <= x - 1)
                {
                    printf("%lf\t", matriz[i][j]);
                }
            }
            printf("\n");
        }
    }
    else
    {
        printf("\nA matriz não é quadrada.\n");
    }
}

bool allZerosLTriangleDoubleMatrix(int x, int y, double matriz[][y])
{
    if (x != y)
    {
        printf("A matriz nao e quadrada.\n");
        return false;
    }

    for (int i = 1; i < x; i++)
    {
        for (int j = 0; j < i; j++)
        {
            if (matriz[i][j] != 0.0)
            {
                return false;
            }
        }
    }
    return true;
}

bool allZerosUTriangleDoubleMatrix(int x, int y, double matriz[][y])
{
    if (x != y)
    {
        printf("A matriz nao e quadrada.\n");
        return false;
    }

    for (int i = 0; i < x; i++)
    {
        for (int j = i + 1; j < y; j++)
        {
            if (matriz[i][j] != 0.0)
            {
                return false;
            }
        }
    }
    return true;
}
*/
// ----------------------------------------------------- ED 10 --------------------------------------------------------------------

typedef struct s_int_array
{
    int lenght;
    int *data;
    int intAt;

} intstring;

typedef intstring *intstringptr;

/*
instancia uma variavel do tipo refintstring
@param length tamanho do intstring
*/
intstringptr NewIntString(int lenght)
{

    intstringptr chain = (intstringptr)malloc(sizeof(intstring));

    chain->lenght = lenght;
    chain->data = (int *)malloc(lenght * sizeof(int));
    chain->intAt = 0;

    return chain;
}

/*
desaloca o tamanho do intstring
@param chain intstringptr qualquer
*/
void FreeIntString(intstringptr chain)
{
    if (chain != NULL)
    {
        if (chain->data != NULL)
        {
            free(chain->data);
        }
        free(chain);
    }
}

/*
gera um intstring aleatorio
@param inferior numero inteiro qualquer
@param superior numero inteiro qualquer
@param instringptr qualquer
*/
intstringptr randIntString(int inferior, int superior, intstringptr chain)
{

    for (chain->intAt = 0; chain->intAt < chain->lenght; chain->intAt++)
    {

        chain->data[chain->intAt] = rand() % (superior - inferior + 1) + inferior;
    }

    return chain;
}

/*
printIntString mostra um intstring
@param chain instringptr qualquer
*/
void printIntString(intstringptr chain)
{
    for (chain->intAt = 0; chain->intAt < chain->lenght; chain->intAt++)
    {

        printf("\nintstring[%d] = %d", chain->intAt, chain->data[chain->intAt]);
    }
}

void fprintIntString(char *filename, intstringptr chain)
{

    FILE *arquivo = fopen(filename, "wt");
    fprintf(arquivo, "%d\n", chain->lenght);

    for (chain->intAt = 0; chain->intAt < chain->lenght; chain->intAt++)
    {

        fprintf(arquivo, "%d\n", chain->data[chain->intAt]);
    }

    fclose(arquivo);
}

intstringptr freadIntString(char *filename, intstringptr chain)
{
    FILE *arquivo = fopen(filename, "rt");

    int n = 0;

    fscanf(arquivo, "%d\n", &n);
    chain = NewIntString(n);

    for (chain->intAt = 0; chain->intAt < chain->lenght; chain->intAt++)
    {
        fscanf(arquivo, "%d\n", &chain->data[chain->intAt]);
    }

    fclose(arquivo);

    return chain;
}

bool searchIntString(int number, intstringptr chain)
{
    bool response = false;

    for (chain->intAt = 0; chain->intAt < chain->lenght; chain->intAt++)
    {
        if (chain->data[chain->intAt] == number)
        {
            response = true;
        }
    }

    return response;
}

bool intstringCompare(intstringptr chain1, intstringptr chain2)
{

    bool test = false;

    if (chain1->lenght == chain2->lenght)
    {
        test = true;
        for (chain1->intAt = 0; chain1->intAt < chain1->lenght; chain1->intAt++)
        {
            if (chain1->data[chain1->intAt] != chain2->data[chain1->intAt])
            {
                test = false;
            }
        }
    }
    return test;
}

int intstringSum(intstringptr chain1, int econst, intstringptr chain2)
{
    int sum = 0;

    for (chain1->intAt = 0; chain1->intAt < chain1->lenght; chain1->intAt++)
    {
        sum = sum + chain1->data[chain1->intAt];
    }

    for (chain2->intAt = 0; chain2->intAt < chain2->lenght; chain2->intAt++)
    {
        sum = sum + econst * (chain2->data[chain2->intAt]);
    }

    return sum;
}

bool intstringisDecrescent(intstringptr chain)
{
    bool response = true;
    for (chain->intAt = 0; chain->intAt < chain->lenght - 1; chain->intAt++)
    {
        if (chain->data[chain->intAt] < chain->data[chain->intAt + 1])
        {
            response = false;
        }
    }
    return response;
}

typedef struct s_int_matrix
{
    int rows;
    int colums;
    int **data;
    int intAtx;
    int intAty;
} intmatrix;

typedef intmatrix *intmatrixptr;

intmatrixptr newIntMatrix(int rows, int colums)
{
    intmatrixptr table;

    table->rows = rows;
    table->colums = colums;
    table->data = malloc(rows * sizeof(int *));

    for (table->intAtx = 0; table->intAtx < table->rows; table->intAtx++)
    {
        table->data[table->intAtx] = (int *)malloc(colums * sizeof(int));
    }

    table->intAtx = 0;
    table->intAty = 0;

    return table;
}

