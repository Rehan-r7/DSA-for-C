#include <stdio.h>
void swap(int *xp, int *yp)
{
    int temp;
    temp = *xp;
    *xp = *yp;
    *yp = temp;
}
void Bubble(int ar[], int n)
{
    int i, j;
    for (i = 0; i < n - 1; i++)
    {
        for (j = 0; j < n - i - 1; j++)
        {
            if (ar[j] > ar[j + 1])
            {
                swap(&ar[j], &ar[j + 1]);
            }
        }
    }
}
void display(int ar[], int n)
{
    int i;
    for (i = 0; i < n; i++)
    {
        printf("%d\t", ar[i]);
    }
}

int main()
{
    int ar[] = {3, 5, 2, 1, 4};
    int n;
    n = sizeof(ar) / sizeof(ar[0]);
    printf("Before Sorting :-\n");
    display(ar, n);
    Bubble(ar, n);
    printf("After Sorting :-\n");
    display(ar, n);
    return 0;
}
