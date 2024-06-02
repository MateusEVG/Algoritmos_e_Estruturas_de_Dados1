#include "mymatrix.hpp"

void method_01()
{
    int m;
    int n;
    int inferior;
    int superior;

    cout << "Digite o tamanho da matriz m x n : \n\n m : ";
    cin >> m;
    cout << "n : ";
    cin >> n;
    Matrix<int> intmatrix(m, n, 0);

    cout << "Qual o minimo valor para a matriz : ";
    cin >> inferior;
    cout << "Qual o maximo valor para a matriz : ";
    cin >> superior;

    intmatrix.randmatrix(inferior, superior);
    intmatrix.fprint("DADOS.TXT");
    intmatrix.print();
}
/*
Entrar com uma opcao: 1
Digite o tamanho da matriz m x n :

 m : 4
n : 5
Qual o minimo valor para a matriz : 40
Qual o maximo valor para a matriz : 400

81      96      237     187     76
241     327     157     288     317
330     388     217     261     254
170     147     69      174     61
*/

void method_02()
{
    Matrix<int> intmatrix;
    intmatrix.fread("DADOS.TXT");
    intmatrix.print();

    Matrix<int> intmatrix2;
    intmatrix2 = intmatrix.escalar(3);

    intmatrix2.print();
}
/*

Entrar com uma opcao: 2

81      96      237     187     76
241     327     157     288     317
330     388     217     261     254
170     147     69      174     61


243     288     711     561     228
723     981     471     864     951
990     1164    651     783     762
510     441     207     522     183
*/

void method_03()
{
    bool response;

    Matrix<int> intmatrix;
    intmatrix.fread("DADOS.TXT");
    response = intmatrix.identity();

    if (response)
    {
        cout << "A matriz e identidade " << endl;
    }
    else
    {
        cout << "A matriz nao e identidade" << endl;
    }
}
/*
Entrar com uma opcao: 3
A matriz nao e identidade
*/

void method_04()
{
    Matrix<int> intmatrix;
    intmatrix.fread("DADOS.TXT");

    Matrix<int> intmatrix2;
    intmatrix2.fread("DADOS.TXT");
    intmatrix2.escalar(2);

    if (intmatrix2 == intmatrix)
    {
        cout << "As matrizes sao iguais \n";
    }
    else
    {
        cout << "As matrizes nao sao iguais " << endl;
    }
}
/*
Entrar com uma opcao: 4
As matrizes nao sao iguais
*/

void method_05()
{
    Matrix<int> intmatrix;
    intmatrix.fread("DADOS.TXT");
    intmatrix.print();

    Matrix<int> intmatrix2;
    intmatrix2.fread("DADOS.TXT");
    intmatrix2 = intmatrix2.escalar(3);
    intmatrix2.print();

    Matrix<int> intmatrix3 = intmatrix + intmatrix2;
    intmatrix3.print();
}
/*

Entrar com uma opcao: 5

81      96      237     187     76
241     327     157     288     317
330     388     217     261     254
170     147     69      174     61


243     288     711     561     228
723     981     471     864     951
990     1164    651     783     762
510     441     207     522     183


324     384     948     748     304
964     1308    628     1152    1268
1320    1552    868     1044    1016
680     588     276     696     244

*/

void method_06()
{
    Matrix<int> intmatrix;
    intmatrix.fread("DADOS.TXT");
    intmatrix.print();

    intmatrix.lineadd(0, 1, 2);
    intmatrix.print();
}
/*
Entrar com uma opcao: 6

81      96      237     187     76
241     327     157     288     317
330     388     217     261     254
170     147     69      174     61


563     750     551     763     710
241     327     157     288     317
330     388     217     261     254
170     147     69      174     61
*/

void method_07()
{
    Matrix<int> intmatrix;
    intmatrix.fread("DADOS.TXT");
    intmatrix.print();

    intmatrix.linesub(0, 1, 2);
    intmatrix.print();
}
/*

Entrar com uma opcao: 7

81      96      237     187     76
241     327     157     288     317
330     388     217     261     254
170     147     69      174     61


-401    -558    -77     -389    -558
241     327     157     288     317
330     388     217     261     254
170     147     69      174     61

*/

void method_08()
{
    Matrix<int> intmatrix;
    intmatrix.fread("DADOS.TXT");
    intmatrix.print();

    cout << "A linha onde esta o valor e a linha : " << intmatrix.linesearch(217) << endl;
}
/*
Entrar com uma opcao: 8

81      96      237     187     76
241     327     157     288     317
330     388     217     261     254
170     147     69      174     61

A linha onde esta o valor e a linha : 2
*/

void method_09()
{
    Matrix<int> intmatrix;
    intmatrix.fread("DADOS.TXT");
    intmatrix.print();

    cout << "A linha onde esta o valor e a linha : " << intmatrix.columnsearch(217) << endl;
}
/*
Entrar com uma opcao: 9

81      96      237     187     76
241     327     157     288     317
330     388     217     261     254
170     147     69      174     61

A linha onde esta o valor e a linha : 2
*/

void method_10()
{
    Matrix<int> intmatrix;
    intmatrix.fread("DADOS.TXT");
    intmatrix.print();

    intmatrix.transpose();
    intmatrix.print();
}

/*
 Funcao principal.
 @return codigo de encerramento
*/
int main(int argc, char **argv)
{
    // definir dado
    int x = 0; // definir variavel com valor inicial
    // repetir at� desejar parar
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
        default:
            cout << endl
                 << "ERRO: Valor invalido." << endl;
        } // end switch
    } while (x != 0);
    // encerrar
    pause("Apertar ENTER para terminar");
    return (0);
} // end main ( )