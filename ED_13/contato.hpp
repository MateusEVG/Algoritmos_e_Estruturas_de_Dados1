/*
 Contato.hpp - v0.0. - __ / __ / _____
 Author: _______________________
*/
// ----------------------------------------------- definicoes globais
#ifndef _CONTATO_H_
#define _CONTATO_H_
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
#include "Erro.hpp"
// ---------------------------------------------- definicao de classe
/**
 * Classe para tratar contatos, derivada da classe Erro.
 */
class Contato : public Erro
{
    /**
     * atributos privados.
     */
private:
    string nome;
    string fone;
    string fone2;
    /**
     * definicoes publicas.
     */
public:
    /**
     * Destrutor.
     */
    ~Contato()
    {
    }
    std::string getNome()
    {
        return (this->nome);
    } // end getNome ( )
    /**
     * Funcao para obter fone.
     * @return fone armazenado
     */
    std::string getFone()
    {
        return (this->fone);
    } // end getFone ( )
    /**
     * Funcao para obter dados de uma pessoa.
     * @return dados de uma pessoa
     */
    std::string toString()
    {
        return ("{ " + getNome() + ", " + getFone() + ", " + fone2 + " }");
    } // end toString ( )

    /**
     * Construtor padrao.
     */
    Contato()
    {
        setErro(0); // nenhum erro, ainda
        // atribuir valores iniciais vazios
        nome = "";
        fone = "";
        fone2 = "";

    } // end constructor (padrão)

    /**
     * Metodo para atribuir nome.
     * @param nome a ser atribuido
     */
    void setNome(std::string nome)
    {
        if (nome.empty())
            setErro(1); // nome invalido
        else
            this->nome = nome;
    } // end setNome ( )
    /**
     * Metodo para atribuir telefone.
     * @param fone a ser atribuido
     */
    void setFone(std::string fone)
    {
        if (fone.empty())
            setErro(2); // fone invalido
        else
            this->fone = fone;
    } // end setFone ( )
    /**
     * Construtor alternativo.
     * @param nome_inicial a ser atribuido
     * @param fone_inicial a ser atribuido
     */
    Contato(std::string nome_inicial, std::string fone_inicial)
    {
        setErro(0); // nenhum erro, ainda
        // atribuir valores iniciais
        setNome(nome_inicial); // nome = nome_inicial;
        setFone(fone_inicial); // fone = fone_inicial;
    } // end constructor (alternativo)
    /**
     * Construtor alternativo baseado em copia.
     */
    Contato(Contato const &another)
    {
        // atribuir valores iniciais por copia
        setErro(0);            // copiar erro
        setNome(another.nome); // copiar nome
        setFone(another.fone); // copiar fone
    } // end constructor (alternativo)

    // -----------------------------------

    Contato(std::string nome_inicial, std::string fone_inicial, std::string fone_inicial2)
    {
        setErro(0); // nenhum erro, ainda
        // atribuir valores iniciais
        setNome(nome_inicial); // nome = nome_inicial;
        setFone(fone_inicial); // fone = fone_inicial;
        this->fone2 = fone_inicial2;
    } // end constructor (alternativo)

    void readname(string message)
    {
        cout << message << endl;
        cin >> this->nome;
    }

    void readphone(string message)
    {
        cout << message << endl;
        cin >> this->fone;
    }

private:
    bool isvalidnumber(string number)
    {
        bool response = true;

        for (int i = 0; i < number.length(); i++)
        {
            if (!((number.at(i) <= '9' && number.at(i) >= '0') || number.at(i) == '-'))
            {
                response = false;
            }
        }
        return response;
    }

public:
    void readvalidnumber(string message)
    {
        this->readphone(message);

        if (!this->isvalidnumber(this->fone))
        {
            cout << "NOTE : Not valid number" << endl;
        }
    }

    void readfromfile(string filename)
    {
        ifstream file;
        file.open(filename);
        file >> this->nome;
        file >> this->fone;
        file.close();
    }

    void writetofile(string filename)
    {
        ofstream file;
        file.open(filename);
        file << this->nome << endl;
        file << this->fone;
    }

     void readphone2(string message)
    {
        cout << message << endl;
        cin >> this->fone2;
    }

}; // fim da classe Contato
using ref_Contato = Contato *; // similar a typedef Contato* ref_Contato;
#endif