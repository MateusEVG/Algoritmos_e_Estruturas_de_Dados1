
#include "mymatrix.hpp"

/**
 Method_01 - Mostrar certa quantidade de valores.
*/
void method_01()
{
    // definir dados
    Matrix<int> int_matrix(2, 2, 0);
    int_matrix.set(0, 0, 1);
    int_matrix.set(0, 1, 2);
    int_matrix.set(1, 0, 3);
    int_matrix.set(1, 1, 4);
    // identificar
    cout << "\nMethod_01 - v0.0\n"
         << endl;
    // mostrar dados
    int_matrix.print(); 
    // encerrar
    pause("Apertar ENTER para continuar");
} // end method_01 ( )
/*
Entrar com uma opcao: 1

Method_01 - v0.0


1       2
3       4


Apertar ENTER para continuar
*/

/**
 Method_02.
*/
void method_02()
{
    // definir dados
    Matrix<int> matrix(2, 2, 0);
    // identificar
    cout << endl
         << "Method_02 - v0.0" << endl;
    // ler dados
    matrix.read();
    // mostrar dados
    matrix.print();
    // encerrar
    pause("Apertar ENTER para continuar");
} // end method_02 ( )
/*
Entrar com uma opcao: 2

Method_02 - v0.0

 0,  0 : 4
 0,  1 : 5
 1,  0 : 3
 1,  1 : 2


4       5
3       2


Apertar ENTER para continuar
*/

/**
 Method_03.
*/
void method_03()
{
    // definir dados
    Matrix<int> matrix(2, 2, 0);
    // identificar
    cout << endl
         << "Method_03 - v0.0" << endl;
    // ler dados
    matrix.read();
    // mostrar dados
    matrix.print();
    // gravar dados
    matrix.fprint("MATRIX1.TXT");
    // encerrar
    pause("Apertar ENTER para continuar");
} // end method_03 ( )
/*
Entrar com uma opcao: 3

Method_03 - v0.0

 0,  0 : 4
 0,  1 : 3
 1,  0 : 2
 1,  1 : 1


4       3
2       1


Apertar ENTER para continuar
*/

/**
 Method_04.
*/
void method_04()
{
    // definir dados
    Matrix<int> matrix(1, 1, 0);
    // identificar
    cout << endl
         << "Method_04 - v0.0" << endl;
    // ler dados
    matrix.fread("MATRIX1.TXT");
    // mostrar dados
    matrix.print();
    // encerrar
    pause("Apertar ENTER para continuar");
} // end method_04 ( )

/*
Entrar com uma opcao: 4

Method_04 - v0.0

4       3
2       1
*/

/**
 Method_05.
*/
void method_05()
{
    // definir dados
    Matrix<int> int_matrix1(1, 1, 0);
    Matrix<int> int_matrix2(1, 1, 0);
    // identificar
    cout << endl
         << "Method_05 - v0.0" << endl;
    // ler dados
    int_matrix1.fread("MATRIX1.TXT");
    // mostrar dados
    cout << "\nOriginal\n"
         << endl;
    int_matrix1.print();
    // copiar dados
    int_matrix2 = int_matrix1;
    // mostrar dados
    cout << "\nCopia\n"
         << endl;
    int_matrix2.print();
    // encerrar
    pause("Apertar ENTER para continuar");
} // end method_05 ( )
/*
Entrar com uma opcao: 5

Method_05 - v0.0

Original


4       3
2       1


Copia


4       3
2       1


Apertar ENTER para continuar
*/

/**
 Method_06.
*/
void method_06()
{
    // definir dados
    Matrix<int> int_matrix(2, 2, 0);
    int_matrix.set(0, 0, 0);
    int_matrix.set(0, 1, 0);
    int_matrix.set(1, 0, 0);
    int_matrix.set(1, 1, 0);
    // identificar
    cout << endl
         << "Method_06 - v0.0" << endl;
    // mostrar dados
    int_matrix.print();
    // testar condicao
    cout << "Zeros = " << int_matrix.isZeros() << endl;
    // ler dados
    int_matrix.fread("MATRIX1.TXT");
    // mostrar dados
    int_matrix.print();
    // testar condicao
    cout << "Zeros = " << int_matrix.isZeros() << endl;
    // encerrar
    pause("Apertar ENTER para continuar");
} // end method_06 ( )
/*
Entrar com uma opcao: 6

Method_06 - v0.0

0       0
0       0

Zeros = 1

4       3
2       1

Zeros = 0

Apertar ENTER para continuar
*/

