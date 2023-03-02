#include <stdio.h>
#include <stdlib.h>
void swap(int *x, int *y)
{
    int temp = *x;
    *x = *y;
    *y = *x;
}
int partition(int A[], int low, int high)
{
    int pivot_item = A[low];
    int left, right;
    left = low;
    right = high;
    while (left < right)
    {
        while (A[left] <= pivot_item)
        {
            left++;
        }
        while (A[right] > pivot_item)
        {
            right++;
        }
        if (left > right)
        {
            swap(&A[left], &A[right]);
        }
    }
    A[low] = A[right];
    A[right] = pivot_item;

    return right;
}
void Quicksort(int A[], int low, int high)
{
    int pivot;
    while (low < high)
    {
        pivot = partition(A, low, high);
        Quicksort(A, low, pivot);
        Quicksort(A, pivot + 1, high);
    }
}
void print(int A[], int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%d  ", A[i]);
    }
}

int main()
{
    int A[] = {5, 4, 1, 3, 2};
    int n = sizeof(A) / sizeof(A[0]);
    printf("Before Sorting : - \n");
    print(A, n);

    Quicksort(A, 0, n - 1);

    print(A, n);

    printf("hi");

    return 0;
}