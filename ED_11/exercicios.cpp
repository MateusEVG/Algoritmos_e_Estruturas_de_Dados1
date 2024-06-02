
#include "myaed.hpp"
#include "myarray.hpp"

void method_01()
{
    int lenght = 0;
    int menor = 0;
    int maior = 0;

    cout << "Digite um numero : " << endl;
    cin >> lenght;

    cout << "Digite o menor valor : " << endl;
    cin >> menor;

    cout << "Digite o maior valor : " << endl;
    cin >> maior;

    Array<int> intarray(lenght, 0);
    intarray.randgen(lenght, menor, maior);
    intarray.fprint("DADOS.TXT");
    intarray.print();
}
/*
Entrar com uma opcao: 1
Digite um numero :
6
Digite o menor valor :
2
Digite o maior valor :
99

  0 :        43
  1 :        45
  2 :        64
  3 :        42
  4 :        61
  5 :        46

*/

void method_02()
{
    int maior = 0;
    Array<int> intarray(0, 0);
    intarray.fread("DADOS.TXT");
    intarray.print();

    cout << "Maior valor par : " << intarray.biggestpair() << endl;
}
/*

Entrar com uma opcao: 2

  0 :        43
  1 :        45
  2 :        64
  3 :        42
  4 :        61
  5 :        46

Maior valor par : 64
*/

void method_03()
{
    int maior = 0;
    Array<int> intarray(0, 0);
    intarray.fread("DADOS.TXT");
    intarray.print();

    cout << "Menor valor impar multiplo de 3: " << intarray.smallestimpar3() << endl;
}

/*

Entrar com uma opcao: 3

  0 :        43
  1 :        45
  2 :        64
  3 :        42
  4 :        61
  5 :        46

Menor valor impar multiplo de 3: 45
*/

void method_04()
{
    int maior = 0;
    Array<int> intarray(0, 0);
    intarray.fread("DADOS.TXT");
    intarray.print();

    cout << "A soma dos valores do vetor e : " << intarray.sum(0, intarray.getLength()) << endl;
}
/*
Entrar com uma opcao: 4

  0 :        43
  1 :        45
  2 :        64
  3 :        42
  4 :        61
  5 :        46

A soma dos valores do vetor e : 301
*/

void method_05()
{
    int maior = 0;
    Array<int> intarray(0, 0);
    intarray.fread("DADOS.TXT");
    intarray.print();

    cout << "A media dos valores do vetor e : " << intarray.avrg(0, intarray.getLength()) << endl;
}
/*
Entrar com uma opcao: 5

  0 :        43
  1 :        45
  2 :        64
  3 :        42
  4 :        61
  5 :        46

A media dos valores do vetor e : 50.1667
*/

void method_06()
{

    Array<int> intarray(0, 0);
    intarray.fread("DADOS.TXT");
    intarray.print();

    bool response = intarray.allnegatives();

    if (response)
    {
        cout << " Todos os numeros sao negativos " << endl;
    }
    else
    {
        cout << " Nem todos os numeros sao negativos " << endl;
    }
}
/*
Entrar com uma opcao: 6

  0 :        43
  1 :        45
  2 :        64
  3 :        42
  4 :        61
  5 :        46

 Nem todos os numeros sao negativosEntrar com uma opcao: 6
*/

void method_07()
{

    Array<int> intarray(0, 0);
    intarray.fread("DADOS.TXT");
    intarray.print();

    bool response = intarray.isDecrescent();

    if (response)
    {
        cout << " O array e decrescente " << endl;
    }
    else
    {
        cout << " O array nao e decrescente " << endl;
    }
}
/*
Entrar com uma opcao: 7

  0 :        43
  1 :        45
  2 :        64
  3 :        42
  4 :        61
  5 :        46

 O array nao e decrescente
*/

void method_08()
{

    Array<int> intarray(0, 0);
    intarray.fread("DADOS.TXT");
    intarray.print();

    bool response = intarray.search(61, 2, intarray.getLength());

    if (response)
    {
        cout << " O valor esta dentro do intervalo " << endl;
    }
    else
    {
        cout << " O valor nao esta dentro do intervalo " << endl;
    }
}
/*
Entrar com uma opcao: 8

  0 :        43
  1 :        45
  2 :        64
  3 :        42
  4 :        61
  5 :        46

 O valor esta dentro do intervalo
*/

void method_09()
{

    Array<int> intarray(0, 0);
    intarray.fread("DADOS.TXT");
    intarray.print();

    intarray.escalar(3, 2, intarray.getLength());

    intarray.print();
}
/*
Entrar com uma opcao: 9

  0 :        43
  1 :        45
  2 :        64
  3 :        42
  4 :        61
  5 :        46


  0 :        43
  1 :        45
  2 :       192
  3 :       126
  4 :       183
  5 :       138

*/

void method_10()
{

    Array<int> intarray(0, 0);
    intarray.fread("DADOS.TXT");
    intarray.print();

    intarray.sortdown();

    intarray.print();
}
/*
Entrar com uma opcao: 10

  0 :        43
  1 :        45
  2 :        64
  3 :        42
  4 :        61
  5 :        46


  0 :        64
  1 :        61
  2 :        46
  3 :        45
  4 :        43
  5 :        42

*/

void method_11()
{
    Array<int> intarray(0, 0);
    intarray.fread("DADOS.TXT");
    intarray.print();

    Array<int> intarray2(0, 0);
    intarray2.fread("DADOS.TXT");
    intarray2.print();

    bool response = intarray != intarray2;

    if (!response)
    {
        cout << " Os dois arrays sao iguais " << endl;
    }
    else
    {
        cout << " Os dois arrays sao diferentes " << endl;
    }
}

void method_12()
{
    Array<int> intarray(0, 0);
    intarray.fread("DADOS.TXT");
    intarray.print();

    Array<int> intarray2(0, 0);
    intarray2.fread("DADOS.TXT");
    intarray2.escalar(3,0,intarray2.getLength());
    intarray2.print();

    Array <int> intarray3(0,0);
    intarray3 = intarray2 - intarray;

    intarray3.print();
}
/*
Entrar com uma opcao: 12

  0 :        43
  1 :        45
  2 :        64
  3 :        42
  4 :        61
  5 :        46


  0 :       129
  1 :       135
  2 :       192
  3 :       126
  4 :       183
  5 :       138


  0 :        86
  1 :        90
  2 :       128
  3 :        84
  4 :       122
  5 :        92

*/

/*
 Funcao principal.
 @return codigo de encerramento
*/
int main(int argc, char **argv)
{
    // definir dado
    int x = 0; // definir variavel com valor inicial
               // repetir até desejar parar
    do
    {
        // identificar
        cout << "EXEMPLO1101 - Programa - v0.0\n " << endl;
        // mostrar opcoes
        cout << "Opcoes " << endl;
        cout << " 0 - parar " << endl;
        cout << " 1 - " << endl;
        cout << " 2 - " << endl;
        cout << " 3 - " << endl;
        cout << " 4 - " << endl;
        cout << " 5 - " << endl;
        cout << " 6 - " << endl;
        cout << " 7 - " << endl;
        cout << " 8 - " << endl;
        cout << " 9 - " << endl;
        cout << "10 - " << endl;
        cout << "11 - " << endl;
        cout << "12 - " << endl;
        // ler do teclado
        cout << endl
             << "Entrar com uma opcao: ";
        cin >> x;
        // escolher acao
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
            cout << endl
                 << "ERRO: Valor invalido." << endl;
        } // end switch
    } while (x != 0);
    // encerrar
    pause("Apertar ENTER para terminar");
    return (0);
} // end main ( )