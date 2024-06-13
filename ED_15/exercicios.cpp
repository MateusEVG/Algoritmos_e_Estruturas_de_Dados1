/*
 Exemplo1500 - v0.0. - __ / __ / _____
 Author: _____________________________
*/
// ----------------------------------------------- preparacao
// dependências
#include <iostream>
using std::cin;  // para entrada
using std::cout; // para saida
using std::endl; // para mudar de linha
#include <iomanip>
#include <string>
using std::string; // para cadeia de caracteres
#include <fstream>
using std::ifstream; // para ler arquivo
using std::ofstream; // para gravar arquivo
#include <cstring>   // para manipulação de cadeias de caracteres C-style
#include <cstdlib>   // para malloc

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
// ----------------------------------------------- definicoes globais
using namespace std;
// ----------------------------------------------- metodos
/**
 Method_00 - nao faz nada.
*/
void method_00()
{
    // nao faz nada
} // end method_00 ( )

char *str_push_back(char *s, char c)
{
    int length = strlen(s);
    char *nova = (char *)malloc((length + 2) * sizeof(char));

    for (int i = 0; i < length; i++)
    {
        nova[i] = s[i];
    }

    nova[length] = c;
    nova[length + 1] = '\0';

    return nova;
}

char *str_pop_back(char *s)
{
    int length = strlen(s);
    if (length == 0)
    {
        return s;
    }

    char *nova = (char *)malloc(length * sizeof(char));

    for (int i = 0; i < length - 1; i++)
    {
        nova[i] = s[i];
    }

    nova[length - 1] = '\0';

    return nova;
}

char *str_push_front(char c, char *s)
{
    int length = strlen(s);
    char *nova = (char *)malloc((length + 2) * sizeof(char));

    nova[0] = c;
    for (int i = 0; i < length; i++)
    {
        nova[i + 1] = s[i];
    }

    nova[length + 1] = '\0';

    return nova;
}

char *str_pop_front(char *s)
{
    int length = strlen(s);
    if (length == 0)
    {
        return s;
    }

    char *nova = (char *)malloc(length * sizeof(char));

    for (int i = 1; i < length; i++)
    {
        nova[i - 1] = s[i];
    }

    nova[length - 1] = '\0';

    return nova;
}

char *str_push_mid(char *s, char c)
{
    int length = strlen(s);
    if (length < 2)
    {
        return str_push_back(s, c);
    }

    int mid = length / 2;
    char *nova = (char *)malloc((length + 2) * sizeof(char));

    for (int i = 0; i < mid; i++)
    {
        nova[i] = s[i];
    }

    nova[mid] = c;

    for (int i = mid; i < length; i++)
    {
        nova[i + 1] = s[i];
    }

    nova[length + 1] = '\0';

    return nova;
}

char *str_pop_mid(char *s)
{
    int length = strlen(s);
    if (length < 2)
    {
        return s;
    }

    int mid = length / 2;
    char *nova = (char *)malloc(length * sizeof(char));

    for (int i = 0; i < mid; i++)
    {
        nova[i] = s[i];
    }

    for (int i = mid + 1; i < length; i++)
    {
        nova[i - 1] = s[i];
    }

    nova[length - 1] = '\0';

    return nova;
}

char *str_insert(char *s, char c, int index)
{
    int length = strlen(s);
    if (index < 0 || index > length)
    {
        return s;
    }

    char *nova = (char *)malloc((length + 2) * sizeof(char));

    for (int i = 0; i < index; i++)
    {
        nova[i] = s[i];
    }

    nova[index] = c;

    for (int i = index; i < length; i++)
    {
        nova[i + 1] = s[i];
    }

    nova[length + 1] = '\0';

    return nova;
}

char *str_remove(char *s, int index)
{
    int length = strlen(s);
    if (index < 0 || index >= length)
    {
        return s;
    }

    char *nova = (char *)malloc(length * sizeof(char));

    for (int i = 0; i < index; i++)
    {
        nova[i] = s[i];
    }

    for (int i = index + 1; i < length; i++)
    {
        nova[i - 1] = s[i];
    }

    nova[length - 1] = '\0';

    return nova;
}

