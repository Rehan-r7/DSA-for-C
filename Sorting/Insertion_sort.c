#include<stdio.h>
#define MAX 20
void sort(int A[],int n)
{
    int i,j,temp;
    for (  i = 1; i < n; i++)
    {
        temp = A[i];
          j = i-1;
        while (j>=0 && A[j]>temp)
        {
           A[j+1] = A[j];
            j--;
        }   
            A[j+1]=temp;       
    }  
}
void print(int A[],int n)
{
    printf("printing the elements : ");
    for (int  i = 0; i < n; i++)
    {
        printf("%d ",A[i]);
    }
    
}
int main()
{ 
    int A[MAX];
    int n;
    printf("Enter the size of the array : ");
    scanf("%d",&n);
    printf("Enter the elements in the array upto (%d) : ",n);
    for (int  i = 0; i < n; i++)
    {
        scanf("%d",&A[i]);
    }
    printf("\nBefore Sorting :-\n");
    print(A,n);
    sort(A,n);
    printf("\nAfter Sorting :-\n");
    print(A,n);
 
return 0;
}