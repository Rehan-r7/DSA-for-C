#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#define MAX 10
int stack[MAX];
int tos=-1;
void push(int);
int pop();
void display();
void push(int x)
{
	if(tos==MAX-1)
	{
		printf("Stack is full cannot insert elements !!!\n");
	}
	else
	{
		tos=tos+1;
		stack[tos]=x;
	}
}
int pop()
{
 int item;
 if(tos==-1)
 {
	printf("Stack is underflow!!!");
 }
 else{
 item=stack[tos];
 tos=tos-1;


 }
 return item;
}
void display()
{
	int i;
	if(tos==-1)
	{
		printf("Stack is empty");
	}

	else{
		for(i=tos;i>=0;i--)
		{  if(stack[tos]!=0){
		   printf("%d->",stack[i]);
		   }
		}
	     }
}
void main()
{
	int item1,a,choice;
	char ch;
	clrscr();
	printf("     MENU    \n");
	printf("1.PUSH\n2.POP\n3.Display\n");
	do{
		printf("Please enter your choice : ");
		scanf("%d",&choice);
		switch(choice)
		{
		  case 1 : printf("Enter a element to push : ");
			   scanf("%d",&a);
			   push(a);
			   break;
		  case 2 : pop();
			   break;
		  case 3 : display();
			   break;
		  case 4 : exit(0);break;
		  default : printf("Invalid choice!");break;
		}
		fflush(stdin);
		printf("\nDo you wish to continue press y/Y : ");
		scanf("%c",&ch);
	}while(ch=='y'||ch=='Y');

		getch();
}