#include <stdio.h>

void insert(int a[], int N) 
{
    for (int i = 1; i < N; i++)
    {
        for (int j = i - 1; j >= 0; j--)
        {
            if (a[j + 1] > a[j]) 
            {
                a[j + 1] = a[j + 1] + a[j];
                a[j] = a[j + 1] - a[j];
                a[j + 1] = a[j + 1] - a[j];
            } else {
                break;
            }
        }
    }
}

int main() 
{
    int a[10] = {3, 4, 5, 2, 9, 1, 8, 7, 6, 10};

    insert(a, 10);
    printf("hello\n");

    for (int i = 0 ; i < 10; i++) 
    {
        printf("%d ", a[i]);
    }

    return 0;
}

