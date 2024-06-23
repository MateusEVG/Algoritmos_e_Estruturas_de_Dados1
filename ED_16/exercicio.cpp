#include <iostream>
#include <cstdlib> // for malloc and free

using namespace std;

void pause(string message)
{
    cout << message << endl;
    cin.ignore();
    cin.get();
}

// Basic array operations
int *array_push_back(int *array, int &length, int value)
{
    int *newArray = (int *)malloc((length + 1) * sizeof(int));
    for (int i = 0; i < length; i++)
    {
        newArray[i] = array[i];
    }
    newArray[length] = value;
    length++;
    free(array);
    return newArray;
}

int *array_pop_back(int *array, int &length)
{
    if (length == 0)
        return array;
    int *newArray = (int *)malloc((length - 1) * sizeof(int));
    for (int i = 0; i < length - 1; i++)
    {
        newArray[i] = array[i];
    }
    length--;
    free(array);
    return newArray;
}

int *array_push_front(int *array, int &length, int value)
{
    int *newArray = (int *)malloc((length + 1) * sizeof(int));
    newArray[0] = value;
    for (int i = 0; i < length; i++)
    {
        newArray[i + 1] = array[i];
    }
    length++;
    free(array);
    return newArray;
}

int *array_pop_front(int *array, int &length)
{
    if (length == 0)
        return array;
    int *newArray = (int *)malloc((length - 1) * sizeof(int));
    for (int i = 1; i < length; i++)
    {
        newArray[i - 1] = array[i];
    }
    length--;
    free(array);
    return newArray;
}

int *array_push_mid(int *array, int &length, int value)
{
    int mid = length / 2;
    int *newArray = (int *)malloc((length + 1) * sizeof(int));
    for (int i = 0; i < mid; i++)
    {
        newArray[i] = array[i];
    }
    newArray[mid] = value;
    for (int i = mid; i < length; i++)
    {
        newArray[i + 1] = array[i];
    }
    length++;
    free(array);
    return newArray;
}

int *array_pop_mid(int *array, int &length)
{
    if (length == 0)
        return array;
    int mid = length / 2;
    int *newArray = (int *)malloc((length - 1) * sizeof(int));
    for (int i = 0; i < mid; i++)
    {
        newArray[i] = array[i];
    }
    for (int i = mid + 1; i < length; i++)
    {
        newArray[i - 1] = array[i];
    }
    length--;
    free(array);
    return newArray;
}

// Struct and advanced operations
typedef struct s_intArray
{
    int length;
    int *data;
} intArray;

typedef intArray *ref_intArray;

int intArray_cmp(ref_intArray p, ref_intArray q)
{
    int len = (p->length < q->length) ? p->length : q->length;
    for (int i = 0; i < len; i++)
    {
        if (p->data[i] != q->data[i])
        {
            return p->data[i] - q->data[i];
        }
    }
    return p->length - q->length;
}

ref_intArray intArray_cat(ref_intArray p, ref_intArray q)
{
    int newLength = p->length + q->length;
    ref_intArray result = (ref_intArray)malloc(sizeof(intArray));
    result->data = (int *)malloc(newLength * sizeof(int));
    result->length = newLength;
    for (int i = 0; i < p->length; i++)
    {
        result->data[i] = p->data[i];
    }
    for (int i = 0; i < q->length; i++)
    {
        result->data[p->length + i] = q->data[i];
    }
    return result;
}

ref_intArray intArray_seek(ref_intArray a, int x)
{
    for (int i = 0; i < a->length; i++)
    {
        if (a->data[i] == x)
        {
            return a;
        }
    }
    return nullptr;
}

ref_intArray intArray_sub(ref_intArray a, int start, int size)
{
    if (start < 0 || start + size > a->length || size <= 0)
    {
        return nullptr;
    }
    ref_intArray result = (ref_intArray)malloc(sizeof(intArray));
    result->data = (int *)malloc(size * sizeof(int));
    result->length = size;
    for (int i = 0; i < size; i++)
    {
        result->data[i] = a->data[start + i];
    }
    return result;
}

// Main program
void method_00()
{
    // does nothing
}

void method_01()
{
    cout << "\nMethod_01 - v0.0\n"
         << endl;
    pause("Apertar ENTER para continuar");
}

void method_02()
{
    // Testing array_push_back
    cout << "\nMethod_02 - Test array_push_back\n"
         << endl;
    int length = 3;
    int *array = (int *)malloc(length * sizeof(int));
    array[0] = 1;
    array[1] = 2;
    array[2] = 3;
    array = array_push_back(array, length, 4);
    for (int i = 0; i < length; i++)
    {
        cout << array[i] << " ";
    }
    cout << endl;
    free(array);
    pause("Apertar ENTER para continuar");
}

