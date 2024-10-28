#include <stdio.h>

// Ввести с клавиатуры массив из 5 элементов, найти среднее арифметическое
//  всех элементов массива.

const int aSize = 5;

double calculate_awg(int *arr, int size)
{
    int sum = 0;
    for (int i = 0; i < size; i++)
    {
        sum += arr[i];
    }
    return (double)sum / size;
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

    printf("%.3f\n", calculate_awg(array, aSize));

    return 0;
}