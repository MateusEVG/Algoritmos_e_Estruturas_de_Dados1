/*
 Exemplo0400 - v0.0. - 21/03/2024
 Author: Mateus Evangelista do Nascimento
*/
// dependencias
#include "io.h" // para definicoes proprias

/**
 Method_01 - Repeticao para ler certa quantidade de valores.
*/
void method_01()
{
    // definir dado
    int quantidade = 0;
    int valor = 0;
    int controle = 0;
    // identificar
    IO_id("Method 01 - v0.0");
    // ler do teclado
    quantidade = IO_readint("Entrar com uma quantidade: ");
    // repetir para a quantidade de vezes informada
    controle = 1;
    while (controle <= quantidade)
    {
        // ler valor do teclado
        valor = IO_readint(IO_concat(
            IO_concat("", IO_toString_d(controle)),
            ": "));
        // passar ao proximo valor
        controle = controle + 1;
    } // end while
      // encerrar
    IO_pause("Apertar ENTER para continuar");
} // end method_01 ( )
/*
---------------------------------------------- documentacao complementar
---------------------------------------------- notas / observacoes / comentarios
---------------------------------------------- previsao de testes
a.) -1
b.) 0
c.) 5 e { 1, 2, 3, 4, 5 }
---------------------------------------------- historico
Versao Data Modificacao
 0.1 __/__ esboco
---------------------------------------------- testes


Entrar com uma opcao: 1
Method 01 - v0.0
Autor: Mateus Evangelista do Nascimento

Entrar com uma quantidade: 4
1: 3
2: 4
3: 5
4: 6

Apertar ENTER para continuar


Versao Teste
 0.1 01. ( OK ) identificacao de programa
*/

/**
 Funcao para determinar se valor inteiro e' positivo.
 @return true, se positivo; false, caso contrario
 @param x - valor a ser testado
*/
bool positive(int x)
{
    // definir dado local
    bool result = false;
    // testar a condicao
    if (x > 0)
    {
        result = true;
    } // end if
    return (result);
} // end positive ( )

/**
 Method_02 - Ler valores e contar positivos.
*/
void method_02()
{
    // definir dado
    int quantidade = 0;
    int valor = 0;
    int controle = 0;
    int contador = 0;
    // identificar
    IO_id("Method02 - v0.0");
    // ler do teclado
    quantidade = IO_readint("Entrar com uma quantidade: ");
    // repetir para a quantidade de vezes informada
    controle = 1;
    while (controle <= quantidade)
    {
        // ler valor do teclado
        valor = IO_readint(IO_concat(
            IO_concat("", IO_toString_d(controle)),
            ": "));
        // testar e contar se valor for positivo
        if (positive(valor))
        {
            contador = contador + 1;
        } // end if
        // passar ao proximo valor
        controle = controle + 1;
    } // end while
      // mostrar a quantidade de valores positivos
    IO_printf("%s%d\n", "Positivos = ", contador);
    // encerrar
    IO_pause("Apertar ENTER para continuar");
} // end method_02 ( )

/*
saidas


Entrar com uma opcao: 2
Method02 - v0.0
Autor: Mateus Evangelista do Nascimento

Entrar com uma quantidade: 5
1: 2
2: 3
3: 6
4: 7
5: -3
Positivos = 4

Apertar ENTER para continuar

*/

/**
 Funcao para determinar se valor inteiro pertence a intervalo aberto.
 @return true, se pertencer; false, caso contrario
 @param x - valor a ser testado
 @param inferior - limite inferior do intervalo
 @param superior - limite superior do intervalo
*/
bool belongsTo(int x, int inferior, int superior)
{
    // definir dado local
    bool result = false;
    // testar a condicao
    if (inferior < x && x < superior)
    {
        result = true;
    } // end if
    return (result);
} // end belongsTo ( )
/**
 Method_03 - Ler valores e contar positivos menores que 100.
*/
void method_03()
{
    // definir dado
    int quantidade = 0;
    int valor = 0;
    int controle = 0;
    int contador = 0;
    // identificar
    IO_id("Method_03 - v0.0");
    // ler do teclado
    quantidade = IO_readint("Entrar com uma quantidade: ");
    // repetir para a quantidade de vezes informada
    controle = 1;
    while (controle <= quantidade)
    {
        // ler valor do teclado
        valor = IO_readint(IO_concat(
            IO_concat("", IO_toString_d(controle)),
            ": "));
        // testar e contar se valor for positivo
        if (belongsTo(valor, 0, 100))
        {
            contador = contador + 1;
        } // end if
        // passar ao proximo valor
        controle = controle + 1;
    } // end while
      // mostrar a quantidade de valores positivos
    IO_printf("%s%d\n", "Positivos menores que 100 = ", contador);
    // encerrar
    IO_pause("Apertar ENTER para continuar");
} // end method_03 ( )

