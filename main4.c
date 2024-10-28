#include <stdio.h>

// Считать массив из 10 элементов и отсортировать его по последней цифре.

const int aSize = 10;

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

void sort_by_last_digit(int *arr, int size)
{
    int temp;

    for (int i = 0; i < size - 1; i++)
    {
        for (int j = 0; j < size - i - 1; j++)
        {
            if ((arr[j] % 10) > (arr[j + 1] % 10))
            {

                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

int main(void)
{
    int array[aSize];

    input_array(array, aSize);
    sort_by_last_digit(array, aSize);
    aPrint(array, aSize);

    return 0;
}
