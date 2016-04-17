#include <stdio.h>

void select_sort(int a[], int N)
{
    for (int i = 0; i < N - 1; i++)
    {
        int min = a[i];
        int min_index = i;
        for (int j = i + 1; j < N; j++) 
        {
            if (a[j] < min)
            {
                min = a[j];
                min_index = j;
            }
        }
        int temp = a[i];
        a[i] = a[min_index];
        a[min_index] = temp;
    }
}

int main() 
{
    int a[] = {9, 4, 2, 1, 3, 5, 0, 7, 8, 6};

    select_sort(a, 10);
    for (int i = 0; i < 10; i++) 
    {
        printf("%d\n", a[i]);
    }
    return 0;
}