/*
Autor: Mateus Evangelista do Nascimento 
Criado em 26/02/2024
Biblioteca criada para funções de AED1 cursado no primeiro semestre de 2024
*/

// Bibliotecas dependentes 
#include "io.h" // consultar e incluir externamente 

// ----------------------------------------------------- ED 01 --------------------------------------------------------------------

/*
multiplica o valor do lado do quadrado por 3 e mostra sua nova area
@param x - lado de um quadrado
*/
int Area_quadrado_3x(int x)
{

    // dados
    const int b = 3;
    int y = 0;

    // procedimento
    y = (x * b) * (x * b);

    // retorno
    return (y);
}