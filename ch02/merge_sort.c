#include <stdio.h>


void merge(int a[], int prior, int mid, int end)
{
    int size_b = mid - prior + 2;
    int size_c = end - mid + 1;
    int b[size_b];
    int c[size_c];

    for (int i = 0; i < size_b - 1; i++) 
    {
        b[i] = a[i + prior];
    }
    b[size_b - 1] = 0x7fffffff;

    for (int i = 0; i < size_c - 1; i++)
    {
        c[i] = a[i + mid + 1];
    }
    c[size_c - 1] = 0x7fffffff;

    int j = 0;
    int k = 0;

    for (int i = prior; i <= end; i++)
    {
        if (b[j] < c[k]) {
            a[i] = b[j];
            j++;
        } else {
            a[i] = c[k];
            k++;
        }
    }
}


void merge_sort(int a[], int prior, int end)
{
    if (prior == end) {
        return;
    }
    int mid = (prior + end)/2;

    merge_sort(a, prior, mid);
    merge_sort(a, mid + 1, end);
    merge(a, prior, mid, end);
}

int main() 
{
    int a[] = {3, 4, 9, 1, 0, 7, 8, 2, 6, 5};

    merge_sort(a, 0, 9);
    for (int i = 0; i < 10; i++)
    {
        printf("%d\n", a[i]);
    }
    return 0;
}



