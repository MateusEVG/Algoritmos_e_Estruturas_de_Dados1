/*
 Exemplo0300 - v0.0. - 11/03/2024
 Author: Mateus Evangelista do Nascimento
*/
// dependencias
#include "io.h" // para definicoes proprias

/*
method-01
*/
void method_01()
{
    // variables
    char palavra[80];

    // input data
    printf("\nInsira uma palavra:\n");
    scanf("%s", palavra);
    getchar();

    // array count
    for (int i = 0; i < strlen(palavra); i++)
    {
        if (palavra[i] >= 'A' && palavra[i] <= 'Z')
        {
            printf("\n A letra: %c e maiuscula\n", palavra[i]);
        } // end if
    }     // end for
} // end method_01

/*
Opcoes
0 - parar
1 - repeticao com teste no inicio
2 - Repeticao com teste no inicio.
3 - Repeticao com teste no inicio.
4 - Repeticao com teste no inicio e variacao.
5 - Repeticao com teste no inicio e variacao.
6 - Repeticao sobre cadeia de caracateres.
7 - Repeticao sobre cadeia de caracateres.
8 - Repeticao com intervalos.
9 - Repeticao com intervalos.
10 - Repeticao com confirmacao.

Entrar com uma opcao: 1

Insira uma palavra:
PalAvraZ

 A letra: P e maiuscula

 A letra: A e maiuscula

 A letra: Z e maiuscula
*/

/*
method_02
*/
void method_02()
{
    // variables
    int x = 0;
    char palavra[80];

    // input data
    printf("\nInsira uma palavra:\n");
    scanf("%s", palavra);
    getchar();

    // array count
    for (int i = 0; i < strlen(palavra); i++)
    {
        if (palavra[i] >= 'A' && palavra[i] <= 'Z')
        {
            x = x + 1;
            printf("\n A letra: %c e maiuscula\n", palavra[i]);
        } // end if

    } // end for
    printf("\nForam lidas %d letras maiusculas\n", x);
} // end method_02

/*
Opcoes
0 - parar
1 - repeticao com teste no inicio
2 - Repeticao com teste no inicio.
3 - Repeticao com teste no inicio.
4 - Repeticao com teste no inicio e variacao.
5 - Repeticao com teste no inicio e variacao.
6 - Repeticao sobre cadeia de caracateres.
7 - Repeticao sobre cadeia de caracateres.
8 - Repeticao com intervalos.
9 - Repeticao com intervalos.
10 - Repeticao com confirmacao.

Entrar com uma opcao: 2

Insira uma palavra:
PAvrala

 A letra: P e maiuscula

 A letra: A e maiuscula

Foram lidas 2 letras maiusculas
*/

/*
method_03
*/
void method_03()
{
    // variables
    int x = 0;
    char palavra[80];

    // input data
    printf("\nInsira uma palavra:\n");
    scanf("%s", palavra);
    getchar();

    // array count
    for (int i = strlen(palavra); i >= 0; i = i - 1)
    {
        if (palavra[i] >= 'A' && palavra[i] <= 'Z')
        {
            x = x + 1;
            printf("\n A letra: %c e maiuscula\n", palavra[i]);
        } // end if

    } // end for
    printf("\nForam lidas %d letras maiusculas\n", x);
} // end method_03

/*
saidas


Entrar com uma opcao: 3

Insira uma palavra:
PALavraDETRas

 A letra: R e maiuscula

 A letra: T e maiuscula

 A letra: E e maiuscula

 A letra: D e maiuscula

 A letra: L e maiuscula

 A letra: A e maiuscula

 A letra: P e maiuscula

Foram lidas 7 letras maiusculas
*/

/*
method_04
*/
void method_04()
{
    // variables
    int x = 0;
    char palavra[80];

    // input data
    printf("\nInsira uma palavra:\n");
    scanf("%s", palavra);
    getchar();

    // array count
    for (int i = 0; i < strlen(palavra); i++)
    {
        if ((palavra[i] >= 'A' && palavra[i] <= 'Z') || (palavra[i] >= 'a' && palavra[i] <= 'z'))
        {
            x = x + 1;
            printf("\n A letra: %c e maiuscula\n", palavra[i]);
        } // end if

    } // end for
    printf("\nForam lidas %d letras \n", x);
} // end method_04

/*

Entrar com uma opcao: 4

Insira uma palavra:
PALAvrac@0923925!!!

 A letra: P e maiuscula

 A letra: A e maiuscula

 A letra: L e maiuscula

 A letra: A e maiuscula

 A letra: v e maiuscula

 A letra: r e maiuscula

 A letra: a e maiuscula

 A letra: c e maiuscula

Foram lidas 8 letras
*/

