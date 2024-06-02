/*
 mymatrix.hpp - v0.0. - __ / __ / _____
 Author: _________________________
*/
// ----------------------------------------------- definicoes globais
#ifndef _MYMATRIX_H_
#define _MYMATRIX_H_
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

// dependencias
#include <iostream>
#include <limits>
#include <string>
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

// ----------------------- Matrix class

template <typename T> 
class Matrix
{
private: // area reservada
  T optional;
  int rows;
  int columns;
  T **data;

public: // area aberta
  Matrix()
  {
    // definir valores iniciais
    this->rows = 0;
    this->columns = 0;
    // sem reservar area
    data = nullptr;
  } // end constructor
  Matrix(int rows, int columns, T initial)
  {
    // definir dado local
    bool OK = true;
    // definir valores iniciais
    this->optional = initial;
    this->rows = rows;
    this->columns = columns;
    // reservar area
    data = new T *[rows];
    if (data != nullptr)
    {
      for (int x = 0; x < rows; x = x + 1)
      {
        data[x] = new T[columns];
        OK = OK && (data[x] != nullptr);
      } // end for
      if (!OK)
      {
        data = nullptr;
      } // end if
    } // end if
  } // end constructor

  ~Matrix()
  {
    if (data != nullptr)
    {
      for (int x = 0; x < rows; x = x + 1)
      {
        delete (data[x]);
      } // end for
      delete (data);
      data = nullptr;
    } // end if
  } // end destructor ( )

  void set(int row, int column, T value)
  {
    if (row < 0 || row >= rows ||
        column < 0 || column >= columns)
    {
      cout << "\nERROR: Invalid position.\n";
    }
    else
    {
      data[row][column] = value;
    } // end if
  } // end set ( )
  T get(int row, int column)
  {
    T value = optional;
    if (row < 0 || row >= rows ||
        column < 0 || column >= columns)
    {
      cout << "\nERROR: Invalid position.\n";
    }
    else
    {
      value = data[row][column];
    } // end if
    return (value);
  } // end get ( )

  void print()
  {
    cout << endl;
    for (int x = 0; x < rows; x = x + 1)
    {
      for (int y = 0; y < columns; y = y + 1)
      {
        cout << data[x][y] << "\t";
      } // end for
      cout << endl;
    } // end for
    cout << endl;
  } // end print ( )

  void read()
  {
    cout << endl;
    for (int x = 0; x < rows; x = x + 1)
    {
      for (int y = 0; y < columns; y = y + 1)
      {
        cout << setw(2) << x << ", "
             << setw(2) << y << " : ";
        cin >> data[x][y];
      } // end for
    } // end for
    cout << endl;
  } // end read ( )

  void fprint(string fileName)
  {
    ofstream afile;
    afile.open(fileName);
    afile << rows << endl;
    afile << columns << endl;
    for (int x = 0; x < rows; x = x + 1)
    {
      for (int y = 0; y < columns; y = y + 1)
      {
        afile << data[x][y] << endl;
      } // end for
    } // end for
    afile.close();
  } // end fprint ( )

  void fread(string fileName)
  {
    ifstream afile;
    int m = 0;
    int n = 0;
    afile.open(fileName);
    afile >> m;
    afile >> n;
    if (m <= 0 || n <= 0)
    {
      cout << "\nERROR: Invalid dimensions for matrix.\n"
           << endl;
    }
    else
    {
      // guardar a quantidade de dados
      rows = m;
      columns = n;
      // reservar area
      data = new T *[rows];
      for (int x = 0; x < rows; x = x + 1)
      {
        data[x] = new T[columns];
      } // end for
      // ler dados
      for (int x = 0; x < rows; x = x + 1)
      {
        for (int y = 0; y < columns; y = y + 1)
        {
          afile >> data[x][y];
        } // end for
      } // end for
    } // end if
    afile.close();
  } // end fread ( )

  Matrix &operator=(const Matrix<T> &other)
  {
    if (other.rows == 0 || other.columns == 0)
    {
      cout << "\nERROR: Missing data.\n"
           << endl;
    }
    else
    {
      this->rows = other.rows;
      this->columns = other.columns;
      this->data = new T *[rows];
      for (int x = 0; x < rows; x = x + 1)
      {
        this->data[x] = new T[columns];
      } // end for
      for (int x = 0; x < this->rows; x = x + 1)
      {
        for (int y = 0; y < this->columns; y = y + 1)
        {
          data[x][y] = other.data[x][y];
        } // end for
      } // end for
    } // end if
    return (*this);
  } // end operator= ( )

  bool isZeros()
  {
    bool result = false;
    int x = 0;
    int y = 0;
    if (rows > 0 && columns > 0)
    {
      result = true;
      while (x < rows && result)
      {
        y = 0;
        while (y < columns && result)
        {
          result = result && (data[x][y] == 0);
          y = y + 1;
        } // end while
        x = x + 1;
      } // end while
    } // end if
    return (result);
  } // end isZeros ( )

  bool operator!=(const Matrix<T> &other)
  {
    bool result = false;
    int x = 0;
    int y = 0;
    if (other.rows == 0 || rows != other.rows ||
        other.columns == 0 || columns != other.columns)
    {
      cout << "\nERROR: Missing data.\n"
           << endl;
    }
    else
    {
      x = 0;
      while (x < rows && !result)
      {
        y = 0;
        while (y < columns && !result)
        {
          result = (data[x][y] != other.data[x][y]);
          y = y + 1;
        } // end while
        x = x + 1;
      } // end while
    } // end if
    return (result);
  } // end operator!= ( )

