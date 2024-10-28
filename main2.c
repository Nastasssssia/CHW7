#include <stdio.h>

// Ввести с клавиатуры массив из 5 элементов, найти минимальный из них.

const int aSize = 5;

int find_min(int *arr, int size)
{
    int min = arr[0];
    for (int i = 1; i < size; i++)
    {
        if (arr[i] < min)
        {
            min = arr[i];
        }
    }
    return min;
}

void input_array(int *arr, int size)
{
    for (int i = 0; i < size; i++)
    {
        scanf("%d", &arr[i]);
    }
}

int main(void)
{
    int array[aSize];

    input_array(array, aSize);

    printf("%d\n", find_min(array, aSize));

    return 0;
}