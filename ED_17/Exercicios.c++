#include <iostream>
#include <vector>

using namespace std;

typedef struct s_intStack
{
    int length;
    int *data;
} intStack;

typedef intStack *ref_intStack;

typedef struct s_intQueue
{
    int length;
    int *data;
} intQueue;

typedef intQueue *ref_intQueue;

void pause(string message)
{
    cout << message << endl;
    cin.ignore();
    cin.get();
}

ref_intStack intStack_push(ref_intStack stack, int value)
{
    int *newData = new int[stack->length + 1];
    for (int i = 0; i < stack->length; i++)
    {
        newData[i] = stack->data[i];
    }
    newData[stack->length] = value;
    delete[] stack->data;
    stack->data = newData;
    stack->length++;
    return stack;
}

ref_intStack intStack_pop(ref_intStack stack)
{
    if (stack->length > 0)
    {
        int *newData = new int[stack->length - 1];
        for (int i = 0; i < stack->length - 1; i++)
        {
            newData[i] = stack->data[i];
        }
        delete[] stack->data;
        stack->data = newData;
        stack->length--;
    }
    return stack;
}

ref_intStack intStack_dup(ref_intStack stack)
{
    if (stack->length > 0)
    {
        return intStack_push(stack, stack->data[stack->length - 1]);
    }
    return stack;
}

ref_intStack intStack_swap(ref_intStack stack)
{
    if (stack->length > 1)
    {
        int temp = stack->data[stack->length - 1];
        stack->data[stack->length - 1] = stack->data[stack->length - 2];
        stack->data[stack->length - 2] = temp;
    }
    return stack;
}

ref_intStack intStack_invert(ref_intStack stack)
{
    for (int i = 0; i < stack->length / 2; i++)
    {
        int temp = stack->data[i];
        stack->data[i] = stack->data[stack->length - 1 - i];
        stack->data[stack->length - 1 - i] = temp;
    }
    return stack;
}

ref_intQueue intQueue_push(ref_intQueue queue, int value)
{
    int *newData = new int[queue->length + 1];
    for (int i = 0; i < queue->length; i++)
    {
        newData[i] = queue->data[i];
    }
    newData[queue->length] = value;
    delete[] queue->data;
    queue->data = newData;
    queue->length++;
    return queue;
}

ref_intQueue intQueue_pop(ref_intQueue queue)
{
    if (queue->length > 0)
    {
        int *newData = new int[queue->length - 1];
        for (int i = 1; i < queue->length; i++)
        {
            newData[i - 1] = queue->data[i];
        }
        delete[] queue->data;
        queue->data = newData;
        queue->length--;
    }
    return queue;
}

int intQueue_compare(ref_intQueue p, ref_intQueue q)
{
    int minLength = p->length < q->length ? p->length : q->length;
    for (int i = 0; i < minLength; i++)
    {
        if (p->data[i] != q->data[i])
        {
            return p->data[i] - q->data[i];
        }
    }
    return p->length - q->length;
}

ref_intQueue intQueue_join(ref_intQueue p, ref_intQueue q)
{
    int *newData = new int[p->length + q->length];
    for (int i = 0; i < p->length; i++)
    {
        newData[i] = p->data[i];
    }
    for (int i = 0; i < q->length; i++)
    {
        newData[p->length + i] = q->data[i];
    }
    delete[] p->data;
    p->data = newData;
    p->length += q->length;
    return p;
}

int intQueue_search(ref_intQueue queue, int value)
{
    for (int i = 0; i < queue->length; i++)
    {
        if (queue->data[i] == value)
        {
            return 1;
        }
    }
    return 0;
}

ref_intQueue intQueue_merge(ref_intQueue p, ref_intQueue q)
{
    int *newData = new int[p->length + q->length];
    int index = 0;
    for (int i = 0; i < p->length; i++)
    {
        newData[index++] = p->data[i];
    }
    for (int i = 0; i < q->length; i++)
    {
        newData[index++] = q->data[i];
    }
    delete[] p->data;
    p->data = newData;
    p->length += q->length;
    return p;
}

ref_intQueue intQueue_mergeUp(ref_intQueue p, ref_intQueue q)
{
    vector<int> merged;
    int i = 0, j = 0;
    while (i < p->length && j < q->length)
    {
        if (p->data[i] < q->data[j])
        {
            if (merged.empty() || merged.back() != p->data[i])
            {
                merged.push_back(p->data[i]);
            }
            i++;
        }
        else if (p->data[i] > q->data[j])
        {
            if (merged.empty() || merged.back() != q->data[j])
            {
                merged.push_back(q->data[j]);
            }
            j++;
        }
        else
        {
            if (merged.empty() || merged.back() != p->data[i])
            {
                merged.push_back(p->data[i]);
            }
            i++;
            j++;
        }
    }
    while (i < p->length)
    {
        if (merged.empty() || merged.back() != p->data[i])
        {
            merged.push_back(p->data[i]);
        }
        i++;
    }
    while (j < q->length)
    {
        if (merged.empty() || merged.back() != q->data[j])
        {
            merged.push_back(q->data[j]);
        }
        j++;
    }
    int *newData = new int[merged.size()];
    for (size_t k = 0; k < merged.size(); k++)
    {
        newData[k] = merged[k];
    }
    delete[] p->data;
    p->data = newData;
    p->length = merged.size();
    return p;
}

void method_00()
{
    // nao faz nada
}

void method_01()
{
    cout << "\nMethod_01 - v0.0\n"
         << endl;
    pause("Apertar ENTER para continuar");
}