void method_03()
{
    // Testing array_pop_back
    cout << "\nMethod_03 - Test array_pop_back\n"
         << endl;
    int length = 4;
    int *array = (int *)malloc(length * sizeof(int));
    array[0] = 1;
    array[1] = 2;
    array[2] = 3;
    array[3] = 4;
    array = array_pop_back(array, length);
    for (int i = 0; i < length; i++)
    {
        cout << array[i] << " ";
    }
    cout << endl;
    free(array);
    pause("Apertar ENTER para continuar");
}

void method_04()
{
    // Testing array_push_front
    cout << "\nMethod_04 - Test array_push_front\n"
         << endl;
    int length = 3;
    int *array = (int *)malloc(length * sizeof(int));
    array[0] = 1;
    array[1] = 2;
    array[2] = 3;
    array = array_push_front(array, length, 0);
    for (int i = 0; i < length; i++)
    {
        cout << array[i] << " ";
    }
    cout << endl;
    free(array);
    pause("Apertar ENTER para continuar");
}

void method_05()
{
    // Testing array_pop_front
    cout << "\nMethod_05 - Test array_pop_front\n"
         << endl;
    int length = 4;
    int *array = (int *)malloc(length * sizeof(int));
    array[0] = 1;
    array[1] = 2;
    array[2] = 3;
    array[3] = 4;
    array = array_pop_front(array, length);
    for (int i = 0; i < length; i++)
    {
        cout << array[i] << " ";
    }
    cout << endl;
    free(array);
    pause("Apertar ENTER para continuar");
}

void method_06()
{
    // Testing array_push_mid
    cout << "\nMethod_06 - Test array_push_mid\n"
         << endl;
    int length = 4;
    int *array = (int *)malloc(length * sizeof(int));
    array[0] = 1;
    array[1] = 2;
    array[2] = 3;
    array[3] = 4;
    array = array_push_mid(array, length, 99);
    for (int i = 0; i < length; i++)
    {
        cout << array[i] << " ";
    }
    cout << endl;
    free(array);
    pause("Apertar ENTER para continuar");
}

void method_07()
{
    // Testing array_pop_mid
    cout << "\nMethod_07 - Test array_pop_mid\n"
         << endl;
    int length = 5;
    int *array = (int *)malloc(length * sizeof(int));
    array[0] = 1;
    array[1] = 2;
    array[2] = 3;
    array[3] = 4;
    array[4] = 99;
    array = array_pop_mid(array, length);
    for (int i = 0; i < length; i++)
    {
        cout << array[i] << " ";
    }
    cout << endl;
    free(array);
    pause("Apertar ENTER para continuar");
}

void method_08()
{
    // Testing intArray_cmp
    cout << "\nMethod_08 - Test intArray_cmp\n"
         << endl;
    intArray arr1 = {3, (int *)malloc(3 * sizeof(int))};
    intArray arr2 = {3, (int *)malloc(3 * sizeof(int))};
    arr1.data[0] = 1;
    arr1.data[1] = 2;
    arr1.data[2] = 3;
    arr2.data[0] = 1;
    arr2.data[1] = 2;
    arr2.data[2] = 4;
    int cmpResult = intArray_cmp(&arr1, &arr2);
    cout << "Comparison result: " << cmpResult << endl;
    free(arr1.data);
    free(arr2.data);
    pause("Apertar ENTER para continuar");
}

void method_09()
{
    // Testing intArray_cat
    cout << "\nMethod_09 - Test intArray_cat\n"
         << endl;
    intArray arr1 = {3, (int *)malloc(3 * sizeof(int))};
    intArray arr2 = {2, (int *)malloc(2 * sizeof(int))};
    arr1.data[0] = 1;
    arr1.data[1] = 2;
    arr1.data[2] = 3;
    arr2.data[0] = 4;
    arr2.data[1] = 5;
    ref_intArray result = intArray_cat(&arr1, &arr2);
    for (int i = 0; i < result->length; i++)
    {
        cout << result->data[i] << " ";
    }
    cout << endl;
    free(arr1.data);
    free(arr2.data);
    free(result->data);
    free(result);
    pause("Apertar ENTER para continuar");
}

void method_10()
{
    // Testing intArray_seek
    cout << "\nMethod_10 - Test intArray_seek\n"
         << endl;
    intArray arr = {5, (int *)malloc(5 * sizeof(int))};
    arr.data[0] = 1;
    arr.data[1] = 2;
    arr.data[2] = 3;
    arr.data[3] = 4;
    arr.data[4] = 5;
    ref_intArray result = intArray_seek(&arr, 3);
    if (result != nullptr)
    {
        cout << "Value found: " << result->data[2] << endl;
    }
    else
    {
        cout << "Value not found" << endl;
    }
    free(arr.data);
    pause("Apertar ENTER para continuar");
}

