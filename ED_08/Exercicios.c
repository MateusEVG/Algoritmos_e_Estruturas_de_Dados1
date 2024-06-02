
#include "io.h"

int* lerarquivo(int n, char *filename);


void method_01()
{
    int x = 0;
    int y = 0;
    int vetor[80];

    do
    {
        printf("\nDigite um numero maior que 0 e impar: ");
        scanf("%d", &x);

    } while (x <= 0);

    for (int i = 0; i < x; i++)
    {
        do
        {
            printf("\n%d : ", i);
            scanf("%d", &y);
            vetor[i] = y;

        } while (y >= 0 && (y % 2) == 0);
    }
}

void method_02()
{
    int vector[80];
    int x = 0;
    int y = 0;

    printf("\nDigite o tamanho do vetor: ");
    scanf("%d", &x);
    getchar();

    for (int i = 0; i < x; i++)
    {
        printf("\nVector[%d] : ", i);
        scanf("%d", &vector[i]);
    }
    guardarinteiros(x, vector, "DATA1.TXT");
}

void guardarinteiros(int x, int vetor[], char *filename)
{

    FILE *arquivo = fopen(filename, "wt");

    fprintf(arquivo, "%d\n", x);

    for (int i = 0; i < x; i++)
    {
        if (vetor[i] > 0 && vetor[i] % 2 == 0)
        {
            fprintf(arquivo, "%d\n", vetor[i]);
        }
        else
        {
            fprintf(arquivo, "\n");
        }
    }

    fclose(arquivo);
}

int randint(int min, int max)
{
    int r = rand() % (max - min + 1) + min;
    return r;
}

void method_03()
{
    int min = 0;
    int randarray[80];
    int max = 0;
    int n = 0;

    printf("\nDigite um numero para ser min : ");
    scanf("%d", &min);
    getchar();
    printf("\nOutro para ser max : ");
    scanf("%d", &max);
    getchar();
    printf("\nDigite quantos numeros quer gerar : ");
    scanf("%d", &n);
    getchar();

    for (int i = 0; i < n; i++)
    {
        randarray[i] = randint(min, max);
    }

    FILE *arquivo = fopen("DADOS1.TXT", "wt");
    fprintf(arquivo, "%d\n", n);

    for (int i = 0; i < n; i++)
    {
        fprintf(arquivo, "%d\n", randarray[i]);
    }
    fclose(arquivo);
}

void method_04()
{
    int array[80];
    int menor = 0;
    int n = 9;

    *array = lerarquivo(n, "DADOS.TXT");
    menor = menorimpar(n, array);

    printf("\nO menor numero no array e %d\n", menor);
}

int* lerarquivo(int n, char *filename)
{
    int array[80];
    int x = 0;

    FILE *arquivo = fopen(filename, "rt");

    for (int i = 0; i < n; i++)
    {
        fscanf(arquivo, "%d\n", &x);
        array[i] = x;
    }
    fclose(arquivo); 
    return array;
}

int menorimpar(int n, int *array)
{
    int menor = array[0];

    for (int i = 0; i < n; i++)
    {
        if (menor > array[i] && array[i] % 2 != 0)
        {
            menor = array[i];
        }
        return menor;
    }
}

void method_05()
{
    int array[80];
    int maior = 0;
    int n = 9;

    *array = lerarquivo(n, "DADOS.TXT");
    maior = maiorimpar(n, array);

    printf("\nO menor numero no array e %d\n", maior);
}
int maiorimpar(int n, int *array)
{
    int maior = array[0];

    for (int i = 0; i < n; i++)
    {
        if (maior < array[i] && array[i] % 2 != 0)
        {
            maior = array[i];
        }
        return maior;
    }
}

/*
 Funcao principal.
 @return codigo de encerramento
*/
int main()
{
    // definir dado
    int x = 0;
    // repetir até desejar parar
    do
    {
        // identificar
        //  IO_id("EXEMPLO0500 - Programa - v0.0");
        // ler do teclado
        IO_println("\nOpcoes");
        IO_println("0 - parar");
        IO_println("1 -  method_01");
        IO_println("2 -  method_02");
        IO_println("3 -  method_03");
        IO_println("4 -  method_04");
        IO_println("5 -  method_05");
        IO_println("6 -  method_06");
        IO_println("7 -  method_07");
        IO_println("8 -  method_08");
        IO_println("9 -  method_09");
        IO_println("10 -  method_10");
        IO_println("");
        x = IO_readint("Entrar com uma opcao: ");
        // testar valor
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
            method_04(); // nao deu certo 
            break;
        case 5:
            method_05(); // nao deu certo
            break;
        } // end switch
    } while (x != 0);
    // encerrar
    // IO_pause("Apertar ENTER para terminar");
    return (0);
} // end main ( )