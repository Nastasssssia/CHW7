#include <stdio.h>

// Дан массив из 10 элементов. Определить, какое число в массиве встречается
// чаще всего. Гарантируется, что такое число ровно 1

#include <stdio.h>

int main(void)
{
    int arr[10] = {4, 1, 2, 1, 11, 2, 34, 11, 0, 11};
    int max_count = 0;
    int most_frequent;

    for (int i = 0; i < 10; i++)
    {
        int count = 1;

        for (int j = i + 1; j < 10; j++)
        {
            if (arr[j] == arr[i])
            {
                count++;
            }
        }

        if (count > max_count)
        {
            max_count = count;
            most_frequent = arr[i];
        }
    }

    printf("%d\n", most_frequent);

    return 0;
}
