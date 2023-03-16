#include <stdio.h>
#include <stdlib.h>
#define MAX 20

int BinarySearch(int A[], int l, int r, int x)
{
    if (r >= l)
    {
        int mid = l + (r - l) / 2;
        if (A[mid] == x)
        {
            return mid;
        }

        else if (A[mid] > x)
        {
            return BinarySearch(A, l, mid - 1, x);
        }

        else
        {
            return BinarySearch(A, mid + 1, r, x);
        }
    }

    return -1; // we reach here when element is not present in array
}

int main()
{
    int arr[MAX];
    int size, i;
    int x;

    printf("Enter the size of the array : ");
    scanf("%d", &size);

    printf("Enter the elements in the array upto (%d) **In Sorted form** : ", size);
    for (i = 0; i < size; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("Enter the element to search from the given array : ");
    scanf("%d", &x);

    int result = BinarySearch(arr, 0, size - 1, x);

    (result == -1)
        ? printf("Element is not present in array ! ")
        : printf("Element is present at Index (%d) ", result);

    return 0;
}
