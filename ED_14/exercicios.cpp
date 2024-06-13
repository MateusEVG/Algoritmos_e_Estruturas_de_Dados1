/*
 Exemplo1400 - v0.0. - __ / __ / _____
 Author: _____________________________
*/
// ----------------------------------------------- preparacao
// dependencias
#include <iostream>
using std::cin;  // para entrada
using std::cout; // para saida
using std::endl; // para mudar de linha
#include <iomanip>
using std::setw; // para definir espacamento
#include <string>
using std::string; // para cadeia de caracteres
#include <fstream>
using std::ifstream; // para ler arquivo
using std::ofstream; // para gravar arquivo
// outras dependencias
void pause(std::string text)
{
    std::string dummy;
    std::cin.clear();
    std::cout << std::endl
              << text;
    std::cin.ignore();
    std::getline(std::cin, dummy);
    std::cout << std::endl
              << std::endl;
} // end pause ( )
// ----------------------------------------------- classes
#include "Erro.hpp" // classe para tratar erros
class MyString : public Erro
{
public:
    /**
     * Funcao para obter mensagem
     * relativa ao código de erro.
     * @return mensagem sobre o erro
     */
    std::string getErroMsg()
    {
        return (NO_ERROR); // COMPLETAR A DEFINICAO
    } // end getErroMsg ( )
}; // end classe MyString
// ----------------------------------------------- definicoes globais
using namespace std;

class MyError : public Erro
{
private:
    string msg = "";

public:
    void setErro2(int codigo, string msg)
    {
        setErro(codigo);
        this->msg = msg;
    }

    string getMSG()
    {
        return msg;
    }

    int getInt()
    {
        int x = 0;
        bool test = true;

        while (x < msg.length() && test == true)
        {
            if (!(msg.at(x) >= '0' && msg.at(x) <= '9'))
            {
                test = false;
            }
            x++;
        }
        if (test == false)
        {
            return -1;
        }
        else
        {
            x = 0;
            for (int i = 0; i < msg.length(); i++)
            {
                x = x * 10;
                x = x + (int)msg.at(i) - 48;
            }
            return x;
        }
    }

    double getDouble()
    {
        double x = 0.0;
        double z = 0.0;

        bool test = true;

        while (x < msg.length() && test == true)
        {
            if (!(msg.at(x) >= '0' && msg.at(x) <= '9'))
            {
                if (msg.at(x) != '.')
                {
                    test = false;
                }
            }
            x++;
        }
        if (test == false)
        {
            return 0.0;
        }
        else
        {
            x = 0.0;

            for (int i = 0; i < msg.length(); i++)
            {
                int y = 0;

                if (msg.at(i) != '.')
                {
                    if (y == 0)
                    {
                        x = x * 10;
                        x = x + (double)msg.at(i) - 48;
                    }
                    else
                    {
                        z = z * 10;
                        z = z + (double)msg.at(i) - 48;
                    }
                }
                if (msg.at(i) == '.' && y == 0)
                {
                    y++;
                }
                else
                {
                    return 0.0;
                }
            }
            while ((int)z != 0)
            {
                z = z / 10;
            }

            x = x + z;
            return x;
        }
    }

    bool getBool()
    {
        if (msg == "true" || msg == "T" || msg == "1")
        {
            return true;
        }
        else
            return false;
    }

    bool contains(string texto)
    {
        string s1;
        string s2;
        int x = 0;
        bool response;

        for (int i = 0; i < msg.length(); i++)
        {
            if (texto.at(x) == msg.at(i))
            {
                s1.at(x) = texto.at(x);
                s2.at(i) = msg.at(i);
                x++;
            }
        }

        response = (s1 == s2);
        return (response);
    }

    void UpperCase()
    {
        for (int i = 0; i < msg.length(); i++)
        {
            if (msg.at(i) <= 'z' && msg.at(i) >= 'a')
            {
                msg.at(i) = (int)msg.at(i) - 32;
            }
        }
    }

    void lowercase()
    {
        for (int i = 0; i < msg.length(); i++)
        {
            if (msg.at(i) <= 'Z' && msg.at(i) >= 'A')
            {
                msg.at(i) = (int)msg.at(i) + 32;
            }
        }
    }

