#include <stdio.h>
#include <stdlib.h>

void swap(int *x, int *y)
{
    int temp = *x;
    *x = *y;
    *y = temp;
}

int partition(int A[], int low, int high)
{
    int pivot_item = A[low];
    int left, right;
    left = low+1;
    right = high;
    while (left < right)
    {
	while (A[left] < pivot_item && left<=high)
	   {
	    left++;
	   }
	while (A[right] >= pivot_item && right>=low)
	   {
	    right--;
	   }
	if (left < right)
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
    int pi;//partition index
    printf("\n");
    printf(" %d(low) %d(high)",low,high); //Low and High for each pass

    if (low < high)
    {
	pi = partition(A, low, high);
	Quicksort(A, low, pi-1);
	Quicksort(A, pi + 1, high);
    }
}
void print(int A[], int n)
{
	int i;
    printf("\n");
    for ( i = 0; i < n; i++)
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

    printf("After Sorting : - \n");
    print(A, n);

    return 0;
}