/*
saidas

Entrar com uma opcao: 3
Method_03 - v0.0
Autor: Mateus Evangelista do Nascimento

Entrar com uma quantidade: 5
1: 3
2: 4
3: 5
4: 6
5: 7
Positivos menores que 100 = 5

Apertar ENTER para continuar


*/

/**
 Funcao para determinar se valor inteiro e' par.
 @return true, se par; false, caso contrario
 @param x - valor a ser testado
*/
bool even(int x)
{
    // definir dado local
    bool result = false;
    // testar a condicao ( resto inteiro (%) da divisao por 2 igual a zero )
    if (x % 2 == 0)
    {
        result = true;
    } // end if
    return (result);
} // end even ( )
/**
 Method_04 - Ler valores e contar positivos menores que 100 e pares.
*/
void method_04()
{
    // definir dado
    int quantidade = 0;
    int valor = 0;
    int controle = 0;
    int contador = 0;
    // identificar
    IO_id("Method_04 - v0.0");
    // ler do teclado
    quantidade = IO_readint("Entrar com uma quantidade: ");
    // repetir para a quantidade de vezes informada
    controle = 1;
    while (controle <= quantidade)
    {
        // ler valor do teclado
        valor = IO_readint(IO_concat(
            IO_concat("", IO_toString_d(controle)),
            ": "));
        // testar e contar se valor for positivo menor que 100 e par
        if (belongsTo(valor, 0, 100) && even(valor))
        {
            contador = contador + 1;
        } // end if
        // passar ao proximo valor
        controle = controle + 1;
    } // end while
      // mostrar a quantidade de valores positivos
    IO_printf("%s%d\n", "Positivos menores que 100 e pares = ", contador);
    // encerrar
    IO_pause("Apertar ENTER para continuar");
} // end method_04 ( )

/*
saidas

Entrar com uma opcao: 4
Method_04 - v0.0
Autor: Mateus Evangelista do Nascimento

Entrar com uma quantidade: 5
1: 2
2: 3
3: 4
4: 5
5: 6
Positivos menores que 100 e pares = 3

Apertar ENTER para continuar
*/

/**
 Method05 - Ler valores e contar positivos menores que 100 e pares (alternativo).
*/
void method_05()
{
    // definir dado
    int quantidade = 0;
    int valor = 0;
    int controle = 0;
    int contador = 0;
    bool ok = false;
    // identificar
    IO_id("EXEMPLO0405 - Method05 - v0.0");
    // ler do teclado
    quantidade = IO_readint("Entrar com uma quantidade: ");
    // repetir para a quantidade de vezes informada
    controle = 1;
    while (controle <= quantidade)
    {
        // ler valor do teclado
        valor = IO_readint(IO_concat(
            IO_concat("", IO_toString_d(controle)),
            ": "));
        // testar e contar se valor for positivo menor que 100 e par
        ok = belongsTo(valor, 0, 100);
        ok = ok && even(valor);
        if (ok)
        {
            contador = contador + 1;
        } // end if
        // passar ao proximo valor
        controle = controle + 1;
    } // end while
      // mostrar a quantidade de valores positivos
    IO_printf("%s%d\n", "Positivos menores que 100 e pares = ", contador);
    // encerrar
    IO_pause("Apertar ENTER para continuar");
} // end method_05 ( )

/*
saidas

Entrar com uma opcao: 5
EXEMPLO0405 - Method05 - v0.0
Autor: Mateus Evangelista do Nascimento

Entrar com uma quantidade: 5
1: 4
2: 3
3: 6
4: 7
5: 89
Positivos menores que 100 e pares = 2

Apertar ENTER para continuar
*/

