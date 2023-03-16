#include <stdio.h>
#define MAX 20
void swap(int *x, int *y)
{
    int temp = *x;
    *x = *y;
    *y = temp;
}
void sort(int A[], int n)
{
    int min,i,j;
    for ( i = 0; i < n - 1; i++) // n-1,because last element is already sorted
    {
        min = i;
        for ( j = i + 1; j< n; j++)
        {
            if (A[j] < A[min])
            {
                min = j;
            }
        }
        if (min != i)
        {
            swap(&A[min], &A[i]);
        }
    }
}
void print(int A[], int n)
{
    printf("printing the elements : ");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", A[i]);
    }
}
int main()
{
    int A[MAX];
    int n;
    printf("Enter the size of the array : ");
    scanf("%d", &n);
    printf("Enter the elements in the array upto (%d) : ", n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &A[i]);
    }
    printf("\nBefore Sorting :-\n");
    print(A, n);
    sort(A, n);
    printf("\nAfter Sorting :-\n");
    print(A, n);

    return 0;
}