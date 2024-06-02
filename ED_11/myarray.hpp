/*
 myarray.hpp - v0.0. - __ / __ / _____
 Author: ______________________
*/
// ----------------------------------------------- definicoes globais
#ifndef _MYARRAY_HPP_
#define _MYARRAY_HPP_
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
template <typename T>
class Array
{
private: // area reservada
    T optional;
    int length;
    T *data;

public: // area aberta
    Array(int n, T initial)
    {
        // definir valores iniciais
        optional = initial;
        length = 0;
        data = nullptr;
        // reservar area
        if (n > 0)
        {
            length = n;
            data = new T[length];
        }
    } // end constructor
    void free()
    {
        if (data != nullptr)
        {
            delete (data);
            data = nullptr;
        } // end if
    } // end free ( )
    void set(int position, T value)
    {
        if (0 <= position && position < length)
        {
            data[position] = value;
        } // end if
    } // end set ( )
    T get(int position)
    {
        T value = optional;
        if (0 <= position && position < length)
        {
            value = data[position];
        } // end if
        return (value);
    } // end get ( )
    void print()
    {
        cout << endl;
        for (int x = 0; x < length; x = x + 1)
        {
            cout << setw(3) << x << " : "
                 << setw(9) << data[x]
                 << endl;
        } // end for
        cout << endl;
    } // end print ( )
    void read()
    {
        cout << endl;
        for (int x = 0; x < length; x = x + 1)
        {
            cout << setw(3) << x << " : ";
            cin >> data[x];
        } // end for
        cout << endl;
    } // end read ( )
    void fprint(string fileName)
    {
        ofstream afile; // output file
        afile.open(fileName);
        afile << length << endl;
        for (int x = 0; x < length; x = x + 1)
        {
            afile << data[x] << endl;
        } // end for
        afile.close();
    } // end fprint ( )
    void fread(string fileName)
    {
        ifstream afile; // input file
        int n = 0;
        afile.open(fileName);
        afile >> n;
        if (n <= 0)
        {
            cout << "\nERROR: Invalid length.\n"
                 << endl;
        }
        else
        {
            // guardar a quantidade de dados
            length = n;
            // reservar area
            data = new T[n];
            // ler dados
            for (int x = 0; x < length; x = x + 1)
            {
                afile >> data[x];
            } // end for
        } // end if
        afile.close();
    } // end fread ( )
    Array() // construtor padrao
    {
        // definir valores iniciais
        length = 0;
        // reservar area
        data = nullptr;
    } // end constructor
    // contrutor baseado em copia
    Array(int length, int other[])
    {
        if (length <= 0)
        {
            cout << "\nERROR: Missing data.\n"
                 << endl;
        }
        else
        {
            // criar copia
            this->length = length;
            // reservar area
            data = new T[this->length];
            // ler dados
            for (int x = 0; x < this->length; x = x + 1)
            {
                data[x] = other[x];
            } // end for
        } // end if
    } // end constructor ( )
    Array(const Array &other)
    {
        if (other.length <= 0)
        {
            cout << "\nERROR: Missing data.\n"
                 << endl;
        }
        else
        {
            // criar copia
            length = other.length;
            // reservar area
            data = new T[other.length];
            // ler dados
            for (int x = 0; x < length; x = x + 1)
            {
                data[x] = other.data[x];
            } // end for
        } // end if
    } // end constructor ( )