/**
 Funcao para determinar se caractere e' letra minuscula.
 @return true, se par; false, caso contrario
 @param x - valor a ser testado
*/
bool isLowerCase(char x)
{
    // definir dado local
    bool result = false;
    // testar a condicao
    if ('a' <= x && x <= 'z')
    {
        result = true;
    } // end if
    return (result);
} // end isLowerCase ( )
/**
 Method_06 - Ler palavra e contar letras minusculas.
*/
void method_06()
{
    // definir dado
    chars palavra = IO_new_chars(STR_SIZE);
    int tamanho = 0;
    int posicao = 0;
    char simbolo = '_';
    int contador = 0;
    // identificar
    IO_id("Method06 - v0.0");
    // ler do teclado
    palavra = IO_readstring("Entrar com uma palavra: ");
    // determinar a quantidade de simbolos na palavra
    tamanho = strlen(palavra);
    // repetir para a quantidade de vezes informada
    for (posicao = 0; posicao < tamanho; posicao = posicao + 1)
    {
        // isolar um simbolo por vez
        simbolo = palavra[posicao];
        // testar e contar se caractere e' letra minuscula
        if (isLowerCase(simbolo))
        {
            contador = contador + 1;
        } // end if
    }     // end for
          // mostrar a quantidade de minusculas
    IO_printf("%s%d\n", "Minusculas = ", contador);
    // encerrar
    IO_pause("Apertar ENTER para continuar");
} // end method_06 ( )

/*
SAIDAS


Entrar com uma opcao: 6
Method06 - v0.0
Autor: Mateus Evangelista do Nascimento

Entrar com uma palavra: paLavra234ass
Minusculas = 9

Apertar ENTER para continuar
*/

/**
 Method_07 - Ler palavra, contar e mostrar letras minusculas.
*/
void method_07()
{
    // definir dado
    chars palavra = IO_new_chars(STR_SIZE);
    int tamanho = 0;
    int posicao = 0;
    char simbolo = '_';
    int contador = 0;
    // identificar
    IO_id("Method07 - v0.0");
    // ler do teclado
    palavra = IO_readstring("Entrar com uma palavra: ");
    // determinar a quantidade de simbolos na palavra
    tamanho = strlen(palavra);
    // repetir para a quantidade de vezes informada
    for (posicao = 0; posicao < tamanho; posicao = posicao + 1)
    {
        // isolar um simbolo por vez
        simbolo = palavra[posicao];
        // testar e contar se caractere e' letra minuscula
        if (isLowerCase(simbolo))
        {
            // mostrar
            IO_printf("%c ", simbolo);
            // contar
            contador = contador + 1;
        } // end if
    }     // end for
          // mostrar a quantidade de minusculas
    IO_printf("\n%s%d\n", "Minusculas = ", contador);
    // encerrar
    IO_pause("Apertar ENTER para continuar");
} // end method_07 ( )

/*
saidas


Entrar com uma opcao: 7
Method07 - v0.0
Autor: Mateus Evangelista do Nascimento

Entrar com uma palavra: paLLAAAVVra123!@#
p a r a
Minusculas = 4

Apertar ENTER para continuar


*/

/**
 Method_08 - Ler palavra, contar e mostrar letras minusculas (alternativo).
*/
void method_08()
{
    // definir dado
    chars palavra = IO_new_chars(STR_SIZE);
    int tamanho = 0;
    int posicao = 0;
    char simbolo = '_';
    int contador = 0;
    chars minusculas = IO_new_chars(STR_SIZE);
    strcpy(minusculas, STR_EMPTY); // vazio
                                   // identificar
    IO_id("Method08 - v0.0");
    // ler do teclado
    palavra = IO_readstring("Entrar com uma palavra: ");
    // determinar a quantidade de simbolos na palavra
    tamanho = strlen(palavra);
    // repetir para a quantidade de vezes informada
    for (posicao = 0; posicao < tamanho; posicao = posicao + 1)
    {
        // isolar um simbolo por vez
        simbolo = palavra[posicao];
        // testar e contar as letras minusculas de uma palavra
        if (isLowerCase(simbolo))
        {
            // concatenar simbolo encontrado
            minusculas = IO_concat(minusculas, IO_toString_c(simbolo));
            // contar
            contador = contador + 1;
        } // end if
    }     // end for
          // mostrar a quantidade de minusculas
    IO_printf("\n%s%d [%s]\n", "Minusculas = ", contador, minusculas);
    // encerrar
    IO_pause("Apertar ENTER para continuar");
} // end method_08 ( )

