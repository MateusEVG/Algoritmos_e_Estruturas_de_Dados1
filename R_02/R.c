#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <math.h>

#define MAX_SIZE 100

/**
 * Nome: Mateus Evangelista 
 * Matrícula: 825003
 */

void readArrayFromFile(const char* filename, int arr[], int *size) {
    FILE *file = fopen(filename, "r");
    if (file != NULL) {
        fscanf(file, "%d", size);
        for (int i = 0; i < *size; ++i) {
            fscanf(file, "%d", &arr[i]);
        }
        fclose(file);
    } else {
        printf("Unable to open file %s\n", filename);
    }
}

void writeArrayToFile(const char* filename, int arr[], int size) {
    FILE *file = fopen(filename, "w");
    if (file != NULL) {
        fprintf(file, "%d\n", size);
        for (int i = 0; i < size; ++i) {
            fprintf(file, "%d\n", arr[i]);
        }
        fclose(file);
    } else {
        printf("Unable to open file %s\n", filename);
    }
}

void readMatrixFromFile(const char* filename, int matrix[MAX_SIZE][MAX_SIZE], int *rows, int *cols) {
    FILE *file = fopen(filename, "r");
    if (file != NULL) {
        fscanf(file, "%d %d", rows, cols);
        for (int i = 0; i < *rows; ++i) {
            for (int j = 0; j < *cols; ++j) {
                fscanf(file, "%d", &matrix[i][j]);
            }
        }
        fclose(file);
    } else {
        printf("Unable to open file %s\n", filename);
    }
}

void writeMatrixToFile(const char* filename, int matrix[MAX_SIZE][MAX_SIZE], int rows, int cols) {
    FILE *file = fopen(filename, "w");
    if (file != NULL) {
        fprintf(file, "%d %d\n", rows, cols);
        for (int i = 0; i < rows; ++i) {
            for (int j = 0; j < cols; ++j) {
                fprintf(file, "%d ", matrix[i][j]);
            }
            fprintf(file, "\n");
        }
        fclose(file);
    } else {
        printf("Unable to open file %s\n", filename);
    }
}

void pause() {
    printf("Press ENTER to continue...");
    getchar();
}

void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

/**
 * Nome: Mateus Evangelista 
 * Matrícula: 825003
 * Objetivo: Verificar se um arranjo está em ordem decrescente e, se não, ordená-lo.
 * Parâmetros: arr (int[]), size (int)
 * Condições especiais: Nenhuma
 * Testes: {4, 2, 3, 1}, {5, 4, 3, 2, 1}
 */
void checkAndSortDescending(int arr[], int size) {
    bool sorted;
    do {
        sorted = true;
        for (int i = 0; i < size - 1; ++i) {
            if (arr[i] < arr[i + 1]) {
                swap(&arr[i], &arr[i + 1]);
                sorted = false;
            }
        }
    } while (!sorted);
}

void method_01() {
    int arr[MAX_SIZE], size;
    readArrayFromFile("DADOS1.TXT", arr, &size);
    checkAndSortDescending(arr, size);
    writeArrayToFile("DECRESCENTE.TXT", arr, size);
}

/**
 * Nome: Mateus Evangelista 
 * Matrícula: 825003
 * Objetivo: Inverter a ordem dos elementos de um arranjo.
 * Parâmetros: arr (int[]), size (int)
 * Condições especiais: Nenhuma
 * Testes: {4, 3, 2, 1}, {1, 2, 3, 4, 5}
 */
void reverseArray(int arr[], int size) {
    for (int i = 0; i < size / 2; ++i) {
        swap(&arr[i], &arr[size - i - 1]);
    }
}

void method_02() {
    int arr[MAX_SIZE], size;
    readArrayFromFile("DECRESCENTE.TXT", arr, &size);
    reverseArray(arr, size);
    writeArrayToFile("INVERTIDOS.TXT", arr, size);
}

/**
 * Nome: Mateus Evangelista 
 * Matrícula: 825003
 * Objetivo: Encontrar a mediana de um arranjo.
 * Parâmetros: arr (int[]), size (int)
 * Condições especiais: Nenhuma
 * Testes: {4, 3, 2, 1}, {1, 2, 3, 4, 5}
 */