/*
method_05
*/
void method_05()
{
    // variables
    int x = 0;
    char palavra[80];

    // input data
    printf("\nInsira uma cadeia de caracteres:\n");
    scanf("%s", palavra);
    getchar();

    // array count
    for (int i = strlen(palavra); i >= 0; i = i - 1)
    {
        if (palavra[i] >= '0' && palavra[i] <= '9')
        {
            x = x + 1;
            printf("\nO caractere: %c e digito\n", palavra[i]);
        } // end if

    } // end for
    printf("\nForam lidos %d digitos\n", x);
} // end method_05

/*
method_06
*/
void method_06()
{
    // variables
    int x = 0;
    char palavra[80];

    // input data
    printf("\nInsira uma palavra:\n");
    scanf("%s", palavra);
    getchar();

    // array count
    for (int i = 0; i < strlen(palavra); i++)
    {
        if (!((palavra[i] >= 'A' && palavra[i] <= 'Z') || (palavra[i] >= 'a' && palavra[i] <= 'z') || palavra[i] >= '0' && palavra[i] <= '9'))
        {
            x = x + 1;
            printf("\n O caractere : %c nao e letra nem numero \n", palavra[i]);
        } // end if

    } // end for
    printf("\nForam lidos %d caracteres \n", x);
} // end method_06

/*
method_07
*/
void method_07()
{
    // variables
    int x = 0;
    int y = 0;
    int z = 0;
    int n = 0;
    // vector
    int vector[80];

    // input data
    printf("\nInsira dois numeros para serem o inicio e o fim de um intervalo\n");
    scanf("%d", &x);
    getchar();
    printf("\nInsira outro:\n");
    scanf("%d", &y);
    getchar();
    // vector size
    printf("\nInsira o tamanho do vetor e em seguida seus valores\n");
    scanf("%d", &n);
    getchar();
    // values of vector
    for (int i = 0; i < n; i++)
    {
        printf("\nInsira um valor para a posicao [%d] do vetor : ", i);
        scanf("%d", &z);
        getchar();
        vector[i] = z;
    } // end for

    // output data
    for (int i = 0; i < n; i++)
    {
        if (((vector[i]) % 6 == 0) && ((x <= vector[i] && vector[i] <= y) || (y <= vector[i] && vector[i] <= x)))
        {
            printf("\nO valor %d e multiplo de 6 e pertence ao intervalo entre %d e %d \n", vector[i], x, y);
        } // end if

    } // end for
} // end method_07

/*
method_08
*/
void method_08()
{
    // variables
    int x = 0;
    int y = 0;
    int z = 0;
    int n = 0;
    // vector
    int vector[80];

    // input data
    printf("\nInsira dois numeros para serem o inicio e o fim de um intervalo\n");
    scanf("%d", &x);
    getchar();
    printf("\nInsira outro:\n");
    scanf("%d", &y);
    getchar();
    // vector size
    printf("\nInsira o tamanho do vetor e em seguida seus valores\n");
    scanf("%d", &n);
    getchar();
    // values of vector
    for (int i = 0; i < n; i++)
    {
        printf("\nInsira um valor para a posicao [%d] do vetor : ", i);
        scanf("%d", &z);
        getchar();
        vector[i] = z;
    } // end for

    // output data
    for (int i = 0; i < n; i++)
    {

        if ((x <= vector[i] && vector[i] <= y) || (y <= vector[i] && vector[i] <= x))
        {

            if ((((vector[i]) % 4 == 0) && (vector[i]) % 5 != 0))
            {
                printf("\nO valor %d e multiplo de 4 e nao de 5 e pertence ao intervalo entre %d e %d \n", vector[i], x, y);
            } // end if
        }     // end if

    } // end for
} // end method_08

/*
method_09
*/
void method_09()
{
    // variables
    double x = 0.0;
    double y = 0.0;
    double z = 0.0;
    int n = 0;
    int a = 0;
    // vector
    double vector[80];

    // input data
    printf("\nInsira dois numeros para serem o inicio e o fim de um intervalo\n");
    printf("\nInicio: \n");
    scanf("%lf", &x);
    getchar();
    printf("\nInsira outro:\n");
    scanf("%lf", &y);
    getchar();
    // y > x
    if (x > y)
    {
        do
        {
            printf("\nO segundo valor DEVE ser maior que o primeiro: ");
            scanf("%lf", &y);

        } while (x > y);
    }
    // vector size
    printf("\nInsira o tamanho do vetor e em seguida seus valores\n");
    scanf("%d", &n);
    getchar();
    // values of vector
    for (int i = 0; i < n; i++)
    {
        printf("\nInsira um valor para a posicao [%d] do vetor : ", i);
        scanf("%lf", &z);
        getchar();
        vector[i] = z;
    } // end for

    // output data
    for (int i = 0; i < n; i++)
    {
        vector[i] = vector[i] - ((int)vector[i]);

        if (!(x / 10 < vector[i] && vector[i] < y / 10))
        {
            a = a + 1;
            printf("\nO valor fracionario na posicao [%d]: %lf esta fora do intervalo (%lf:%lf)\n", i, vector[i], x / 10, y / 10);
        }

    } // end for
    printf("\n%d valores estao fora do intervalo\n", a);
} // end method_09