/*
saidas

Entrar com uma opcao: 8
Method08 - v0.0
Autor: Mateus Evangelista do Nascimento

Entrar com uma palavra: palavra123)(*&¨JIJIJIJ

Minusculas = 7 [palavra]

Apertar ENTER para continuar


*/

/**
 Funcao para determinar se caractere e' digito.
 @return true, se par; false, caso contrario
 @param x - valor a ser testado
*/
bool isDigit(char x)
{
    // definir dado local
    bool result = false;
    // testar a condicao
    if ('0' <= x && x <= '9')
    {
        result = true;
    } // end if
    return (result);
} // end isDigit ( )
/**
 Method_09 - Ler palavra e contar os algarismos.
*/
void method_09()
{
    // definir dado
    chars palavra = IO_new_chars(STR_SIZE);
    int tamanho = 0;
    int posicao = 0;
    char simbolo = '_';
    int contador = 0;
    // identificar
    IO_id("Method09 - v0.0");
    // ler do teclado
    palavra = IO_readstring("Entrar com caracteres: ");
    // determinar a quantidade de simbolos
    tamanho = strlen(palavra);
    // repetir para a quantidade de vezes informada
    for (posicao = 0; posicao < tamanho; posicao = posicao + 1)
    {
        // isolar um simbolo por vez
        simbolo = palavra[posicao];
        // testar e contar os algarismos em uma cadeia de caracteres
        if (isDigit(simbolo))
        {
            // mostrar
            IO_printf("%c ", simbolo);
            // contar
            contador = contador + 1;
        } // end if
    }     // end for
          // mostrar a quantidade de digitos
    IO_printf("\n%s%d\n", "Algarismos = ", contador);
    // encerrar
    IO_pause("Apertar ENTER para continuar");
} // end method_09 ( )

/*
saidas


Entrar com uma opcao: 9
Method09 - v0.0
Autor: Mateus Evangelista do Nascimento

Entrar com caracteres: PalavraCC4567
4 5 6 7
Algarismos = 4

Apertar ENTER para continuar

*/

/*
 Funcao para determinar se caractere e' digito.
 @return true, se par; false, caso contrario
 @param x - valor a ser testado
*/
bool isADigit(char x)
{
    return ('0' <= x && x <= '9');
} // end isADigit ( )
/**
 Funcao para concatenar 'a cadeia de caracteres mais um digito.
 @return cadeia de caracteres acrescida de mais um digito
 @param digits - cadeia de caracteres
 @param digit - simbolo a ser acrescentado 'a cadeia de caracteres
*/
chars concatADigit(chars string, char digit)
{
    return (IO_concat(string, IO_toString_c(digit)));
} // end concatADigit ( )
/**
 Method_10.
*/
void method_10()
{
    // definir dado
    chars palavra = IO_new_chars(STR_SIZE);
    int tamanho = 0;
    int posicao = 0;
    char simbolo = '_';
    chars digitos = IO_new_chars(STR_SIZE);
    strcpy(digitos, STR_EMPTY); // vazio
                                // identificar
    IO_id("Method_10 - v0.0");
    // ler do teclado
    palavra = IO_readstring("Entrar com uma palavra: ");
    // determinar a quantidade de simbolos na palavra
    tamanho = strlen(palavra);
    // repetir para a quantidade de vezes informada
    for (posicao = 0; posicao < tamanho; posicao = posicao + 1)
    {
        // isolar um simbolo por vez
        simbolo = palavra[posicao];
        // testar e contar os algarismos em uma cadeia de caracteres
        if (isADigit(simbolo))
        {
            // concatenar simbolo encontrado
            digitos = concatADigit(digitos, simbolo);
        } // end if
    }     // end for
          // mostrar a quantidade de digitos
    IO_printf("\n%s%d [%s]\n", "Algarismos = ", strlen(digitos), digitos);
    // encerrar
    IO_pause("Apertar ENTER para continuar");
} // end method_10 ( )

/*
Entrar com uma opcao: 10
Method_10 - v0.0
Autor: Mateus Evangelista do Nascimento

Entrar com uma palavra: palavraKHJ)(*&09876

Algarismos = 5 [09876]

Apertar ENTER para continuar

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

        default:

        } // end switch
    } while (x != 0);
    // encerrar
    // IO_pause("Apertar ENTER para terminar");
    return (0);
} // end main ( )