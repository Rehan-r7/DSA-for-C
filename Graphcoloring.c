// Online C compiler to run C program online
#include <stdio.h>
#include <stdbool.h>
#define MAX 4
int X[MAX];
int n = 4;
int m = 2;
int G[MAX][MAX] = { {0,1,0,1},
                    {1,0,1,0},
                    {0,1,0,1},
                    {1,0,1,0}};
void display()
{
    for(int i=1;i<=n;i++)
    {
        printf("X[%d] = %d ",i,X[i]);
        printf("\n");
    }
}
void mColoring(int k)
{
    do
    {
        X[k] = getNodeColor(k);
        if(X[k] == 0)
        {
            return;
        }
        if(k==n)
        {
            display();
        }
        else
        {
            mColoring(k+1);
        }
    }while(true);
}
int getNodeColor(int k)
{
    do
    {
        X[k] = (X[k]+1)%(n+1);
        
        if(X[k] == 0 )
        {
            return X[k];
        }
        for(int j = 1;j<=n;j++)
        {
            if(G[k][j] == 1 && X[k]==X[j])
            {
                break;
            }
            if(j == n+1);
            return X[k];
        }
    }while(true);
}
int main() {
     int X[MAX];
    for (int i = 0; i < MAX; i++)
        X[i] = 0;
       mColoring(m);
    return 0;
}
