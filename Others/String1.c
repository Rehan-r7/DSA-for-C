/*THE BELOW PROGRAM IS TO FIND THE FIRST REPEATATIVE CHARACTER IN THE GIVEN STRING*/
#include<stdio.h>
char repeat(char a[],int n)
{
    int i=0,temp=0;
    int j=0;
    int ch=0;
    int ch2=0;
    while(a[i]!='\0')
    {
        for ( j = i+1; j< n; j++)
        {
             if (a[temp]==a[j])
                {
                 ch2=temp;
                break;
               }
            
            ch++;         
        }
       if (ch2!=0)
       {break;}
       
       else
       {temp++;}
        
        i++;
    }
    printf("%d  ",i);
    printf("%d  ",ch);
    //printf("%c  ",a[temp]);
    //printf("%d",ch2);
    return ch2;
}
int main()
{
    char res;
    char s[]="HI SISTEC";
    res=repeat(s,9);
    printf("\nFirst repeated element is : %c ",s[res]);
    
    return 0;
}