/*
method_10
*/
void method_10()
{
    // variables
    double x = 0.0;
    double y = 0.0;
    double z = 0.0;
    int n = 0;
    int a = 0;
    // vector
    double vector[80];

    // input data
    printf("\nInsira dois numeros para serem o inicio e o fim de um intervalo\n");
    printf("\nInicio: \n");
    scanf("%lf", &x);
    getchar();
    if (!(x > 0 && x < 1))
    {
        do
        {
            printf("\nO numero DEVE ser maior que 0 e menor que 1\n");
            scanf("%lf", &x);

        } while (!(x > 0 && x < 1));
    }

    printf("\nInsira outro:\n");
    scanf("%lf", &y);
    getchar();
    if (!(y < 1))
    {
        do
        {
            printf("\nO numero DEVE ser menor que 1\n");
            scanf("%lf", &y);

        } while (!(y < 1));
    }
    // y > x
    if (x > y)
    {
        do
        {
            printf("\nO segundo valor DEVE ser maior que o primeiro: ");
            scanf("%lf", &y);

        } while (x > y);
    }
    // vector size
    printf("\nInsira o tamanho do vetor e em seguida seus valores\n");
    scanf("%d", &n);
    getchar();
    // values of vector
    for (int i = 0; i < n; i++)
    {
        printf("\nInsira um valor para a posicao [%d] do vetor : ", i);
        scanf("%lf", &z);
        getchar();
        vector[i] = z;
    } // end for

    // output data
    for (int i = 0; i < n; i++)
    {
        vector[i] = vector[i] - ((int)vector[i]);

        if (!(x < vector[i] && vector[i] < y))
        {
            a = a + 1;
            printf("\nO valor fracionario na posicao [%d]: %lf esta fora do intervalo (%lf:%lf)\n", i, vector[i], x, y);
        }

    } // end for
    printf("\n%d valores estao fora do intervalo\n", a);
} // end method_10

/*
method_11
*/
void method_11()
{
    // variables
    int x = 0;
    int y = 0;
    char vector[80];
    char vectorNA[80];

    printf("\nInsira uma cadeia de caracteres: \n");
    scanf("%s", vector);
    getchar();

    // string copy
    for (int i = 0; i < strlen(vector); i++)
    {
        if (!((vector[i] >= 'A' && vector[i] <= 'Z') || (vector[i] >= 'a' && vector[i] <= 'z') || vector[i] >= '0' && vector[i] <= '9'))
        {
            vectorNA[x] = vector[i];
            x = x + 1;
        }
    }

    vectorNA[x + 1] = '\0';
    // output verctorNA
    printf("\n\nOs valores nao alfanumericos digitados foram: \n");
    for (int i = 0; i < strlen(vectorNA) - 1; i++) // tire o -1 e veja o '\0' dentro dele
    {
        printf("%c", vectorNA[i]);
        printf("\n");
    }
} // end method_11

/*
method_12
*/
void method_12()
{
    // variables
    int x = 0;
    int y = 0;
    char vector[80];

    printf("\nInsira uma cadeia de caracteres: \n");
    scanf("%s", vector);
    getchar();

    // string copy
    for (int i = 0; i < strlen(vector); i++)
    {
        if (!((vector[i] >= 'A' && vector[i] <= 'Z') || (vector[i] >= 'a' && vector[i] <= 'z')))
        {
            x = x + 1;
        }
    }
    if (x > 0)
    {
        printf("\nEssa cadeia de caracteres possui outros valores alem de letras");
    }
    else
    {
        printf("\nEssa cadeia de caracteres so possui letras");
    }

} // end method_12

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
        //  IO_id("EXEMPLO0300 - Programa - v0.0");
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
        IO_println("11 -  method_11");
        IO_println("12 -  method_12");
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

        default:

        } // end switch
    } while (x != 0);
    // encerrar
    // IO_pause("Apertar ENTER para terminar");
    return (0);
} // end main ( )