    void replace(char original, char novo)
    {
        for (int i = 0; i < msg.length(); i++)
        {
            if (msg.at(i) == original)
            {
                msg.at(i) = novo;
            }
        }
    }

    void cifradecesar()
    {
        for (int i = 0; i < msg.length(); i++)
        {
            if (msg.at(i) >= 'a' && msg.at(i) <= 'w' || msg.at(i) >= 'A' || msg.at(i) <= 'W')
            {
                msg.at(i) = msg.at(i) + 3;
            }

            if (msg.at(i) == 'x')
            {
                msg.at(i) = 'a';
            }
            if (msg.at(i) == 'y')
            {
                msg.at(i) = 'b';
            }
            if (msg.at(i) == 'z')
            {
                msg.at(i) = 'c';
            }

            if (msg.at(i) == 'X')
            {
                msg.at(i) = 'A';
            }
            if (msg.at(i) == 'Y')
            {
                msg.at(i) = 'B';
            }
            if (msg.at(i) == 'Z')
            {
                msg.at(i) = 'C';
            }
        }
    }

    void decifradecesar()
    {
        for (int i = 0; i < msg.length(); i++)
        {
            if (msg.at(i) >= 'd' && msg.at(i) <= 'z' || msg.at(i) >= 'D' || msg.at(i) <= 'Z')
            {
                msg.at(i) = msg.at(i) - 3;
            }

            if (msg.at(i) == 'a')
            {
                msg.at(i) = 'x';
            }
            if (msg.at(i) == 'b')
            {
                msg.at(i) = 'y';
            }
            if (msg.at(i) == 'c')
            {
                msg.at(i) = 'z';
            }

            if (msg.at(i) == 'A')
            {
                msg.at(i) = 'X';
            }
            if (msg.at(i) == 'B')
            {
                msg.at(i) = 'Y';
            }
            if (msg.at(i) == 'C')
            {
                msg.at(i) = 'Z';
            }
        }
    }
};

// ----------------------------------------------- metodos
/**
 Method_00 - nao faz nada.
*/
void method_00()
{
    // nao faz nada
} // end method_00 ( )
/**
 Method_01 - Testar definicoes da classe.
*/
void method_01()
{
    // definir dados
    MyString *s = new MyString();
    // identificar
    cout << "\nMethod_01 - v0.0\n"
         << endl;
    // encerrar
    pause("Apertar ENTER para continuar");
} // end method_01 ( )

void method_02()
{
    string msg;
    int codigo;
    MyError *Erro1 = new MyError;

    cout << "\nCadastre um erro : ";
    cout << "MSG : ";
    cin >> msg;
    cout << "Codigo : ";
    cin >> codigo;

    Erro1->setErro2(codigo, msg);
    cout << "MSG em inteiro :  " << (int)Erro1->getInt() << endl;
}
/*

Entrar com uma opcao: 2

Cadastre um erro : MSG : mensagem
Codigo : 2
MSG em inteiro :  -1
EXEMPLO1401 - Programa - v0.0


Entrar com uma opcao: 2

Cadastre um erro : MSG : 1234567890
Codigo : 3
MSG em inteiro :  1234567890
EXEMPLO1401 - Programa - v0.0

*/

void method_03() // nao deu certo com '.'
{
    string msg;
    int codigo;
    MyError *Erro1 = new MyError;

    cout << "\nCadastre um erro : ";
    cout << "MSG : ";
    cin >> msg;
    cout << "Codigo : ";
    cin >> codigo;

    Erro1->setErro2(codigo, msg);
    cout << "MSG em Double :  " << Erro1->getDouble() << endl;
}

void method_04()
{
    string msg;
    int codigo;
    MyError *Erro1 = new MyError;

    cout << "\nCadastre um erro : ";
    cout << "MSG : ";
    cin >> msg;
    cout << "Codigo : ";
    cin >> codigo;

    Erro1->setErro2(codigo, msg);
    cout << "MSG em bool :  " << Erro1->getBool() << endl;
}

