

#include "contato.hpp"
using namespace std;

void method_01()
{
    Contato pessoa;
    pessoa.readname("Nome : ");
    cout << pessoa.toString() << endl;
}
/*

Entrar com uma opcao: 1
Nome :
maria
{ maria,  }
EXEMPLO1300 - Programa - v0.0
*/

void method_02()
{
    Contato pessoa;
    pessoa.readname("Nome : ");
    pessoa.readphone("Telefone : ");
    cout << pessoa.toString() << endl;
}
/*
Entrar com uma opcao: 2
Nome :
maria
Telefone :
40028922
{ maria, 40028922 }
EXEMPLO1300 - Programa - v0.0
*/

void method_03()
{
    Contato pessoa;
    pessoa.readname("Nome : ");
    pessoa.readvalidnumber("Telefone : ");
    cout << pessoa.toString() << endl;
}
/*

Com erro :

Entrar com uma opcao: 3
Nome :
maria
Telefone :
feijao
NOTE : Not valid number
{ maria, feijao }
EXEMPLO1300 - Programa - v0.0

Sem erro :

Entrar com uma opcao: 3
Nome :
maria
Telefone :
4002-8922
{ maria, 4002-8922 }
EXEMPLO1300 - Programa - v0.0

*/

void method_04()
{
    Contato pessoa;
    pessoa.readfromfile("Pessoa.Txt");
    cout << pessoa.toString() << endl;
}
/*
Entrar com uma opcao: 4
{ Maria, 40028922 }
EXEMPLO1300 - Programa - v0.0
*/

void method_05()
{
    Contato pessoa;
    pessoa.readfromfile("Pessoa.Txt");
    cout << pessoa.toString() << endl;

    pessoa.writetofile("Pessoa2.Txt");
    cout << pessoa.toString() << endl;
}
/*
Entrar com uma opcao: 5
{ maria, 40028922 }
{ maria, 40028922 }
*/

void method_06()
{
    Contato pessoa;
    pessoa.readname("Nome : ");
    pessoa.readphone("Telefone 1 : ");
    pessoa.readphone2("Telefone 2 : ");
    cout << pessoa.toString() << endl;
}
/*
Entrar com uma opcao: 6
Nome : 
maria
Telefone 1 : 
123456
Telefone 2 : 
6554322
{ maria, 123456, 6554322 }
EXEMPLO1300 - Programa - v0.0
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
        cout << "EXEMPLO1300 - Programa - v0.0\n " << endl;
        // mostrar opcoes
        cout << "Opcoes " << endl;
        cout << " 0 - parar " << endl;
        cout << " 1 - testar definicao de contatos (objetos) " << endl;
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
        default:
            cout << endl
                 << "ERRO: Valor invalido." << endl;
        } // end switch
    } while (x != 0);
    // encerrar
    pause("Apertar ENTER para terminar");
    return (0);
} // end main ( )