void method_02(ref_intStack stack)
{
    cout << "\nMethod_02 - Empilhar valor\n";
    int value;
    cout << "Digite um valor para empilhar: ";
    cin >> value;
    stack = intStack_push(stack, value);
    cout << "Valor " << value << " empilhado.\n";
    pause("Apertar ENTER para continuar");
}

void method_03(ref_intStack stack)
{
    cout << "\nMethod_03 - Desempilhar valor\n";
    stack = intStack_pop(stack);
    cout << "Valor desempilhado.\n";
    pause("Apertar ENTER para continuar");
}

void method_04(ref_intStack stack)
{
    cout << "\nMethod_04 - Duplicar valor no topo\n";
    stack = intStack_dup(stack);
    cout << "Valor no topo duplicado.\n";
    pause("Apertar ENTER para continuar");
}

void method_05(ref_intStack stack)
{
    cout << "\nMethod_05 - Trocar ordem dos valores no topo\n";
    stack = intStack_swap(stack);
    cout << "Valores no topo trocados.\n";
    pause("Apertar ENTER para continuar");
}

void method_06(ref_intStack stack)
{
    cout << "\nMethod_06 - Inverter ordem dos valores na pilha\n";
    stack = intStack_invert(stack);
    cout << "Ordem dos valores na pilha invertida.\n";
    pause("Apertar ENTER para continuar");
}

void method_07(ref_intQueue queue)
{
    cout << "\nMethod_07 - Enfileirar valor\n";
    int value;
    cout << "Digite um valor para enfileirar: ";
    cin >> value;
    queue = intQueue_push(queue, value);
    cout << "Valor " << value << " enfileirado.\n";
    pause("Apertar ENTER para continuar");
}

void method_08(ref_intQueue queue)
{
    cout << "\nMethod_08 - Desenfileirar valor\n";
    queue = intQueue_pop(queue);
    cout << "Valor desenfileirado.\n";
    pause("Apertar ENTER para continuar");
}

void method_09(ref_intQueue p, ref_intQueue q)
{
    cout << "\nMethod_09 - Comparar filas\n";
    int result = intQueue_compare(p, q);
    if (result == 0)
    {
        cout << "As filas são iguais.\n";
    }
    else if (result < 0)
    {
        cout << "A primeira fila é menor.\n";
    }
    else
    {
        cout << "A primeira fila é maior.\n";
    }
    pause("Apertar ENTER para continuar");
}

void method_10(ref_intQueue p, ref_intQueue q)
{
    cout << "\nMethod_10 - Juntar filas\n";
    ref_intQueue result = intQueue_join(p, q);
    cout << "Filas juntadas.\n";
    pause("Apertar ENTER para continuar");
}

void method_11(ref_intQueue queue)
{
    cout << "\nMethod_11 - Procurar valor na fila\n";
    int value;
    cout << "Digite um valor para procurar: ";
    cin >> value;
    int found = intQueue_search(queue, value);
    if (found)
    {
        cout << "Valor encontrado na fila.\n";
    }
    else
    {
        cout << "Valor não encontrado na fila.\n";
    }
    pause("Apertar ENTER para continuar");
}

void method_12(ref_intQueue p, ref_intQueue q)
{
    cout << "\nMethod_12 - Intercalar filas\n";
    ref_intQueue result = intQueue_merge(p, q);
    cout << "Filas intercaladas.\n";
    pause("Apertar ENTER para continuar");
}

void method_13(ref_intQueue p, ref_intQueue q)
{
    cout << "\nMethod_E1 - Intercalar filas em ordem crescente\n";
    ref_intQueue result = intQueue_mergeUp(p, q);
    cout << "Filas intercaladas e ordenadas.\n";
    pause("Apertar ENTER para continuar");
}

int main(int argc, char **argv)
{
    int x = 0;
    intStack stack = {0, nullptr};
    intQueue queue1 = {0, nullptr};
    intQueue queue2 = {0, nullptr};
    ref_intStack refStack = &stack;
    ref_intQueue refQueue1 = &queue1;
    ref_intQueue refQueue2 = &queue2;

    do
    {
        cout << "EXEMPLO1700 - Programa - v0.0\n"
             << endl;
        cout << "Opcoes " << endl;
        cout << " 0 - parar " << endl;
        cout << " 1 - testar definicoes " << endl;
        cout << " 2 - empilhar valor" << endl;
        cout << " 3 - desempilhar valor" << endl;
        cout << " 4 - duplicar valor no topo" << endl;
        cout << " 5 - trocar ordem dos valores no topo" << endl;
        cout << " 6 - inverter ordem dos valores na pilha" << endl;
        cout << " 7 - enfileirar valor" << endl;
        cout << " 8 - desenfileirar valor" << endl;
        cout << " 9 - comparar filas" << endl;
        cout << " 10 - juntar filas" << endl;
        cout << " 11 - procurar valor na fila" << endl;
        cout << " 12 - intercalar filas" << endl;
        cout << " 13 - intercalar filas em ordem crescente" << endl;
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
            method_02(refStack);
            break;
        case 3:
            method_03(refStack);
            break;
        case 4:
            method_04(refStack);
            break;
        case 5:
            method_05(refStack);
            break;
        case 6:
            method_06(refStack);
            break;
        case 7:
            method_07(refQueue1);
            break;
        case 8:
            method_08(refQueue1);
            break;
        case 9:
            method_09(refQueue1, refQueue2);
            break;
        case 10:
            method_10(refQueue1, refQueue2);
            break;
        case 11:
            method_11(refQueue1);
            break;
        case 12:
            method_12(refQueue1, refQueue2);
            break;
        case 13:
            method_13(refQueue1, refQueue2);
            break;
        default:
            cout << endl
                 << "ERRO: Valor invalido." << endl;
        }
    } while (x != 0);

    pause("Apertar ENTER para terminar");
    return (0);
}