int findMedian(int arr[], int size) {
    for (int i = 0; i < size - 1; ++i) {
        for (int j = i + 1; j < size; ++j) {
            if (arr[i] > arr[j]) {
                swap(&arr[i], &arr[j]);
            }
        }
    }
    if (size % 2 == 0) {
        return (arr[size / 2 - 1] + arr[size / 2]) / 2;
    } else {
        return arr[size / 2];
    }
}

void method_03() {
    int arr[MAX_SIZE], size;
    readArrayFromFile("DADOS1.TXT", arr, &size);
    int median = findMedian(arr, size);
    printf("Mediana: %d\n", median);
}

/**
 * Nome: Mateus Evangelista 
 * Matrícula: 825003
 * Objetivo: Filtrar elementos comuns entre dois arranjos.
 * Parâmetros: arr1 (int[]), size1 (int), arr2 (int[]), size2 (int), result (int[]), resultSize (int*)
 * Condições especiais: Nenhuma
 * Testes: {1, 2, 3}, {3, 4, 5}, {1, 3}
 */
void filterCommonElements(int arr1[], int size1, int arr2[], int size2, int result[], int *resultSize) {
    int temp[MAX_SIZE];
    int tempSize = 0;

    for (int i = 0; i < size1; ++i) {
        for (int j = 0; j < size2; ++j) {
            if (arr1[i] == arr2[j]) {
                temp[tempSize++] = arr1[i];
                break;
            }
        }
    }

    *resultSize = 0;
    for (int i = 0; i < tempSize; ++i) {
        bool found = false;
        for (int j = 0; j < *resultSize; ++j) {
            if (result[j] == temp[i]) {
                found = true;
                break;
            }
        }
        if (!found) {
            result[(*resultSize)++] = temp[i];
        }
    }
}

void method_04() {
    int arr1[MAX_SIZE], size1, arr2[MAX_SIZE], size2, result[MAX_SIZE], resultSize;
    readArrayFromFile("DADOS1.TXT", arr1, &size1);
    readArrayFromFile("DADOS2.TXT", arr2, &size2);
    filterCommonElements(arr1, size1, arr2, size2, result, &resultSize);
    writeArrayToFile("FILTRADOS.TXT", result, resultSize);
}

/**
 * Nome: Mateus Evangelista 
 * Matrícula: 825003
 * Objetivo: Converter um arranjo de binários em um número decimal.
 * Parâmetros: binArr (int[]), size (int)
 * Condições especiais: Nenhuma
 * Testes: {1, 0, 1, 1}, {0, 1, 1, 0}
 */
int binaryToDecimal(int binArr[], int size) {
    int decimal = 0;
    int base = 1;
    for (int i = size - 1; i >= 0; --i) {
        decimal += binArr[i] * base;
        base *= 2;
    }
    return decimal;
}

void method_05() {
    int binArr[MAX_SIZE], size;
    readArrayFromFile("BINARIOS1.TXT", binArr, &size);
    int decimal = binaryToDecimal(binArr, size);
    printf("Decimal: %d\n", decimal);
}

/**
 * Nome: Mateus Evangelista 
 * Matrícula: 825003
 * Objetivo: Montar e gravar uma matriz tridiagonal crescente.
 * Parâmetros: N (int) - tamanho da matriz quadrada
 * Condições especiais: Nenhuma
 * Testes: N = 4, N = 5
 */
void createTridiagonalMatrix(int N, int matrix[MAX_SIZE][MAX_SIZE]) {
    int num = 1;
    for (int i = 0; i < N; ++i) {
        for (int j = 0; j < N; ++j) {
            if (j >= i - 1 && j <= i + 1) {
                matrix[i][j] = num++;
            } else {
                matrix[i][j] = 0;
            }
        }
    }
}

void method_06() {
    int N;
    int matrix[MAX_SIZE][MAX_SIZE];
    printf("Enter N: ");
    scanf("%d", &N);
    createTridiagonalMatrix(N, matrix);
    writeMatrixToFile("MATRIZ2.TXT", matrix, N, N);
}