  Matrix &operator-(const Matrix<T> &other)
  {
    static Matrix<T> result(1, 1, 0);
    int x = 0;
    int y = 0;
    if (other.rows == 0 || rows != other.rows ||
        other.columns == 0 || columns != other.columns)
    {
      cout << "\nERROR: Missing data.\n"
           << endl;
    }
    else
    {
      result.rows = rows;
      result.columns = other.columns;
      result.data = new T *[result.rows];
      for (int x = 0; x < result.rows; x = x + 1)
      {
        result.data[x] = new T[result.columns];
      } // end for
      for (int x = 0; x < result.rows; x = x + 1)
      {
        for (int y = 0; y < result.columns; y = y + 1)
        {
          result.data[x][y] = data[x][y] - other.data[x][y];
        } // end for
      } // end for
    } // end if
    return (result);
  } // end operator- ( )

  Matrix &operator*(const Matrix<T> &other)
  {
    static Matrix<T> result(1, 1, 0);
    int x = 0;
    int y = 0;
    int z = 0;
    int sum = 0;
    if (rows <= 0 || columns == 0 ||
        other.rows <= 0 || other.columns == 0 ||
        columns != other.rows)
    {
      cout << endl
           << "ERROR: Invalid data." << endl;
      result.data[0][0] = 0;
    }
    else
    {
      result.rows = rows;
      result.columns = other.columns;
      result.data = new T *[result.rows];
      for (int x = 0; x < result.rows; x = x + 1)
      {
        result.data[x] = new T[result.columns];
      } // end for
      for (x = 0; x < result.rows; x = x + 1)
      {
        for (y = 0; y < result.columns; y = y + 1)
        {
          sum = 0;
          for (z = 0; z < columns; z = z + 1)
          {
            sum = sum + data[x][z] * other.data[z][y];
          } // end for
          result.data[x][y] = sum;
        } // end for
      } // end for
    } // end if
    return (result);
  } // end operator* ( )

  const int getRows()
  {
    return (rows);
  } // end getRows ( )
  const int getColumns()
  {
    return (columns);
  } // end getColumns ( )

  void randmatrix(int inferior, int superior)
  {
    for (int i = 0; i < rows; i++)
    {
      for (int j = 0; j < columns; j++)
      {
        this->data[i][j] = rand() % (superior - inferior + 1) + inferior;
      }
    }
  }

  Matrix escalar(int constante)
  {
    for (int i = 0; i < rows; i++)
    {
      for (int j = 0; j < columns; j++)
      {
        this->data[i][j] = data[i][j] * constante;
      }
    }
    return *this;
  }

  bool identity()
  {
    bool response = true;
    for (int i = 0; i < rows; i++)
    {
      for (int j = 0; j < columns; j++)
      {
        if (data[i][i] != 1)
        {
          response = false;
        }
        if (i != j && data[i][j] != 0)
        {
          response = false;
        }
      }
    }
    return response;
  }

  bool operator==(Matrix intmatrix)
  {
    bool response = true;

    for (int i = 0; i < rows; i++)
    {
      for (int j = 0; j < columns; j++)
      {
        if (this->data[i][j] != intmatrix.data[i][j])
        {
          response = false;
        }
      }
    }
    return response;
  }

  Matrix operator+(Matrix intmatrix)
  {
    Matrix<int> intmatrix3 = intmatrix;

    if (this->rows != intmatrix.rows || this->columns != intmatrix.columns)
    {
      cout << "ERROR : Matrix with diferent size" << endl;
    }
    else
    {
      for (int i = 0; i < rows; i++)
      {
        for (int j = 0; j < columns; j++)
        {
          intmatrix3.data[i][j] = this->data[i][j] + intmatrix.data[i][j];
        }
      }
    }
    return intmatrix3;
  }

  void lineadd(int line1, int line2, int constante)
  {
    if (line1 < rows && line2 < rows)
    {

      for (int i = 0; i < columns; i++)
      {
        data[line1][i] += data[line2][i] * constante;
      }
    }
    else
      cout << "ERROR : Linha invalida" << endl;
  }

  void linesub(int line1, int line2, int constante)
  {
    if (line1 < rows && line2 < rows)
    {

      for (int i = 0; i < columns; i++)
      {
        data[line1][i] -= data[line2][i] * constante;
      }
    }
    else
      cout << "ERROR : Linha invalida" << endl;
  }

  int linesearch(int value)
  {
    int x = -1;
    for (int i = 0; i < rows; i++)
    {
      for (int j = 0; j < columns; j++)
      {
        if (data[i][j] == value)
        {
          x = i;
        }
      }
    }
    return x;
  }

  int columnsearch(int value)
  {
    int x = -1;
    for (int i = 0; i < rows; i++)
    {
      for (int j = 0; j < columns; j++)
      {
        if (data[i][j] == value)
        {
          x = j;
        }
      }
    }
    return x;
  }

  void transpose()
  {
    Matrix<int> intmatrix(this->columns, this->rows, 0);
    int x = 0;

    for (int i = 0; i < intmatrix.rows; i++)
    {
      for (int j = 0; j < intmatrix.columns; j++)
      {
        intmatrix.data[i][j] = this->data[j][i];
        x = x - 1;
      }
    }
    *this = intmatrix;
  }

}; // end class
#endif
