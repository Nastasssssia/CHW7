#include <stdio.h>

// Считать массив из 12 элементов и выполнить циклический сдвиг ВПРАВО на 4 элемента.

const int aSize = 12;
#define SHIFT 4

void input_array(int *arr, int size)
{
    for (int i = 0; i < size; i++)
    {
        scanf("%d", &arr[i]);
    }
}

void aPrint(int *array, int size)
{
    for (int i = 0; i < size; i++)
    {
        printf("%d ", array[i]);
    }
}

void shift_right(int *arr, int size, int shift)
{
    int temp[size];

    for (int i = 0; i < shift; i++)
    {
        temp[i] = arr[size - shift + i];
    }

    for (int i = 0; i < size - shift; i++)
    {
        temp[shift + i] = arr[i];
    }

    for (int i = 0; i < size; i++)
    {
        arr[i] = temp[i];
    }
}

int main(void)
{
    int array[aSize];

    input_array(array, aSize);
    shift_right(array, aSize, SHIFT);
    aPrint(array, aSize);

    return 0;
}
