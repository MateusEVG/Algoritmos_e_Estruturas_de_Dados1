/*
 Exemplo0200 - v0.0. - 04 / 03 / 2024
 Author: Mateus Evangelista do Nascimento
*/

// dependencias
#include "My_AED1.h"

/*
metodo 1
*/
void method_01()
{
    // variaveis
    int x = 0;

    // entrada
    printf("\nInsira um valor e veja se e par ou impar\n");
    scanf("%d", &x);

    // procedimento
    if (x % 2 == 0)
    {
        printf("\nO numero %d e par\n", x);
    } // end if
    else
    {
        printf("\nO numero %d e impar\n", x);
    } // end else

} // end method_01

/*
method_02
*/
void method_02()
{
    // variaveis
    int x = 0;

    // entrada de dados
    printf("\nDigite um numero inteiro\n");
    scanf("%d", &x);

    // procedimento
    // menor que -25 e impar
    if (x % 2 != 0 && x < -25)
    {
        printf("\nO numero e impar e menor que -25\n");
    } // end if

    // par e maior que 25
    else if (x % 2 == 0 && x > 25)
    {
        printf("\nO numero e par e maior que 25\n");
    } // end if
    else
    {
        printf("\nO numero nao e nem impar e menor que -25 nem par e maior que 25");
    }
} // end method_02

/*
method_03
*/
void method_03()
{
    // variaveis
    int x = 0;

    // entrada de dados
    printf("\nDigite um numero inteiro\n");
    scanf("%d", &x);

    // procedimento
    if (35 < x && x > 65)
    {
        printf("\nO numero digitado esta entre 35 e 65");
    }
    else
    {
        printf("\nO numero digitado esta fora do intervalo entre 35 e 65");
    }
}

/*
method_04
*/
void method_04()
{
    // variaveis
    int x = 0;

    // entrada de dados
    printf("\nDigite um numero inteiro\n");
    scanf("%d", x);

    // procedimento
    if (15 <= x && x >= 60)
    {
        printf("\nO numero digitado esta entre 15 e 60");
    }
    else
    {
        printf("\nO numero digitado nao esta entre 15 e 60");
    }
}

/*
method_05
*/
void method_05()
{
    // variaveis
    int x = 0;

    // entrada de dados
    printf("\nDigite um numero inteiro\n");
    scanf("%d", &x);

    // procedimento
    if (25 < x && x <= 30)
    {
        printf("\nO numero digitado pertence a intercecao dos intervalos: [10:30] e (25:50)");
    }
    else if ((10 <= x && x <= 30))
    {
        printf("\nO numero digitado pertence ao intervalo: [10:30]");
    }
    else if ((25 < x && x < 50))
    {
        printf("\nO numero digitado pertence ao intervalo: (25:50)");
    }

    else
    {
        printf("\nO numero digitado nao pertence a nenhum dos intervalos: [10:30] ou (25:50)");
    }
}

/*
method_06
*/
void method_06()
{
    // variaveis
    int x = 0;
    int y = 0;

    // entrada de dados
    printf("\nDigite um numero inteiro\n");
    scanf("%d", &x);
    printf("\nDigite outro numero inteiro\n");
    scanf("%d", &y);

    // procedimento
    // primeiro numero
    if (x % 2 == 0)
    {
        printf("\nO primeiro numero e par\n");
    }
    else
    {
        printf("\nO primeiro numero e impar\n");
    }

    // segundo numero
    if (y % 2 == 0)
    {
        printf("\nO segundo numero e par\n");
    }
    else
    {
        printf("\nO segundo numero e impar\n");
    }
}

/*
method_07
*/
void method_07()
{
    // variaveis
    int x = 0;
    int y = 0;

    // entrada de dados
    printf("\nDigite um numero inteiro\n");
    scanf("%d", &x);
    printf("\nDigite outro numero inteiro\n");
    scanf("%d", &y);

    // procedimento
    // primeiro numero
    if (x % 2 == 0 && x < 0)
    {
        printf("\nO primeiro numero e par e negativo\n");
    }
    else
    {
        printf("\nO primeiro numero nao e par e negativo\n");
    }

    // segundo numero
    if (y % 2 != 0 && x > 0)
    {
        printf("\nO segundo numero e impar e positivo\n");
    }
    else
    {
        printf("\nO segundo numero nao impar e positivo\n");
    }
}

/*
method_08
*/
void method_08()
{
    // variaveis
    double x = 0.0;
    double y = 0.0;

    // entrada de dados
    printf("\nDigite um numero real\n");
    scanf("%lf", &x);
    printf("\nDigite outro numero real\n");
    scanf("%lf", &y);

    // procedimento
    if (y < x / 3)
    {
        printf("\nO segundo numero e menor que 1/3 do primeiro\n");
    }
    else if (y == x / 3)
    {
        printf("\nO segundo numero e igual a 1/3 do primeiro");
    }
    else if (y > x / 3)
    {
        printf("\nO segundo numero e maior que 1/3 do primeiro");
    }
}