    Array &operator=(const Array<T> other)
    {
        if (other.length <= 0)
        {
            cout << "\nERROR: Missing data.\n"
                 << endl;
        }
        else
        {
            this->length = other.length;
            this->data = new T[other.length];
            for (int x = 0; x < this->length; x = x + 1)
            {
                data[x] = other.data[x];
            } // end for
        } // end if
        return (*this);
    } // end operator= ( )
    bool operator==(const Array<T> other)
    {
        bool result = false;
        int x = 0;
        if (other.length == 0 || length != other.length)
        {
            cout << "\nERROR: Missing data.\n"
                 << endl;
        }
        else
        {
            x = 0;
            result = true;
            while (x < this->length && result)
            {
                result = result && (data[x] == other.data[x]);
                x = x + 1;
            } // end while
        } // end if
        return (result);
    } // end operator== ( )
    Array &operator+(const Array<T> other)
    {
        static Array<T> result(other);
        if (other.length <= 0)
        {
            cout << "\nERROR: Missing data.\n"
                 << endl;
        }
        else
        {
            for (int x = 0; x < this->length; x = x + 1)
            {
                result.data[x] = result.data[x] + this->data[x];
            } // end for
        } // end if
        return (result);
    } // end operator+ ( )
    const int getLength()
    {
        return (length);
    } // end getLength ( )
    T &operator[](const int position)
    {
        static T value = optional;
        if (position < 0 || length <= position)
        {
            cout << endl
                 << "\nERROR: Invalid position.\n"
                 << endl;
        }
        else
        {
            value = data[position];
        } // end if
        return (value);
    } // end operator [ ]

    // -----------------------------------------

    void randgen(int n, int menor, int maior)
    {

        for (int i = 0; i < n; i++)
        {
            this->data[i] = rand() % (maior - menor + 1) + menor;
        }
    }

    int biggestpair()
    {
        int maior = 0;

        for (int i = 0; i < this->length; i++)
        {
            if (this->data[i] % 2 == 0 && maior < this->data[i])
            {

                maior = this->data[i];
            }
        }
        return maior;
    }

    int smallestimpar3()
    {
        int menor = 0;

        for (int i = 0; i < this->length; i++)
        {
            if (this->data[i] % 3 == 0 && this->data[i] % 2 != 0 && menor < this->data[i])
            {
                menor = this->data[i];
            }
        }
        return menor;
    }

    int sum(int menor, int maior)
    {
        int sum = 0;

        for (int i = menor; i < maior; i++)
        {
            sum = sum + this->data[i];
        }
        return sum;
    }

    double avrg(int menor, int maior)
    {
        double sum = 0;
        int count = 0;

        for (int i = menor; i < maior; i++)
        {
            sum = sum + this->data[i];
            count++;
        }
        return sum / count;
    }

    bool allnegatives()
    {
        bool response = true;

        for (int i = 0; i < this->length; i++)
        {
            if (this->data[i] > 0)
            {
                response = false;
            }
        }
        return response;
    }

    bool isDecrescent()
    {
        bool response = true;

        for (int i = 0; i < this->getLength() - 1; i++)
        {
            if (this->data[i] <= this->data[i] + 1)
            {
                response = false;
            }
        }
        return response;
    }

    bool search(int value, int start, int end)
    {
        bool response = false;
        for (int i = start; i < end; i++)
        {
            if (this->data[i] == value)
            {
                response = true;
            }
        }
        return response;
    }

    void escalar(int constante, int start, int end)
    {
        for (int i = start; i < end; i++)
        {
            this->data[i] = this->data[i] * constante;
        }
    }

    void sortdown()
    {
        int suport = 0;
        int i = 0;

        for (int x = 0; x < this->getLength(); x++)
        {

            i = 0;
            for (i = 0; i < this->getLength() - 1; i++)
            {
                if (data[i] < data[i + 1])
                {
                    suport = this->data[i];
                    this->data[i] = this->data[i + 1];
                    this->data[i + 1] = suport;
                }
            }
        }
    }

    bool operator!=(Array intarray2)
    {
        bool response = false;

        if (this->length != intarray2.length)
        {
            response = true;
        }
        else
        {
            for (int i = 0; i < this->length; i++)
            {
                if (this->data[i] != intarray2.data[i])
                {
                    response = true;
                }
            }
        }
        return response;
    }

    Array operator-(Array intarray2)
    {
        Array<int> intarray3(this->getLength(), 0);

        if (this->length == intarray2.length)
        {

            for (int i = 0; i < this->length; i++)
            {
                intarray3.data[i] = this->data[i] - intarray2.data[i];
            }
        }
        return intarray3;
    }
};
#endif