/**
 Method_07.
*/
void method_07()
{
    // definir dados
    Matrix<int> int_matrix1(1, 1, 0);
    Matrix<int> int_matrix2(1, 1, 0);
    // identificar
    cout << endl
         << "Method_07 - v0.0" << endl;
    // ler dados
    int_matrix1.fread("MATRIX1.TXT");
    // mostrar dados
    cout << "\nMatrix_1\n";
    int_matrix1.print();
    // copiar dados
    int_matrix2 = int_matrix1;
    // mostrar dados
    cout << "\nMatrix_2\n";
    int_matrix2.print();
    // testar condicao
    cout << "Diferentes = " << (int_matrix1 != int_matrix2) << endl;
    // alterar dados
    int_matrix2.set(0, 0, (-1));
    // mostrar dados
    cout << "\nMatrix_1\n";
    int_matrix1.print();
    // mostrar dados
    cout << "\nMatrix_2\n";
    int_matrix2.print();
    // testar condicao
    cout << "Diferentes = " << (int_matrix1 != int_matrix2) << endl;
    // encerrar
    pause("Apertar ENTER para continuar");
} // end method_07 ( )
/*

Entrar com uma opcao: 7

Method_07 - v0.0

Matrix_1

4       3
2       1


Matrix_2

4       3
2       1

Diferentes = 0

Matrix_1

4       3
2       1


Matrix_2

-1      3
2       1

Diferentes = 1
*/

/**
 Method_08.
*/
void method_08()
{
    // definir dados
    Matrix<int> int_matrix1(1, 1, 0);
    Matrix<int> int_matrix2(1, 1, 0);
    Matrix<int> int_matrix3(1, 1, 0);
    // identificar
    cout << endl
         << "Method_08 - v0.0" << endl;
    // ler dados
    int_matrix1.fread("MATRIX1.TXT");
    // mostrar dados
    cout << "\nMatrix_1\n";
    int_matrix1.print();
    // copiar dados
    int_matrix2 = int_matrix1;
    // mostrar dados
    cout << "\nMatrix_2\n";
    int_matrix2.print();
    // operar dados
    int_matrix3 = int_matrix1 - int_matrix2;
    // mostrar dados
    cout << "\nMatrix_3\n";
    int_matrix3.print();
    // encerrar
    pause("Apertar ENTER para continuar");
} // end method_08 ( )
/*
Entrar com uma opcao: 8

Method_08 - v0.0

Matrix_1

4       3
2       1


Matrix_2

4       3
2       1


Matrix_3

0       0
0       0


Apertar ENTER para continuar
*/

/**
 Method_09.
*/
void method_09()
{
    // definir dados
    Matrix<int> int_matrix1(2, 2, 0);
    int_matrix1.set(0, 0, 1);
    int_matrix1.set(0, 1, 0);
    int_matrix1.set(1, 0, 0);
    int_matrix1.set(1, 1, 1);
    Matrix<int> int_matrix2(1, 1, 0);
    Matrix<int> int_matrix3(1, 1, 0);
    // identificar
    cout << endl
         << "Method_09 - v0.0" << endl;
    // ler dados
    int_matrix2.fread("MATRIX1.TXT");
    // mostrar dados
    cout << "\nMatrix_1\n";
    int_matrix1.print();
    // mostrar dados
    cout << "\nMatrix_2\n";
    int_matrix2.print();
    // operar dados
    int_matrix3 = int_matrix1 * int_matrix2;
    // mostrar dados
    cout << "\nMatrix_3\n";
    int_matrix3.print();
    // encerrar
    pause("Apertar ENTER para continuar");
} // end method_09 ( )
/*

Entrar com uma opcao: 9

Method_09 - v0.0

Matrix_1

1       0
0       1


Matrix_2

4       3
2       1


Matrix_3

4       3
2       1


Apertar ENTER para continuar
*/

/**
 Method_10.
*/
void method_10()
{
    // definir dados
    Matrix<int> int_matrix(3, 3, 0);
    int x = 0;
    int y = 0;
    // identificar
    cout << endl
         << "Method_10 - v0.0" << endl;
    // ler dados
    int_matrix.fread("MATRIX1.TXT");
    // mostrar dados
    cout << "\nMatrix\n";
    int_matrix.print();
    // operar dados
    for (int x = 0; x < int_matrix.getRows(); x = x + 1)
    {
        for (int y = 0; y < int_matrix.getColumns(); y = y + 1)
        {
            int_matrix.set(x, y, int_matrix.get(x, y) * (-1));
        } // end for
    } // end for
    // mostrar dados
    cout << "\nMatrix\n";
    int_matrix.print();
    // encerrar
    pause("Apertar ENTER para continuar");
} // end method_10 ( )
/*
Entrar com uma opcao: 10

Method_10 - v0.0

Matrix

4       3
2       1


Matrix

-4      -3
-2      -1


Apertar ENTER para continuar
*/


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