/*
method_09
*/
void method_09()
{
    // variaveis
    double x = 0.0;
    double y = 0.0;
    double z = 0.0;

    // entrada de dados
    printf("\nDigite um numero real\n");
    scanf("%lf", &x);
    printf("\nDigite outro numero real\n");
    scanf("%lf", &y);
    printf("\nDigite outro numero real\n");
    scanf("%lf", &z);

    // procedimento
    if (y != z)
    {
        if ((z < x && x < y) || (y < x && x < z))
        {
            printf("\nO primeiro numero esta entre os dois ultimos\n");
        }
        else
        {
            printf("\nO primeiro numero nao esta entre os dois ultimos\n");
        }
    }
    else
    {
        printf("\nOs dois ultimos numeros sao iguais\n");
    }
}

/*
method_10
*/
void method_10()
{
    // variaveis
    double x = 0.0;
    double y = 0.0;
    double z = 0.0;

    // entrada de dados
    printf("\nDigite um numero real\n");
    scanf("%lf", &x);
    getchar();
    printf("\nDigite outro numero real\n");
    scanf("%lf", &y);
    getchar();
    printf("\nDigite outro numero real\n");
    scanf("%lf", &z);
    getchar();

    // procedimento
    if (x != y && y != z)
    {
        if ((z < x && x < y) || (y < x && x < z))
        {
            printf("\nO primeiro numero esta entre os dois ultimos\n");
        }
        else
        {
            printf("\nO primeiro numero nao esta entre os dois ultimos\n");
        }
    }
    else
    {
        printf("\nNumeros iguais foram digitados\n");
    }
}

/*
method_11
*/
void method_11()
{
    // variaveis
    char x = 'a';
    char y = 'a';
    char z = 'a';

    // entrada de dados
    printf("\nDigite um caractere\n");
    scanf("%c", &x);
    getchar();
    printf("\nDigite outro caractere\n");
    scanf("%c", &y);
    getchar();
    printf("\nDigite outro caractere\n");
    scanf("%c", &z);
    getchar();

    // procedimento
    if ((z < x && x < y) || (y < x && x < z))
    {
        printf("\nO primeiro char esta entre os dois ultimos\n");
    }

    if (x == y || x == z)
    {
        printf("\nO primeiro char e igual a um dos outros dois\n");
    }
}

/*
method_12
*/
void method_12()
{
    // variaveis
    char x = 'a';
    char y = 'a';
    char z = 'a';

    // entrada de dados
    printf("\nDigite um caractere\n");
    scanf("%c", &x);
    getchar();
    printf("\nDigite outro caractere\n");
    scanf("%c", &y);
    getchar();
    printf("\nDigite outro caractere\n");
    scanf("%c", &z);
    getchar();

    // procedimento
    if ((z < x && x < y) || (y < x && x < z))
    {
        printf("\nO primeiro char esta entre o intervalo dos dois ultimos\n");
    }
    else
    {
        printf("\nO primeiro char esta fora do intervalo dos dois ultimos");
    }
}

/*
funcao principal
*/
int main(void)
{
    // definir dado
    int opcao = 0;
    // identificar
    printf("%s\n", "Exemplo0200 - Programa = v0.0");
    printf("%s\n", "Autor: Mateus Evangelista do Nascimento");
    printf("\n"); // mudar de linha
                  // acoes
                  // repetir
    do
    {
        // para mostrar opcoes
        printf("\n%s\n", "Opcoes:");
        printf("\n%s", "0 - Terminar");
        printf("\n%s", "1 - Method_01");
        printf("\n%s", "2 - Method_02");
        printf("\n%s", "3 - Method_03");
        printf("\n%s", "4 - Method_04");
        printf("\n%s", "5 - Method_05");
        printf("\n%s", "6 - Method_06");
        printf("\n%s", "7 - Method_07");
        printf("\n%s", "8 - Method_08");
        printf("\n%s", "9 - Method_09");
        printf("\n%s", "10 - Method_10");
        printf("\n%s", "10 - Method_11");
        printf("\n%s", "10 - Method_12");
        printf("\n");
        // ler a opcao do teclado
        printf("\n%s", "Opcao = ");
        scanf("%d", &opcao);
        getchar(); // para limpar a entrada de dados
        // para mostrar a opcao lida
        printf("\n%s%d", "Opcao = ", opcao);
        // escolher acao dependente da opcao
        switch (opcao)
        {
        case 0: /* nao fazer nada */
            break;
        case 1:
            method_01();
            break;
        case 2:
            method_02();
            break;
        case 3:
            method_03();
            break;
        case 4:
            method_04();
            break;
        case 5:
            method_05();
            break;
        case 6:
            method_06();
            break;
        case 7:
            method_07();
            break;
        case 8:
            method_08();
            break;
        case 9:
            method_09();
            break;
        case 10:
            method_10();
            break;
        case 11:
            method_11();
            break;
        case 12:
            method_12();
            break;
        default: // comportamento padrao
            printf("\nERRO: Opcao invalida.\n");
            break;
        } // end switch
    } while (opcao != 0);
    // encerrar
    printf("\n\nApertar ENTER para terminar.");
    getchar();  // aguardar por ENTER
    return (0); // voltar ao SO (sem erros)
} // end main ( )
