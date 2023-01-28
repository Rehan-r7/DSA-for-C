#include<stdio.h>
int long fact(int n);
int main()
{ 
 int a;
 printf("Enter a number : ");
 scanf("%d",&a);
 printf("Factorial of %d = %ld",a,fact(a));
return 0;
}
int long fact(int n)
{
    if (n>=1)
    {
        return n*fact(n-1);
    }
    else
    {
        return 1;
    }
    
    
}