char *str_chr(char *s, char c)
{
    while (*s)
    {
        if (*s == c)
        {
            return s;
        }
        s++;
    }
    return NULL;
}

char *str_tok(char *s, char delimiter)
{
    static char *current;
    if (s != NULL)
    {
        current = s;
    }
    if (current == NULL)
    {
        return NULL;
    }

    char *start = current;
    while (*current)
    {
        if (*current == delimiter)
        {
            *current = '\0';
            current++;
            return start;
        }
        current++;
    }
    current = NULL;
    return start;
}

char *str_prefix(char *prefix, char *s)
{
    while (*prefix && *s && *prefix == *s)
    {
        prefix++;
        s++;
    }
    return (*prefix == '\0') ? s : NULL;
}

char *str_suffix(char *s, char *suffix)
{
    int len_s = strlen(s);
    int len_suffix = strlen(suffix);
    if (len_suffix > len_s)
    {
        return NULL;
    }
    s += len_s - len_suffix;
    while (*suffix && *s && *suffix == *s)
    {
        suffix++;
        s++;
    }
    return (*suffix == '\0') ? s : NULL;
}

/**
 Method_01 - Testar a funcao str_push_back.
*/
void method_01()
{
    char original[100];
    char c;

    cout << "Digite uma cadeia de caracteres: ";
    cin >> original;

    cout << "Digite um caractere para adicionar: ";
    cin >> c;

    char *result = str_push_back(original, c);

    cout << "\nMethod_01 - v0.0\n"
         << endl;
    cout << "Original: " << original << endl;
    cout << "Character to add: " << c << endl;
    cout << "Result: " << result << endl;

    free(result);

    pause("Apertar ENTER para continuar");
}

/**
 Method_02 - Testar a funcao str_pop_back.
*/
void method_02()
{
    char original[100];

    cout << "Digite uma cadeia de caracteres: ";
    cin >> original;

    char *result = str_pop_back(original);

    cout << "\nMethod_02 - v0.0\n"
         << endl;
    cout << "Original: " << original << endl;
    cout << "Result after pop back: " << result << endl;

    free(result);

    pause("Apertar ENTER para continuar");
}

/**
 Method_03 - Testar a funcao str_push_front.
*/
void method_03()
{
    char original[100];
    char c;

    cout << "Digite uma cadeia de caracteres: ";
    cin >> original;

    cout << "Digite um caractere para adicionar ao inicio: ";
    cin >> c;

    char *result = str_push_front(c, original);

    cout << "\nMethod_03 - v0.0\n"
         << endl;
    cout << "Original: " << original << endl;
    cout << "Character to add: " << c << endl;
    cout << "Result: " << result << endl;

    free(result);

    // encerrar
    pause("Apertar ENTER para continuar");
}

void method_04()
{
    char original[100];

    cout << "Digite uma cadeia de caracteres: ";
    cin >> original;

    char *result = str_pop_front(original);

    cout << "\nMethod_04 - v0.0\n"
         << endl;
    cout << "Original: " << original << endl;
    cout << "Result after pop front: " << result << endl;

    free(result);

    pause("Apertar ENTER para continuar");
}

void method_05()
{
    char str[100];
    char c;
    cout << "\nMethod_05 - Inserir caractere no meio\n";
    cout << "Digite uma string: ";
    cin >> str;
    cout << "Digite um caractere para inserir no meio: ";
    cin >> c;
    char *result = str_push_mid(str, c);
    cout << "Resultado: " << result << endl;
    free(result);
    pause("Apertar ENTER para continuar");
}

void method_06()
{
    char str[100];
    cout << "\nMethod_06 - Remover caractere do meio\n";
    cout << "Digite uma string: ";
    cin >> str;
    char *result = str_pop_mid(str);
    cout << "Resultado: " << result << endl;
    free(result);
    pause("Apertar ENTER para continuar");
}