void method_11()
{
    // Testing intArray_sub
    cout << "\nMethod_11 - Test intArray_sub\n"
         << endl;
    intArray arr = {5, (int *)malloc(5 * sizeof(int))};
    arr.data[0] = 1;
    arr.data[1] = 2;
    arr.data[2] = 3;
    arr.data[3] = 4;
    arr.data[4] = 5;

    int start = 1; // starting index for the subarray
    int size = 3;  // size of the subarray

    ref_intArray result = intArray_sub(&arr, start, size);

    if (result != nullptr)
    {
        for (int i = 0; i < result->length; i++)
        {
            cout << result->data[i] << " ";
        }
        cout << endl;
        free(result->data);
        free(result);
    }
    else
    {
        cout << "Invalid subarray parameters" << endl;
    }

    free(arr.data);
    pause("Apertar ENTER para continuar");
}
void method_12()
{
    // Testing intArray_merge
    cout << "\nMethod_12 - Test intArray_merge\n"
         << endl;
    intArray arr1 = {3, (int *)malloc(3 * sizeof(int))};
    intArray arr2 = {2, (int *)malloc(2 * sizeof(int))};
    arr1.data[0] = 1;
    arr1.data[1] = 3;
    arr1.data[2] = 5;
    arr2.data[0] = 2;
    arr2.data[1] = 4;
    ref_intArray result = intArray_merge(&arr1, &arr2);
    for (int i = 0; i < result->length; i++)
    {
        cout << result->data[i] << " ";
    }
    cout << endl;
    free(arr1.data);
    free(arr2.data);
    free(result->data);
    free(result);
    pause("Apertar ENTER para continuar");
}

void method_13()
{
    // Testing intArray_mergeUp
    cout << "\nMethod_13 - Test intArray_mergeUp\n"
         << endl;
    intArray arr1 = {3, (int *)malloc(3 * sizeof(int))};
    intArray arr2 = {2, (int *)malloc(2 * sizeof(int))};
    arr1.data[0] = 1;
    arr1.data[1] = 2;
    arr1.data[2] = 3;
    arr2.data[0] = 4;
    arr2.data[1] = 5;
    ref_intArray result = intArray_mergeUp(&arr1, &arr2);
    for (int i = 0; i < result->length; i++)
    {
        cout << result->data[i] << " ";
    }
    cout << endl;
    free(arr1.data);
    free(arr2.data);
    free(result->data);
    free(result);
    pause("Apertar ENTER para continuar");
}

ref_intArray intArray_merge(ref_intArray p, ref_intArray q)
{
    int newLength = p->length + q->length;
    ref_intArray result = (ref_intArray)malloc(sizeof(intArray));
    result->data = (int *)malloc(newLength * sizeof(int));
    result->length = newLength;
    int i = 0, j = 0, k = 0;
    while (i < p->length && j < q->length)
    {
        result->data[k++] = p->data[i++];
        result->data[k++] = q->data[j++];
    }
    while (i < p->length)
    {
        result->data[k++] = p->data[i++];
    }
    while (j < q->length)
    {
        result->data[k++] = q->data[j++];
    }
    return result;
}

ref_intArray intArray_mergeUp(ref_intArray p, ref_intArray q)
{
    int newLength = p->length + q->length;
    ref_intArray result = (ref_intArray)malloc(sizeof(intArray));
    result->data = (int *)malloc(newLength * sizeof(int));
    result->length = newLength;
    int i = 0, j = 0, k = 0;
    while (i < p->length && j < q->length)
    {
        if (p->data[i] < q->data[j])
        {
            result->data[k++] = p->data[i++];
        }
        else
        {
            result->data[k++] = q->data[j++];
        }
    }
    while (i < p->length)
    {
        result->data[k++] = p->data[i++];
    }
    while (j < q->length)
    {
        result->data[k++] = q->data[j++];
    }
    return result;
}

int main(int argc, char **argv)
{
    int x = 0;
    do
    {
        cout << "EXEMPLO1600 - Programa - v0.0\n"
             << endl;
        cout << "Opcoes " << endl;
        cout << " 0 - parar " << endl;
        cout << " 1 - testar definicoes " << endl;
        cout << " 2 - testar array_push_back " << endl;
        cout << " 3 - testar array_pop_back " << endl;
        cout << " 4 - testar array_push_front " << endl;
        cout << " 5 - testar array_pop_front " << endl;
        cout << " 6 - testar array_push_mid " << endl;
        cout << " 7 - testar array_pop_mid " << endl;
        cout << " 8 - testar intArray_cmp " << endl;
        cout << " 9 - testar intArray_cat " << endl;
        cout << "10 - testar intArray_seek " << endl;
        cout << "11 - testar intArray_sub " << endl;
        cout << "12 - testar intArray_merge " << endl;
        cout << "13 - testar intArray_mergeUp " << endl;
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
        case 11:
            method_11();
            break;
        case 12:
            method_12();
            break;
        case 13:
            method_13();
            break;
        default:
            cout << endl
                 << "ERRO: Valor invalido." << endl;
        }
    } while (x != 0);
    pause("Apertar ENTER para terminar");
    return 0;
}
