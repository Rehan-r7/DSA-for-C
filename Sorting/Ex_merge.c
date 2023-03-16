#include <stdio.h>
#include <stdlib.h>
#define MAX 10

void merge(int A[], int l, int mid, int r)
{
    int i, j, k;
    int n1 = mid - l + 1;
    int n2 = r - mid;

    /* creating two temporary arrays */

    int L[n1], R[n2];

    /* Copying data to temporary arrays */
    for (i = 0; i < n1; i++)
    {
        L[i] = A[l + i];
    }

    for (j = 0; j < n2; j++)
    {
        R[j] = A[mid + 1 + j];
    }

    /* Merge the temporary arrays*/
    i = 0;
    j = 0;
    k = l;

    while (i < n1 && j < n2)
    {
        if (L[i] <= R[j])
        {
            A[k] = L[i];
            i++;
        }
        else
        {
            A[k] = R[j];
            j++;
        }
        k++;
    }

    /* Copy the remaining elemets of  L[],if there are any */
    while (i < n1)
    {
        A[k] = L[i];
        i++;
        k++;
    }
    /* Copy the remaining elemets of  R[],if there are any */

    while (j < n2)
    {
        A[k] = R[j];
        j++;
        k++;
    }
}
/* will be called unless their is only element left in the sub-arrays*/
void mergesort(int A[], int l, int r)
{
    if (l < r)
    {
        int m = l + (r - l) / 2;

        mergesort(A, l, m);
        mergesort(A, m + 1, r);

        merge(A, l, m, r);
    }
}

void print(int A[], int size)
{
    for (int i = 0; i < size; i++)
    {
        printf("%d  ", A[i]);
    }
}
int main()
{
    int arr[MAX];
    int size,i;

    printf("Enter the size of the array : ");
    scanf("%d",&size);

    printf("Enter the elements in the array upto (%d) : ",size);
    for ( i = 0; i < size; i++)
    {
        scanf("%d",&arr[i]);
    }
    //printf("Size : %d", size);
    printf("\nBefore Sorting :- \n");

    print(arr, size);

    mergesort(arr, 0,size - 1);

    printf("\nAfter Sorting :- \n");

    print(arr, size);

    return 0;
}