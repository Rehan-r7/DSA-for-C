#include <stdio.h>
#include <stdlib.h>
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
void display(int A[],int n)
{
    printf("printing the elements : ");
    for (int  i = 0; i < n; i++)
    {
        printf("%d ",A[i]);
    }
}
int fcfs(int A[],int c,int cur,int res,int size,int dir)
{
    int temp;
   // res = cur - A[0]; // current track - first track in the list
   for( temp =0 ;temp<size;temp++)
   {
       if(A[temp]==cur)
       {
            break;
       }
   }
    printf("%d ", A[temp]);
    
    if(dir==0)//right
    {
        for(int i = temp; i<size-1;i++)
        {
            res+= A[i+1]-A[i];
            res+= abs((c-1) - res);
        }
        for(int i = temp-1;i>A[1];i--)
        {
            res+= A[i]-A[i-1];
        }
    }
    
    
    // for (int i = 0; i < size-1; i++)
    // {
    //     if (A[i] > c) // break if given track is out of cylinders
    //         break;
    //     if(dir == L || dir == l)
    //     {
            
    //     }
    //     else if(dir == R || dir == r)
    //     {
            
    //     }
    //     else
    //     {  prinfr("Enter valid direction!!!!!");}
        
    //     if (A[i] <= A[i + 1]) 
    //     { res += A[i + 1] - A[i]; }

    //     else
    //     { res += A[i] - A[i + 1]; }

    //     printf(" %d ", res);
    // }
    return res;
}

int main()
{
    int A[MAX];
    int size,dir;
    printf("Enter the size of the array : ");
    scanf("%d",&size);
    
    for(int i = 0; i < size; i++)
    {
        scanf("%d",&A[i]);
    }
    printf("Enter direction 0 or 1 (Right = 0 and Left = 1) : ");
    scanf("%d",&dir);
    sort(A,size);
    display(A,size);
    printf("\n");
    
   int ans = fcfs(A,200,53,0,size,dir);// cylinder = 200,current = 53,result =0 
   printf("\nThe Final Time Taken : %d", ans); 

}
