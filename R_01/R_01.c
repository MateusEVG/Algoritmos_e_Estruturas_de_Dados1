

#include "io.h"
#include "My_AED1.h"

int logico(char c);
int aritmetico(char c);
int relacional(char c);
int separador(char c);

/**
 * Author: Mateus Evangelista do Nascimento
 * Matricula 825003
 * method_01
 * Le um numero inteiro, constroi um array com n numeros lidos e mostra na tela a soma de todos os seus divisores impares
 * Funciona para qualquer numero inteiro positivo
 */
void method_01()
{
    int n = 0;
    int vetor[80];
    int soma = 0;

    printf("\nDigite um numero : ");
    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {
        printf("\n%d : ", i);
        scanf("%d", &vetor[i]);
    }

    for (int i = 0; i < n; i++)
    {
        soma = somadivimpar(vetor[i]); // consultar My_AED1.h
        printf("\nA soma dos divisores impares de %d e %d", vetor[i], soma);
    }
}
/*
Digite um numero : 5

0 : 4

1 : 66

2 : 99

3 : 37

4 : 93

A soma dos divisores impares de 4 e 1
A soma dos divisores impares de 66 e 48
A soma dos divisores impares de 99 e 57
A soma dos divisores impares de 37 e 1
A soma dos divisores impares de 93 e 35
*/

/**
 * Author: Mateus Evangelista do Nascimento
 * Matricula 825003
 * method_02
 * Le um numero inteiro, verifica se e primo e mostra na tela
 * Funciona para qualquer numero inteiro positivo
 */
void method_02()
{
    int n = 0;
    int vetor[80];

    printf("\nDigite um valor : ");
    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {
        printf("\n%d : ", i);
        scanf("%d", &vetor[i]);
    }

    for (int i = 0; i < n; i++)
    {
        if (primo(vetor[i]) == 1)
        {
            printf("\nO numero %d e primo", vetor[i]);
        }
    }
}
/*
Digite um valor : 5

0 : 11

1 : 22

2 : 33

3 : 44

4 : 17

O numero 11 e primo
O numero 17 e primo
*/


/**
 * Author: Mateus Evangelista do Nascimento
 * Matricula 825003
 * method_02
 * le uma cadeia de caracteres e analiza os tipos dos caracteres
 * Funciona para qualquer cadeia de caracteres
 */
void method_03()
{
    char string[80];
    int option = 0;
    int retorno = 0;

    printf("\nDigite uma cadeia de caracteres : ");
    scanf("%s", string);
    fgets(string, sizeof(string), stdin);

    printf("\nEscolha qual tipo quer testar \n");
    printf("1 - logico\n");
    printf("2 - aritmetico\n");
    printf("3 - relacional\n");
    printf("4 - separadores\n");

    scanf("%d", &option);
    int n = strlen(string);

    switch (option)
    {
    case 1:
        for (int i = 0; i < n; i++)
        {
            retorno = logico(string[i]);

            if (retorno)
            {
                printf("\nO valor %c na posicao [%d] e logico", string[i], i);
            }
        }
        break;
    case 2:
        for (int i = 0; i < n; i++)
        {
            retorno = aritmetico(string[i]);

            if (retorno)
            {
                printf("\nO valor %c na posicao [%d] e aritmetico", string[i], i);
            }
        }
        break;
    case 3:
        for (int i = 0; i < n; i++)
        {
            retorno = relacional(string[i]);
            if (retorno)
            {
                printf("\nO valor %c na posicao [%d] e relacional", string[i], i);
            }
        }
        break;
    case 4:
        for (int i = 0; i < n; i++)
        {
            retorno = separador(string[i]);
            if (retorno)
            {
                printf("\nO valor %c na posicao [%d] e separador", string[i], i);
            }
        }
        break;
    default:
        printf("\nOutro caractere");
        break;
    }
}

int logico(char c)
{
    if (c == '&' || c == '|' || c == '!')
    {
        return 1;
    }
    else
        return 0;
}

int aritmetico(char c)
{
    if (c == '+' || c == '-' || c == '*' || c == '/' || c == '%')
    {
        return 1;
    }
    else
        return 0;
}

int relacional(char c)
{
    if (c == '>' || c == '<' || c == '=')
    {
        return 1;
    }
    else
        return 0;
}

int separador(char c)
{
    if (c == ' ' || c == '.' || c == ';' || c == ':' || c == '_')
    {
        return 1;
    }
    else
        return 0;
}

/*

Digite uma cadeia de caracteres : cadeia 123!@#-=+()><||//

Escolha qual tipo quer testar
1 - logico
2 - aritmetico
3 - relacional
4 - separadores
4

O valor   na posicao [0] e separador


// ----------------------------------------------------------------


Digite uma cadeia de caracteres : cadeia 123!@#-=+()><||//

Escolha qual tipo quer testar
1 - logico
2 - aritmetico
3 - relacional
4 - separadores
3

O valor = na posicao [8] e relacional
O valor > na posicao [12] e relacional
O valor < na posicao [13] e relacional
*/

/*
 Funcao principal.
 @return codigo de encerramento
*/
int main()
{
    // definir dado
    int x = 0;
    // repetir até desejar parar
    do
    {
        // identificar
        //  IO_id("EXEMPLO0500 - Programa - v0.0");
        // ler do teclado
        IO_println("\nOpcoes");
        IO_println("0 - parar");
        IO_println("1 -  method_01");
        IO_println("2 -  method_02");
        IO_println("3 -  method_03");
        IO_println("4 -  method_04");
        IO_println("5 -  method_05");
        IO_println("6 -  method_06");
        IO_println("7 -  method_07");
        IO_println("8 -  method_08");
        IO_println("9 -  method_09");
        IO_println("10 -  method_10");
        IO_println("");
        x = IO_readint("Entrar com uma opcao: ");
        // testar valor
        switch (x)
        {
        case 1:
            method_01();
            break;
        case 2:
            method_02();
            break;
        case 3:
            method_03();
            break;
        } // end switch
    } while (x != 0);
    // encerrar
    // IO_pause("Apertar ENTER para terminar");
    return (0);
} // end main ( )