/**
 * Nome: Mateus Evangelista 
 * Matrícula: 825003
 * Objetivo: Montar e gravar uma matriz tridiagonal secundária decrescente.
 * Parâmetros: N (int) - tamanho da matriz quadrada
 * Condições especiais: Nenhuma
 * Testes: N = 4, N = 5
 */
void createSecondaryTridiagonalMatrix(int N, int matrix[MAX_SIZE][MAX_SIZE]) {
    int num = N * 3;
    for (int i = N - 1; i >= 0; --i) {
        for (int j = (i - 1 > 0) ? i - 1 : 0; j <= ((i + 1 < N) ? i + 1 : N - 1); ++j) {
            matrix[j][i] = num--;
        }
    }
}

void method_07() {
    int N;
    int matrix[MAX_SIZE][MAX_SIZE];
    printf("Enter N: ");
    scanf("%d", &N);
    createSecondaryTridiagonalMatrix(N, matrix);
    writeMatrixToFile("MATRIZ2.TXT", matrix, N, N);
}

/**
 * Nome: Mateus Evangelista 
 * Matrícula: 825003
 * Objetivo: Verificar se uma matriz possui potências por linha.
 * Parâmetros: matrix (int[MAX_SIZE][MAX_SIZE]), rows (int), cols (int)
 * Condições especiais: Nenhuma
 * Testes: Matriz 4x4 com potências
 */
bool checkPowersByRow(int matrix[MAX_SIZE][MAX_SIZE], int rows, int cols) {
    for (int i = 0; i < rows; ++i) {
        int base = matrix[i][1] / matrix[i][0];
        for (int j = 1; j < cols; ++j) {
            if (matrix[i][j] != pow(base, j)) {
                return false;
            }
        }
    }
    return true;
}

void method_08() {
    int matrix[MAX_SIZE][MAX_SIZE], rows, cols;
    readMatrixFromFile("MATRIZ3.TXT", matrix, &rows, &cols);
    bool result = checkPowersByRow(matrix, rows, cols);
    printf("Potências por linha: %s\n", result ? "Sim" : "Não");
}

/**
 * Nome: Mateus Evangelista 
 * Matrícula: 825003
 * Objetivo: Verificar se uma matriz possui potências por coluna.
 * Parâmetros: matrix (int[MAX_SIZE][MAX_SIZE]), rows (int), cols (int)
 * Condições especiais: Nenhuma
 * Testes: Matriz 4x4 com potências
 */
bool checkPowersByColumn(int matrix[MAX_SIZE][MAX_SIZE], int rows, int cols) {
    for (int j = 0; j < cols; ++j) {
        int base = matrix[1][j] / matrix[0][j];
        for (int i = 1; i < rows; ++i) {
            if (matrix[i][j] != pow(base, i)) {
                return false;
            }
        }
    }
    return true;
}

void method_09() {
    int matrix[MAX_SIZE][MAX_SIZE], rows, cols;
    readMatrixFromFile("MATRIZ4.TXT", matrix, &rows, &cols);
    bool result = checkPowersByColumn(matrix, rows, cols);
    printf("Potências por coluna: %s\n", result ? "Sim" : "Não");
}

void showMenu() {
    printf("\nEscolha um método para executar:\n");
    printf("1. Ordenar arranjo em ordem decrescente\n");
    printf("2. Inverter arranjo\n");
    printf("3. Encontrar a mediana de um arranjo\n");
    printf("4. Filtrar elementos comuns entre dois arranjos\n");
    printf("5. Converter arranjo binário para decimal\n");
    printf("6. Criar matriz tridiagonal crescente\n");
    printf("7. Criar matriz tridiagonal secundária decrescente\n");
    printf("8. Verificar potências por linha\n");
    printf("9. Verificar potências por coluna\n");
    printf("0. Sair\n");
}

int main() {
    int option;
    do {
        showMenu();
        printf("Opção: ");
        scanf("%d", &option);
        getchar();

        switch (option) {
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
            case 0:
                printf("Saindo...\n");
                break;
            default:
                printf("Opção inválida!\n");
                break;
        }
        pause();
    } while (option != 0);

    return 0;
}
