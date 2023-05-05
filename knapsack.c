#include<stdio.h>
int max(int a,int b)
{
    return (a>b) ? a : b;
}
int Knapsack(int w,int wt[],int val[],int n)
{
    if(n == 0 || w == 0)
    return 0;

    if(wt[n-1] > w)
    return Knapsack(w,wt,val,n-1);

    else{
        return max(val[n-1]+Knapsack(w-wt[n-1],wt,val,n-1),Knapsack(w,wt,val,n-1));
    }
}
// int knapsack(int values[],int weight[],int n,int wt){
//     int i,w;
//     int k[n+1][w+1];
//     for(i = 0;i<= n;i++)
//     {
//         for(w = 0;w<= wt;w++)
//         {
//             if(i == 0 || w == 0)
//             {
//                 k[i][w] = 0;
//             }
//             else if(weight[i-1]<= wt)
//             {
//                 k[i][w] = max(values[i-1]+k[i-1][w-weight[i-1]],k[i-1][w]);
//             }
//             else
//             {
//                 k[i][w] = k[i-1][w];
//             }
//         }
//     }
//     return k[n][wt];
// }
int main()
{
    int values[] = {60,100,120}; 
    //int profit[] = {1,2,5,6};  
    int weight[] = {10,20,30};
    int w = 50;
    int n = 3;
    printf("%d",Knapsack(w,weight,values,n));
    //printf("%d",knapsack(values,weight,n,w));
    return 0;
}