void method_07()
{
    char str[100];
    char c;
    int index;
    cout << "\nMethod_07 - Inserir caractere em certa posição\n";
    cout << "Digite uma string: ";
    cin >> str;
    cout << "Digite um caractere para inserir: ";
    cin >> c;
    cout << "Digite a posição para inserir: ";
    cin >> index;
    char *result = str_insert(str, c, index);
    cout << "Resultado: " << result << endl;
    free(result);
    pause("Apertar ENTER para continuar");
}

void method_08()
{
    char str[100];
    int index;
    cout << "\nMethod_08 - Remover caractere de certa posição\n";
    cout << "Digite uma string: ";
    cin >> str;
    cout << "Digite a posição para remover: ";
    cin >> index;
    char *result = str_remove(str, index);
    cout << "Resultado: " << result << endl;
    free(result);
    pause("Apertar ENTER para continuar");
}

void method_09()
{
    char str[100];
    char c;
    cout << "\nMethod_09 - Procurar pela primeira ocorrência de certo símbolo\n";
    cout << "Digite uma string: ";
    cin >> str;
    cout << "Digite um caractere para procurar: ";
    cin >> c;
    char *result = str_chr(str, c);
    if (result)
    {
        cout << "Caractere encontrado em: " << result << endl;
    }
    else
    {
        cout << "Caractere não encontrado." << endl;
    }
    pause("Apertar ENTER para continuar");
}

void method_10()
{
    char str[100];
    char delimiter;
    cout << "\nMethod_10 - Separar caracteres até a ocorrência de delimitador\n";
    cout << "Digite uma string: ";
    cin >> str;
    cout << "Digite o delimitador: ";
    cin >> delimiter;
    char *result = str_tok(str, delimiter);
    while (result)
    {
        cout << result << endl;
        result = str_tok(NULL, delimiter);
    }
    pause("Apertar ENTER para continuar");
}

void method_11()
{
    char str[100];
    char prefix[100];
    cout << "\nMethod_11 - Procurar por certo prefixo\n";
    cout << "Digite uma string: ";
    cin >> str;
    cout << "Digite o prefixo a ser procurado: ";
    cin >> prefix;
    char *result = str_prefix(prefix, str);
    if (result)
    {
        cout << "Prefixo encontrado. Sufixo resultante: " << result << endl;
    }
    else
    {
        cout << "Prefixo não encontrado." << endl;
    }
    pause("Apertar ENTER para continuar");
}

void method_12()
{
    char str[100];
    char suffix[100];
    cout << "\nMethod_12 - Procurar por certo sufixo\n";
    cout << "Digite uma string: ";
    cin >> str;
    cout << "Digite o sufixo a ser procurado: ";
    cin >> suffix;
    char *result = str_suffix(str, suffix);
    if (result)
    {
        cout << "Sufixo encontrado. Posição: " << result << endl;
    }
    else
    {
        cout << "Sufixo não encontrado." << endl;
    }
    pause("Apertar ENTER para continuar");
}

int main(int argc, char **argv)
{
    int x = 0;
    do
    {
        cout << "EXEMPLO1500 - Programa - v0.0\n " << endl;
        cout << "Opcoes " << endl;
        cout << " 0 - parar " << endl;
        cout << " 1 - testar definicoes " << endl;
        cout << " 5 - inserir caractere no meio " << endl;
        cout << " 6 - remover caractere do meio " << endl;
        cout << " 7 - inserir caractere em certa posicao " << endl;
        cout << " 8 - remover caractere de certa posicao " << endl;
        cout << " 9 - procurar pela primeira ocorrencia de certo simbolo " << endl;
        cout << " 10 - separar caracteres ate a ocorrencia de delimitador " << endl;
        cout << " 11 - procurar por certo prefixo " << endl;
        cout << " 12 - procurar por certo sufixo " << endl;
        cout << endl
             << "Entrar com uma opcao: ";
        cin >> x;
        switch (x)
        {
        case 0:
            method_00();
            break;
        case 1:
            method_01();
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
        }
    } while (x != 0);
    pause("Apertar ENTER para terminar");
    return 0;
}