void method_05()
{
    string msg;
    int codigo = 1;
    MyError *Erro1 = new MyError;

    string texto;

    cout << "\nCadastre um erro : ";
    cout << "MSG : ";
    cin >> msg;
    cout << "\nDigite um texto: ";
    cout << "texto : ";
    cin >> texto;

    Erro1->setErro2(codigo, msg);
    cout << "o texto digitado esta na MSG :  " << (int)Erro1->contains(texto) << endl;
}

void method_06()
{
    string msg;
    int codigo = 1;
    MyError *Erro1 = new MyError;

    cout << "\nCadastre um erro : ";
    cout << "MSG : ";
    cin >> msg;

    Erro1->setErro2(codigo, msg);
    Erro1->UpperCase();
    cout << "MSG em uppercase :  " << Erro1->getMSG() << endl;
}
/*
Entrar com uma opcao: 6

Cadastre um erro : MSG : MENSAGEMmensagem
MSG em uppercase :  MENSAGEMMENSAGEM
EXEMPLO1401 - Programa - v0.0
*/

void method_07()
{
    string msg;
    int codigo = 1;
    MyError *Erro1 = new MyError;

    cout << "\nCadastre um erro : ";
    cout << "MSG : ";
    cin >> msg;

    Erro1->setErro2(codigo, msg);
    Erro1->lowercase();
    cout << "MSG em lowercase :  " << Erro1->getMSG() << endl;
}

/*

Entrar com uma opcao: 7

Cadastre um erro : MSG : MENSAGEMmensagem
MSG em lowercase :  mensagemmensagem
EXEMPLO1401 - Programa - v0.0

*/

void method_08()
{
    string msg;
    int codigo = 1;
    MyError *Erro1 = new MyError;

    cout << "\nCadastre um erro : ";
    cout << "MSG : ";
    cin >> msg;

    Erro1->setErro2(codigo, msg);
    Erro1->replace('r', 't');
    cout << "MSG trocando r pot t :  " << Erro1->getMSG() << endl;
}

/*
Entrar com uma opcao: 8

Cadastre um erro : MSG : oratoroeuaroupadoreideroma
MSG trocando r pot t :  otatotoeuatoupadoteidetoma
EXEMPLO1401 - Programa - v0.0
*/

void method_09()
{
    string msg;
    int codigo = 1;
    MyError *Erro1 = new MyError;

    cout << "\nCadastre um erro : ";
    cout << "MSG : ";
    cin >> msg;

    Erro1->setErro2(codigo, msg);
    Erro1->cifradecesar();
    cout << "MSG criptografado com a cifradecesar :  " << Erro1->getMSG() << endl;
}

void method_09()
{
    string msg;
    int codigo = 1;
    MyError *Erro1 = new MyError;

    cout << "\nCadastre um erro : ";
    cout << "MSG : ";
    cin >> msg;

    Erro1->setErro2(codigo, msg);
    Erro1->cifradecesar();
    cout << "MSG criptografado com a cifradecesar :  " << Erro1->getMSG() << endl;
}

void method_10()
{
    string msg;
    int codigo = 1;
    MyError *Erro1 = new MyError;

    cout << "\nCadastre um erro : ";
    cout << "MSG : ";
    cin >> msg;

    Erro1->setErro2(codigo, msg);
    Erro1->cifradecesar();
    cout << "MSG criptografado com a cifradecesar :  " << Erro1->getMSG() << endl;
    Erro1->decifradecesar();
    cout << "MSG descriptografado com a cifradecesar :  " << Erro1->getMSG() << endl;
}

// ----------------------------------------------- acao principal
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
        cout << "EXEMPLO1401 - Programa - v0.0\n " << endl;
        // mostrar opcoes
        cout << "Opcoes " << endl;
        cout << " 0 - parar " << endl;
        cout << " 1 - testar definicoes " << endl;
        cout << " 2 - converter valor para int " << endl;
        cout << " 3 - converter valor para double " << endl;

        // ler do teclado
        cout << endl
             << "Entrar com uma opcao: ";
        cin >> x;
        // escolher acao
        switch (x)
        {
        case 0:
            method_00();
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
        default:
            cout << endl
                 << "ERRO: Valor invalido." << endl;
        } // end switch
    } while (x != 0);
    // encerrar
    pause("Apertar ENTER para terminar");
    return (0);
} // end main ( )